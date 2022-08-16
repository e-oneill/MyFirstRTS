// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSCharacterBase.h"
#include "RTSUnitComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "RTSSelectable.h"
#include "RTSOrderable.h"
#include "RTSPlayerPawn.h"
#include "RTSResource.h"
#include "EResourceType.h"
#include "AIController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
#include "RTSBuildingBase.h"
#include "Kismet/GameplayStatics.h"
#include "RTSGameState.h"
#include "RTSAttributeComponent.h"
#include "RTSOrderTargetComponent.h"
// Sets default values
ARTSCharacterBase::ARTSCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UnitComponent = CreateDefaultSubobject<URTSUnitComponent>(TEXT("UnitComponent"));
	AttributeComponent = CreateDefaultSubobject<URTSAttributeComponent>(TEXT("AttributeComponent"));
	ExtractionDistance = 800.f;

	OrderTargetComponent = CreateDefaultSubobject<URTSOrderTargetComponent>(TEXT("OrderTargetComponent"));
}


// Called when the game starts or when spawned
void ARTSCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	OrderTargetComponent->AttributeComponent = AttributeComponent;
}


void ARTSCharacterBase::Deselect_Implementation()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (PC)
	{
		APawn* SelectorPawn = PC->GetPawn();
		if (SelectorPawn)
		{
			ARTSPlayerPawn* RTSPawn = Cast<ARTSPlayerPawn>(SelectorPawn);
			if (RTSPawn)
			{
				RTSPawn->RemoveActorFromSelection(this);
			}
		}
	}
}

void ARTSCharacterBase::Select_Implementation()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (PC)
	{
		APawn* SelectorPawn = PC->GetPawn();
		if (SelectorPawn)
		{
			ARTSPlayerPawn* RTSPawn = Cast<ARTSPlayerPawn>(SelectorPawn);
			if (RTSPawn)
			{
				RTSPawn->AddActorToSelection(this);
			}
		}
	}
}

void ARTSCharacterBase::ExecuteOrder_Implementation()
{

	//in this function, we handle the order and decide whether it is coming from a player a pawn or is an AI driven command.
	//start by cancelling the current state of the AI and unbind the delegate tied to the AI controller's stop move event
	bIsExtracting = false;
	bIsConstructing = false;
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}

	//check if we have been given an order by a player
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		APawn* SelectorPawn = PC->GetPawn();
		if (SelectorPawn)
		{
			ARTSPlayerPawn* RTSPawn = Cast<ARTSPlayerPawn>(SelectorPawn);
			if (RTSPawn)
			{
				OrderTarget = RTSPawn->GetTargetActor();
				URTSOrderTargetComponent* TargetOrderComponent = Cast<URTSOrderTargetComponent>(OrderTarget->GetComponentByClass(URTSOrderTargetComponent::StaticClass()));
				if (TargetOrderComponent)
				{
					IRTSOrderable::Execute_HandleOrderToActor(this, OrderTarget);
				}
				else
				{
					IRTSOrderable::Execute_HandleOrderToLocation(this, RTSPawn->GetOrderTargetLocation());
				}
			}
		}
	}
}

void ARTSCharacterBase::HandleOrderToActor_Implementation(AActor* TargetActor)
{
	//Make sure the Actor based in contains an order component	
	URTSOrderTargetComponent* TargetOrderComponent = Cast<URTSOrderTargetComponent>(OrderTarget->GetComponentByClass(URTSOrderTargetComponent::StaticClass()));
	if (!TargetOrderComponent)
	{
		MoveToLocation(TargetActor->GetActorLocation());
		return;
	}
	OrderTarget = TargetActor;
	if (bCanExtractResource && TargetOrderComponent->bResource)
	{
		LastExploitedResource = TargetOrderComponent;
		MoveToResourceAndExploit(LastExploitedResource);
		return;
	}

	if (ResourcesCarried > 0 && TargetOrderComponent->bResourceDropOff)
	{
		bShouldAutoReturnToResource = false;
		MoveToAndDepositResources(TargetActor);
	}

	if (bCanConstruct && TargetOrderComponent->bCanBeConstructed)
	{
		//This is old code, to be replaced if I create a construction site actor
		ARTSBuildingBase* TargetBuilding = Cast<ARTSBuildingBase>(TargetActor);
		if (TargetBuilding)
		{
			if (bCanConstruct && !TargetBuilding->GetIsConstructed())
			{
				MoveToBuildingAndConstruct(TargetBuilding);
			}
		}
	}
	//No Specific order found, fall back to move to actor location
	MoveToLocation(TargetActor->GetActorLocation());
}

