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

// Sets default values
ARTSCharacterBase::ARTSCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UnitComponent = CreateDefaultSubobject<URTSUnitComponent>(TEXT("UnitComponent"));
	AttributeComponent = CreateDefaultSubobject<URTSAttributeComponent>(TEXT("AttributeComponent"));
	ExtractionDistance = 800.f;
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
	bIsExtracting = false;
	bIsConstructing = false;
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);

	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}

	if (PC)
	{
sa		APawn* SelectorPawn = PC->GetPawn();
		if (SelectorPawn)
		{
			ARTSPlayerPawn* RTSPawn = Cast<ARTSPlayerPawn>(SelectorPawn);
			if (RTSPawn)
			{
				OrderTarget = RTSPawn->GetTargetActor();
				FVector MoveTarget = RTSPawn->GetOrderTargetLocation();
				//Move to the location of the order
				MoveToLocation(MoveTarget);
				//check target for the type of actor
				//Split orders up based on the target
				
				//Target is a resource
				ARTSResource* ResourceTarget = Cast<ARTSResource>(OrderTarget);
				if (ResourceTarget)
				{
					if (bCanExtractResource)
					{
						LastExploitedResource = ResourceTarget;
						MoveToResourceAndExploit(LastExploitedResource);
					}
				}
				//Target is a building
				ARTSBuildingBase* TargetBuilding = Cast<ARTSBuildingBase>(OrderTarget);
				if (TargetBuilding)
				{	
					if (ResourcesCarried > 0 && TargetBuilding->GetIsConstructed() && TargetBuilding->GetIsResourceDropOff() && TargetBuilding->GetValidResources().Contains(CarriedResource) && TargetBuilding->GetOwningPlayerId() == OwningPlayerId)
					{
						//we are manually ordering to return to a building, drop of resources and don't return to resource
						bShouldAutoReturnToResource = false;
						MoveToAndDepositResources(OrderTarget);
					}
					if (bCanConstruct && !TargetBuilding->GetIsConstructed())
					{
						MoveToBuildingAndConstruct(TargetBuilding);
					}
				}
			}
		}
	}
}

void ARTSCharacterBase::CancelOrder_Implementation()
{

}

void ARTSCharacterBase::MoveToResourceAndExploit(ARTSResource* TargetResource)
{
	if (CarriedResource == TargetResource->GetType() && ResourcesCarried == ResourceCapacity)
	{
		DepositToNearestCollector();
		return;
	}
	bIsMovingToExploitResource = true;
	//FVector MoveTarget = TargetResource->GetActorLocation();
	MoveToLocation(TargetResource->GetActorLocation());
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
		MoveToLocation(OrderTarget->GetActorLocation());
		return;
	}
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	float DistanceToTarget = GetDistanceTo(LastExploitedResource);
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


	if (LastExploitedResource && CarriedResource != LastExploitedResource->GetType())
	{
		ResourcesCarried = 0;
		CarriedResource = LastExploitedResource->GetType();
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
		if (Building->GetIsConstructed() && Building->GetIsResourceDropOff() && Building->GetOwningPlayerId() == OwningPlayerId)
		{
			if (Building->GetValidResources().Contains(CarriedResource))
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
		MoveToLocation(OrderTarget->GetActorLocation());
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
		MoveToResourceAndExploit(LastExploitedResource);
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
		MoveToLocation(OrderTarget->GetActorLocation());
		return;
	}
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
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

// Called when the game starts or when spawned
void ARTSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void ARTSCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsMovingToExploitResource)
	{
		if (GetDistanceTo(LastExploitedResource) <= ExtractionDistance)
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

