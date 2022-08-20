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
#include "Components/StaticMeshComponent.h"
#include "RTSAIController.h"
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
	LastAITick = GetWorld()->GetTimeSeconds();
	MyController = Cast<ARTSAIController>(GetController());
	if (ensureMsgf(MyController != nullptr, TEXT("%s does not have the base AI Controller class assigned, please assign a child of ARTSAIController to this character."), *GetActorNameOrLabel()))
	{
		//
		GetWorldTimerManager().SetTimer(AIStatusTickTimerHandle, this, &ARTSCharacterBase::AIStatusTick, AITickDuration, true, -1.f);
	}
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
	CharacterStatus = Idle;
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
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	//Make sure the Actor based in contains an order component
	//FHitResult LineTraceAgainstTarget;
	//FCollisionQueryParams QueryParams;
	//TargetActor->ActorLineTraceSingle(LineTraceAgainstTarget, GetActorLocation(), TargetActor->GetActorLocation(), ECC_WorldDynamic,QueryParams);
	//MoveTargetOnActor = LineTraceAgainstTarget.Location;

	URTSOrderTargetComponent* TargetOrderComponent = Cast<URTSOrderTargetComponent>(OrderTarget->GetComponentByClass(URTSOrderTargetComponent::StaticClass()));
	if (!TargetOrderComponent)
	{
		MoveToLocation(TargetActor->GetActorLocation());
		//MoveToLocation(MoveTargetOnActor);
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
	//MoveToLocation(MoveTargetOnActor);
}

TSubclassOf<UStaticMeshComponent> ARTSCharacterBase::GetOrderPreviewMesh_Implementation()
{
	return OrderPreviewMarker;
}

void ARTSCharacterBase::HandleOrderToLocationAndRotation_Implementation(FVector Location, FRotator Rotation)
{
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	CharacterStatus = Moving;
	SetMission(EMissionType::MoveToLocation, Location, nullptr);
	MoveToLocation(Location);

	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::FaceTargetDirection);
	}

	
}

void ARTSCharacterBase::HandleOrderToLocation_Implementation(FVector Location)
{
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
	CharacterStatus = Moving;
	SetMission(EMissionType::MoveToLocation, Location, nullptr);
	MoveToLocation(Location);
	//throw std::logic_error("The method or operation is not implemented.");
}

void ARTSCharacterBase::CancelOrder_Implementation()
{

}

void ARTSCharacterBase::MoveToResourceAndExploit(URTSOrderTargetComponent* TargetResource)
{
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	if (CarriedResource == TargetResource->ResourceType && ResourcesCarried == ResourceCapacity)
	{
		DepositToNearestCollector();
		return;
	}
	bIsMovingToExploitResource = true;
	FVector MoveTarget = TargetResource->GetOwner()->GetActorLocation();
	CharacterStatus = MovingToExtract;
	SetMission(ExtractAndDeposit, MoveTarget, TargetResource->GetOwner());
	MoveToLocation(TargetResource->GetOwner()->GetActorLocation());
	//MoveToLocation(MoveTargetOnActor);
	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::ExploitResource);
	}
}

void ARTSCharacterBase::MoveToAndDepositResources(AActor* TargetActor)
{
	FVector MoveTarget = TargetActor->GetActorLocation();
	MoveToLocation(TargetActor->GetActorLocation());
	//MoveToLocation(MoveTargetOnActor);
	CharacterStatus = MovingToDeposit;
	SetMission(ExtractAndDeposit, MoveTarget, TargetActor);
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
	CharacterStatus = Extracting;
	SetMission(ExtractAndDeposit, LastExploitedResource->GetOwner()->GetActorLocation(), LastExploitedResource->GetOwner());

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
		CharacterStatus = Idle;
		return;
	}

	if (ResourcesCarried >= ResourceCapacity || LastExploitedResource->GetResourceValue() <= 0)
	{
		bIsExtracting = false;
		CharacterStatus = Idle;
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
		//CharacterStatus = Moving;
		//AIController->MoveToLocation(Target);
		AIController->MoveToLocation(Target, 100.f, false,true,true,true);
	}
}

void ARTSCharacterBase::FaceTargetDirection(FAIRequestID Request, const FPathFollowingResult& Result)
{
	SetActorRotation(TargetRotation);
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
}