void ARTSCharacterBase::HandleOrderToLocation_Implementation(FVector Location)
{
	MoveToLocation(Location);
	//throw std::logic_error("The method or operation is not implemented.");
}

void ARTSCharacterBase::CancelOrder_Implementation()
{

}

void ARTSCharacterBase::MoveToResourceAndExploit(URTSOrderTargetComponent* TargetResource)
{
	if (CarriedResource == TargetResource->ResourceType && ResourcesCarried == ResourceCapacity)
	{
		DepositToNearestCollector();
		return;
	}
	bIsMovingToExploitResource = true;
	//FVector MoveTarget = TargetResource->GetActorLocation();
	
	MoveToLocation(TargetResource->GetOwner()->GetActorLocation());
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::ExploitResource);
	}
}

void ARTSCharacterBase::MoveToAndDepositResources(AActor* TargetActor)
{
	MoveToLocation(TargetActor->GetActorLocation());

	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::DepositResource);
	}
}

void ARTSCharacterBase::ExploitResource(FAIRequestID Request, const FPathFollowingResult& Result)
{
	if (GetDistanceTo(OrderTarget) > ExtractionDistance) //using extraction distance for now, need to decide whether I should use one interaction distance or separate for each type of interaction
	{
		//MoveToLocation(OrderTarget->GetActorLocation());
		return;
	}
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	float DistanceToTarget = GetDistanceTo(LastExploitedResource->GetOwner());
	if (DistanceToTarget >= ExtractionDistance)
	{
		MoveToResourceAndExploit(LastExploitedResource);
	}
	else
	{
		GetWorldTimerManager().SetTimer(PrimaryActionTimer,this, &ARTSCharacterBase::FinishExploitResource, ExtractionCooldown, true,ExtractionCooldown);
		//bIsMovingToExploitResource = false;
	}


}

void ARTSCharacterBase::FinishExploitResource()
{
	if (!LastExploitedResource)
	{
		return;
	}

	if (ResourcesCarried >= ResourceCapacity || LastExploitedResource->GetResourceValue() <= 0)
	{
		bIsExtracting = false;
		GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
		return;
	}


	if (LastExploitedResource && CarriedResource != LastExploitedResource->ResourceType)
	{
		ResourcesCarried = 0;
		CarriedResource = LastExploitedResource->ResourceType;
	}

	int NewResources = ExtractionRate;
	int CurrentResourceValue = LastExploitedResource->GetResourceValue();
	if (CurrentResourceValue <= ExtractionRate)
	{
		NewResources = LastExploitedResource->GetResourceValue();
	}
	NewResources = (ResourceCapacity > (ResourcesCarried + NewResources)) ? NewResources : (ResourceCapacity - ResourcesCarried);

	ResourcesCarried += NewResources;
	UE_LOG(LogTemp, Log, TEXT("Resources Carried: %d"), ResourcesCarried);
	LastExploitedResource->SetResourceValue(CurrentResourceValue - NewResources);
	if (ResourcesCarried >= ResourceCapacity)
	{
		DepositToNearestCollector();
	}
	//else
	//{
	//	//ExploitResource(nullptr, nullptr);
	//	MoveToResourceAndExploit(LastExploitedResource);
	//}
}

void ARTSCharacterBase::MoveToLocation(FVector Target)
{
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->MoveToLocation(Target);
	}
}

