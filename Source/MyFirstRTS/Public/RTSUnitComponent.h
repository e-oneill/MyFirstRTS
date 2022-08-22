// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Structs/UnitStructs.h"
#include "RTSUnitComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMissionChangedSignature, URTSUnitComponent*, UnitComp, FMission, NewMission, FMission, OldMission);

struct FMission;
class ARTSAIController;
enum EMissionType;
enum EResourceType;
enum EBotStatus;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYFIRSTRTS_API URTSUnitComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URTSUnitComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int OwningPlayerId;

	ARTSAIController* MyController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EJobType> MyJob;

	TEnumAsByte<EResourceType> CarriedResource;

	int CarriedResourceQuantity;

	int CarryCapacity;

	int ResourceExtractionRate;

	TEnumAsByte<EBotStatus> UnitState;

	FMission Mission;

	URTSOrderTargetComponent* JobSite;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	//MOVEMENT FUNCTIONS
	void MoveToLocation(FVector Location);

	void MoveToLocation(FVector Location, FVector Rotation);

	//EXTRACT OR STORE RESOURCES
	UFUNCTION()
	void ExploitResource();
	
	UFUNCTION()
	void DepositResource();

	UFUNCTION()
	void PickUpResource(EResourceType Resource);

	//INTERACT WITH BUILDING
	void ConstructBuilding();

	//JOBS
	void ReturnToUnemployed();

	void AssignToJobSite(URTSOrderTargetComponent* NewJobSite);

	UFUNCTION(BlueprintNativeEvent)
	void WorkAtJobSite(URTSOrderTargetComponent* CalledJobSite);

	//GETTERS AND SETTERS
	int GetOwningPlayerId() const {return OwningPlayerId;}

	int GetCarriedResourceQuantity() const { return CarriedResourceQuantity; }

	int GetJob() const {return MyJob;}
	
	void SetMission(FMission Mission);

	void SetMission(TEnumAsByte<EMissionType> MissionType, FVector TargetLocation, AActor* TargetActor);

	UPROPERTY(BlueprintAssignable)
	FOnMissionChangedSignature OnMissionChanged;
};
