// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTags.h"
#include "GameplayTagContainer.h"
#include "RTSRecruitmentComponent.generated.h"

class ARTSRallyPoint;
class ARTSCharacterBase;

USTRUCT(BlueprintType)
struct FUnit
{
	GENERATED_BODY();

	public:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSubclassOf<ARTSCharacterBase> UnitCharacter;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float TimeToTrain;
};

USTRUCT(BlueprintType)
struct FUnitTrainingRecord
{
	GENERATED_BODY();

	public:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FUnit Unit;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float TrainingProgress;

};

UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYFIRSTRTS_API URTSRecruitmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URTSRecruitmentComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	int OwningPlayerId;

	ARTSRallyPoint* SpawnPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag SpawnTag = FGameplayTag::RequestGameplayTag(FName("RallyPoint.Spawn"));

	ARTSRallyPoint* MovePoint;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag MoveTag = FGameplayTag::RequestGameplayTag(FName("RallyPoint.MoveTo"));

	//How many units this recruiter can train at once
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int ParallelTrainingCount = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FUnit> RecruitableUnits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FUnitTrainingRecord> TrainingQueue;

	bool bIsTrainingUnit;

	float TrainingUnitProgress;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	FUnitTrainingRecord StartTrainingUnit(FUnit Unit);

	ARTSRallyPoint* GetMovePoint() const { return MovePoint; }

	ARTSRallyPoint* GetSpawnPoint() const {return SpawnPoint;}

	void SpawnTrainedUnit(FUnit Unit);

	UFUNCTION(BlueprintImplementableEvent)
	void TrainingComplete(int index);
};