void ARTSCharacterBase::DepositToNearestCollector()
{
	bIsExtracting = false;
	bShouldAutoReturnToResource = true;
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	TArray<AActor*> Buildings;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARTSBuildingBase::StaticClass(), Buildings);
	float BestDistance = -1;
	ARTSBuildingBase* BestBuilding = nullptr;
	for (int i = 0; i < Buildings.Num(); i++)
	{
		ARTSBuildingBase* Building =  (Cast<ARTSBuildingBase>(Buildings[i]));
		URTSOrderTargetComponent* TargetOrderComponent = Cast<URTSOrderTargetComponent>(Building->GetComponentByClass(URTSOrderTargetComponent::StaticClass()));
		if (TargetOrderComponent && Building->GetIsConstructed() && Building->GetOwningPlayerId() == OwningPlayerId)
		{
			if (TargetOrderComponent->ValidResources.Contains(CarriedResource))
			{
				if (BestDistance == -1 || GetDistanceTo(Building) < BestDistance)
				{
					BestDistance = GetDistanceTo(Building);
					BestBuilding = Building;
				}
			}
		}
	}
	if (BestDistance == -1 || BestBuilding == nullptr)
	{
		
		return;
	}
	
	OrderTarget = BestBuilding;
	MoveToAndDepositResources(OrderTarget);

}

void ARTSCharacterBase::DepositResource(FAIRequestID Request, const FPathFollowingResult& Result)
{
	if (GetDistanceTo(OrderTarget) > ExtractionDistance) //using extraction distance for now, need to decide whether I should use one interaction distance or separate for each type of interaction
	{
		//MoveToLocation(OrderTarget->GetActorLocation());
		return;
	}
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	if (GetDistanceTo(OrderTarget) <= 800.f)
	{
		ARTSGameState* GameState = Cast<ARTSGameState>(GetWorld()->GetGameState());
		if (GameState)
		{
			
			if (OwningPlayerId < GameState->GetPlayerRecords().Num())
			{
				FPlayerRecord* OwningPlayerRecord = GameState->GetPlayerRecordByIndex(OwningPlayerId);
				OwningPlayerRecord->ModifyResource(CarriedResource, ResourcesCarried);
			}
		}
		//CarriedResource 
		ResourcesCarried = 0;
		UE_LOG(LogTemp, Log, TEXT("Resources Carried: %d"), ResourcesCarried);
	}

	if (LastExploitedResource && bShouldAutoReturnToResource)
	{
		OrderTarget = LastExploitedResource->GetOwner();
		MoveToResourceAndExploit(LastExploitedResource);
		
	}
		
}

void ARTSCharacterBase::MoveToBuildingAndConstruct(ARTSBuildingBase* TargetBuilding)
{
	MoveToLocation(TargetBuilding->GetActorLocation());
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::ConstructBuilding);
	}
}

void ARTSCharacterBase::ConstructBuilding(FAIRequestID Request, const FPathFollowingResult& Result)
{
	if (GetDistanceTo(OrderTarget) > ExtractionDistance) //using extraction distance for now, need to decide whether I should use one interaction distance or separate for each type of interaction
	{
		//MoveToLocation(OrderTarget->GetActorLocation());
		return;
	}
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		//if (AIController->GetPathFollowingComponent()->IsActive)
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	bIsConstructing = true;
	GetWorldTimerManager().SetTimer(PrimaryActionTimer, this, &ARTSCharacterBase::FinishConstructBuilding, ConstructTickCooldown, true, ConstructTickCooldown);
}

void ARTSCharacterBase::FinishConstructBuilding()
{
	ARTSBuildingBase* TargetBuilding = Cast<ARTSBuildingBase>(OrderTarget);
	if (TargetBuilding && !TargetBuilding->GetIsConstructed())
	{
		float BuiltPercent = TargetBuilding->GetAttributeComponent()->Heal(this, ConstructRate);
		TargetBuilding->OnConstruction.Broadcast(TargetBuilding, BuiltPercent, this);
	}
	else
	{
		bIsConstructing = false;
		GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	}
}

void ARTSCharacterBase::ConstructNearestUnfinishedBuilding()
{

}

// Called every frame
void ARTSCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsMovingToExploitResource)
	{
		if (GetDistanceTo(LastExploitedResource->GetOwner()) <= ExtractionDistance)
		{
			bIsExtracting = true;
			FPathFollowingResult Result;
			FAIRequestID ID;
			ExploitResource(ID, Result);
			bIsMovingToExploitResource = false;
		}

	}
}

// Called to bind functionality to input
void ARTSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

