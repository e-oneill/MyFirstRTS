// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSUnitComponent.h"
#include "RTSAIController.h"
#include "Structs/UnitStructs.h"
#include "RTSOrderTargetComponent.h"

// Sets default values for this component's properties
URTSUnitComponent::URTSUnitComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URTSUnitComponent::BeginPlay()
{
	Super::BeginPlay();

	MyController = Cast<ARTSAIController>(Cast<APawn>(GetOwner())->GetController());
	// ...
	
}


// Called every frame
void URTSUnitComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void URTSUnitComponent::MoveToLocation(FVector Location)
{
	//SetMission(EMissionType::MoveToLocation)
	UnitState = EBotStatus::Moving;
	if (MyController)
	{
		MyController->MoveToLocation(Location, 100.f, false, true, true, true);
	}
}

void URTSUnitComponent::MoveToLocation(FVector Location, FVector Rotation)
{
	MoveToLocation(Location);

	//Implement rotation callback
}

void URTSUnitComponent::ExploitResource()
{
	if (UnitState == Idle)
	{
		return;
	}
	UnitState = EBotStatus::Extracting;
	URTSOrderTargetComponent* TargetOrderComponent = Cast<URTSOrderTargetComponent>(Mission.TargetActor->FindComponentByClass(URTSOrderTargetComponent::StaticClass()));
	if (TargetOrderComponent)
	{
		if (CarriedResourceQuantity >= CarryCapacity || TargetOrderComponent->GetResourceValue() <= 0)
		{
			UnitState = EBotStatus::Idle;
		}

		if (TargetOrderComponent->ResourceType != CarriedResource)
		{
			CarriedResourceQuantity = 0;
			CarriedResource = TargetOrderComponent->ResourceType;
		}

		//int NewResources = ResourceExtractionRate;
		int CurrentResourceValue = TargetOrderComponent->GetResourceValue();
		int NewResources = FMath::Clamp(ResourceExtractionRate, 0, CurrentResourceValue);
		CarriedResourceQuantity += NewResources;
		TargetOrderComponent->SetResourceValue(CurrentResourceValue - NewResources);
	}
}

void URTSUnitComponent::DepositResource()
{
	if (UnitState == Idle)
	{
		return;
	}
	UnitState = EBotStatus::Depositing;
	if (GetOwner()->GetDistanceTo(Mission.TargetActor) <= 400.f && UnitState != Depositing)
	{
		UnitState =  Depositing;
		URTSOrderTargetComponent* TargetOrderComponent = Cast<URTSOrderTargetComponent>(Mission.TargetActor->FindComponentByClass(URTSOrderTargetComponent::StaticClass()));
		if (TargetOrderComponent)
		{
			TargetOrderComponent->ModifyResource(CarriedResource, CarriedResourceQuantity);
			CarriedResourceQuantity = 0;
		}
	}
}

void URTSUnitComponent::PickUpResource(EResourceType Resource)
{
	if (UnitState == Idle)
	{
		return;
	}

	if (GetOwner()->GetDistanceTo(Mission.TargetActor) <= 400.f && UnitState != Depositing)
	{
		UnitState = Collecting;
		URTSOrderTargetComponent* TargetOrderComponent = Cast<URTSOrderTargetComponent>(Mission.TargetActor->FindComponentByClass(URTSOrderTargetComponent::StaticClass()));
		if (TargetOrderComponent)
		{
			if (TargetOrderComponent->CheckIfResourceArrayEntryExists(Resource))
			{
				CarriedResourceQuantity += TargetOrderComponent->ModifyResource(Resource, CarryCapacity * -1);
				CarriedResource = Resource;
			}
		}
	}
}

void URTSUnitComponent::ConstructBuilding()
{
	UnitState = EBotStatus::Constructing;
}

void URTSUnitComponent::ReturnToUnemployed()
{
	MyJob = EJobType::Unemployed;
	JobSite = nullptr;
}

void URTSUnitComponent::AssignToJobSite(URTSOrderTargetComponent* NewJobSite)
{
	MyJob = NewJobSite->JobType;
	JobSite = NewJobSite;
}

void URTSUnitComponent::WorkAtJobSite_Implementation(URTSOrderTargetComponent* CalledJobSite)
{
	if (JobSite)
	{
		JobSite->WorkAtJobSite(this);
	}
}

void URTSUnitComponent::SetMission(FMission NewMission)
{
	FMission OldMission = Mission;
	Mission = Mission;
	OnMissionChanged.Broadcast(this, Mission, OldMission);
}

void URTSUnitComponent::SetMission(TEnumAsByte<EMissionType> MissionType, FVector TargetLocation, AActor* TargetActor)
{
	FMission OldMission = Mission;
	Mission.MissionType = MissionType;
	Mission.MissionTargetLocation = TargetLocation;
	Mission.TargetActor = TargetActor;
	OnMissionChanged.Broadcast(this, Mission, OldMission);
}

