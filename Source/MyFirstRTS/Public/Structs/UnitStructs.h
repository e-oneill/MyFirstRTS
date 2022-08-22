#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EResourceType.h"
#include "UnitStructs.generated.h"

/*
** SECTION: AI MISSIONS	
*/

UENUM(BlueprintType)
enum EBotStatus
{
	Idle,
	Moving,
	MovingToExtract,
	MovingToConstruct,
	MovingToDeposit,
	MovingToAttack,
	Extracting,
	Depositing,
	Collecting,
	Constructing,
	Attacking,
};

UENUM(BlueprintType)
enum EMissionType
{
	Nothing,
	FindFood,
	FindWater,
	AttendServices,
	Sleep,
	Guard,
	MoveToLocation,
	AttackMoveToLocation,
	MoveToAndBuild,
	ExtractAndDeposit,
	Transport,
	AttackTarget
};

USTRUCT(BlueprintType)
struct FMission
{
	GENERATED_BODY();

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TEnumAsByte<EMissionType> MissionType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FVector MissionTargetLocation;

	UPROPERTY()
		AActor* TargetActor;
};

/*
** SECTION: JOBS
*/

UENUM(BlueprintType)
enum EJobType
{
	Unemployed,
	Builder,
	Woodcutter,
	Miner,
	Farmer
};