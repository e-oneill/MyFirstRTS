// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSRecruitmentComponent.h"
#include "RTSRallyPoint.h"
#include "RTSCharacterBase.h"

// Sets default values for this component's properties
URTSRecruitmentComponent::URTSRecruitmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URTSRecruitmentComponent::BeginPlay()
{
	Super::BeginPlay();
	TArray<AActor*> ChildActors;
	GetOwner()->GetAllChildActors(ChildActors);
	for (AActor* ChildActor : ChildActors)
	{
		ARTSRallyPoint* RallyPoint = Cast<ARTSRallyPoint>(ChildActor);
		if (RallyPoint->GetTag().MatchesTag(SpawnTag))
		{
			SpawnPoint = RallyPoint;
		}
		else if (RallyPoint->GetTag().MatchesTag(MoveTag))
		{
			MovePoint = RallyPoint;
		}

		if (MovePoint && SpawnPoint)
		{
			break;
		}
	}
	// ...
}


// Called every frame
void URTSRecruitmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (TrainingQueue.Num() > 0)
	{
		TArray<int> ToRemove;
		for (int i = 0; i < ParallelTrainingCount; i++)
		{
			if (TrainingQueue.Num() > i)
			{
				TrainingQueue[i].TrainingProgress += DeltaTime;
				if (TrainingQueue[i].TrainingProgress >= TrainingQueue[i].Unit.TimeToTrain)
				{
					//TrainingQueue[i].Unit.TrainingComplete();
					SpawnTrainedUnit(TrainingQueue[i].Unit);
					ToRemove.Add(i);
					//TrainingQueue.RemoveAt(i);
				}
			}
		}
		for (int i : ToRemove)
		{
			TrainingComplete(i);
			TrainingQueue.RemoveAt(i);
		}
	}
	// ...
}

FUnitTrainingRecord URTSRecruitmentComponent::StartTrainingUnit(FUnit Unit)
{
	FUnitTrainingRecord TrainingRecord;
	TrainingRecord.Unit	 = Unit;
	TrainingRecord.TrainingProgress = 0.f;

	TrainingQueue.Add(TrainingRecord);
	return TrainingRecord;
}

void URTSRecruitmentComponent::SpawnTrainedUnit(FUnit Unit)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	check (SpawnPoint != nullptr)
	{
		ARTSCharacterBase* NewUnit = GetWorld()->SpawnActor<ARTSCharacterBase>(Unit.UnitCharacter, SpawnPoint->GetTransform(), SpawnParams);

		NewUnit->SetOwningPlayerId(OwningPlayerId);
		IRTSOrderable* OrderInterface = Cast<IRTSOrderable>(NewUnit);
		if (OrderInterface)
		{
			IRTSOrderable::Execute_HandleOrderToLocationAndRotation(NewUnit, MovePoint->GetActorLocation(), MovePoint->GetActorRotation());
		}
		//NewUnit->HandleOrderToLocationAndRotation();
	}


}