void ARTSCharacterBase::DepositToNearestCollector()
{
	CharacterStatus = MovingToDeposit;
	
	bIsExtracting = false;
	bIsDepositing = true;
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
	SetMission(ExtractAndDeposit, OrderTarget->GetActorLocation(), OrderTarget);
}

void ARTSCharacterBase::DepositResource(FAIRequestID Request, const FPathFollowingResult& Result)
{
	AAIController* AIController = Cast<AAIController>(GetController());
	//if (AIController)
	//{
	//	AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	//}
	if (CharacterStatus == Idle)
	{
		return;
	}
	//if (GetDistanceTo(OrderTarget) > ExtractionDistance) //using extraction distance for now, need to decide whether I should use one interaction distance or separate for each type of interaction
	//{
	//	//MoveToLocation(OrderTarget->GetActorLocation());
	//	return;
	//}
	
	if (GetDistanceTo(OrderTarget) <= 800.f && CharacterStatus != Depositing)
	{
		CharacterStatus = Depositing;
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
		if (LastExploitedResource && bShouldAutoReturnToResource)
		{
			CharacterStatus = MovingToExtract;
			OrderTarget = LastExploitedResource->GetOwner();
			MoveToResourceAndExploit(LastExploitedResource);
		}
		else {
			CharacterStatus = Idle;
		}
	}
}

void ARTSCharacterBase::MoveToBuildingAndConstruct(ARTSBuildingBase* TargetBuilding)
{
	CharacterStatus = Moving;
	MoveToLocation(TargetBuilding->GetActorLocation());
	//MoveToLocation(MoveTargetOnActor);
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::ConstructBuilding);
	}
	SetMission(MoveToAndBuild, TargetBuilding->GetActorLocation(), TargetBuilding);
}

void ARTSCharacterBase::ConstructBuilding(FAIRequestID Request, const FPathFollowingResult& Result)
{
	if (GetDistanceTo(OrderTarget) > ExtractionDistance) //using extraction distance for now, need to decide whether I should use one interaction distance or separate for each type of interaction
	{
		//MoveToLocation(OrderTarget->GetActorLocation());
		return;
	}
	//AAIController* AIController = Cast<AAIController>(GetController());
	//if (AIController)
	//{
	//	//if (AIController->GetPathFollowingComponent()->IsActive)
	//	AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);

	//}
	UnbindAllAIDelegates();
	CharacterStatus = Constructing;
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
		CharacterStatus = Idle;
		SetMission(EMissionType::Nothing, GetActorLocation(), nullptr);
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

}

void ARTSCharacterBase::AIStatusTick_Implementation()
{
	float CurrentTime = GetWorld()->GetTimeSeconds();
	float DeltaTime = CurrentTime - LastAITick;

	if (CharacterStatus == MovingToExtract)
	{
		if (GetDistanceTo(LastExploitedResource->GetOwner()) <= ExtractionDistance)
		{
			bIsExtracting = true;
			CharacterStatus = Extracting;
			FPathFollowingResult Result;
			FAIRequestID ID;
			ExploitResource(ID, Result);
			bIsMovingToExploitResource = false;
		}
	}

	if (Mission.MissionType == EMissionType::MoveToLocation)
	{
		if (FMath::Abs((GetActorLocation() - Mission.MissionTargetLocation).Size()) <= 200.f)
		{
			UnbindAllAIDelegates();
			SetMission(Nothing, GetActorLocation(), nullptr);
			CharacterStatus = Idle;
		}
		else if (MyController->GetPathFollowingComponent()->GetStatus() == EPathFollowingStatus::Idle) {
			MoveToLocation(Mission.MissionTargetLocation);
		}
	}
}

// Called to bind functionality to input
void ARTSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARTSCharacterBase::SetOwningPlayerId(int PlayerId)
{
	//this method should check that the player ID is valid, write function in game state
	OwningPlayerId = PlayerId;
}

void ARTSCharacterBase::SetMission(EMissionType MissionType, FVector TargetLocation, AActor* TargetActor)
{
	Mission.MissionType = MissionType;
	Mission.MissionTargetLocation = TargetLocation;
	Mission.TargetActor = TargetActor;
}

void ARTSCharacterBase::ReturnToIdle()
{
	SetMission(Nothing, GetActorLocation(), nullptr);
	CharacterStatus = Idle;

}

void ARTSCharacterBase::UnbindAllAIDelegates()
{
	MyController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	GetWorldTimerManager().ClearTimer(PrimaryActionTimer);
}

