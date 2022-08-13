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
// Sets default values
ARTSCharacterBase::ARTSCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UnitComponent = CreateDefaultSubobject<URTSUnitComponent>(TEXT("UnitComponent"));

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
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	if (PC)
	{
		APawn* SelectorPawn = PC->GetPawn();
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
				if (bCanExtractResource)
				{
					ARTSResource* ResourceTarget = Cast<ARTSResource>(OrderTarget);
					if (ResourceTarget)
					{
						LastExploitedResource = ResourceTarget;
						MoveToResourceAndExploit(LastExploitedResource);
						
						//ExploitResource();
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
	//FVector MoveTarget = TargetResource->GetActorLocation();
	MoveToLocation(TargetResource->GetActorLocation());
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::ExploitResource);
	}
}

void ARTSCharacterBase::ExploitResource(FAIRequestID Request, const FPathFollowingResult& Result)
{
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	GetWorldTimerManager().ClearTimer(ResourceExploitTimer);
	float DistanceToTarget = GetDistanceTo(LastExploitedResource);
	if (DistanceToTarget <= ExtractionDistance)
	{
		bIsExtracting = true;
		GetWorldTimerManager().SetTimer(ResourceExploitTimer, this, &ARTSCharacterBase::FinishExploitResource, ExtractionCooldown, true, 0.f);
	}
	else {
		MoveToResourceAndExploit(LastExploitedResource);
	}


}

void ARTSCharacterBase::FinishExploitResource()
{
	if (ResourcesCarried >= ResourceCapacity)
	{
		bIsExtracting = false;
		GetWorldTimerManager().ClearTimer(ResourceExploitTimer);
		return;
	}

	if (CarriedResource != LastExploitedResource->GetType())
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
	GetWorldTimerManager().ClearTimer(ResourceExploitTimer);
	TArray<AActor*> Buildings;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARTSBuildingBase::StaticClass(), Buildings);
	float BestDistance = -1;
	ARTSBuildingBase* BestBuilding = nullptr;
	for (int i = 0; i < Buildings.Num(); i++)
	{
		ARTSBuildingBase* Building =  (Cast<ARTSBuildingBase>(Buildings[i]));
		if (Building->GetIsResourceDropOff())
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
	OrderTarget = BestBuilding;
	MoveToLocation(BestBuilding->GetActorLocation());
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		MoveCompleteDelegate = AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ARTSCharacterBase::DepositResource);
	}
}

void ARTSCharacterBase::DepositResource(FAIRequestID Request, const FPathFollowingResult& Result)
{
	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		AIController->GetPathFollowingComponent()->OnRequestFinished.Remove(MoveCompleteDelegate);
	}
	if (GetDistanceTo(OrderTarget) <= 800.f)
	{
		//CarriedResource 
		ResourcesCarried = 0;
		UE_LOG(LogTemp, Log, TEXT("Resources Carried: %d"), ResourcesCarried);
	}

	if (LastExploitedResource)
		MoveToResourceAndExploit(LastExploitedResource);
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

}

// Called to bind functionality to input
void ARTSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

