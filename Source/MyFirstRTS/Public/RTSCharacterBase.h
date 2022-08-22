// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTSSelectable.h"
#include "RTSOrderable.h"
#include "EResourceType.h"
#include "Structs/UnitStructs.h"
#include "RTSCharacterBase.generated.h"

class URTSUnitComponent;
class URTSAttributeComponent;
class URTSOrderTargetComponent;
class ARTSBuildingBase;
class UStaticMeshComponent;
class ARTSAIController;
class URTSUtilityAIBrain;
enum EResourceType;
class ARTSResource;

struct FAIRequestID;
struct FPathFollowingResult;
enum EBotStatus;
enum EMissionType;
struct FMission;

UCLASS(Abstract)
class MYFIRSTRTS_API ARTSCharacterBase : public ACharacter, public IRTSSelectable, public IRTSOrderable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTSCharacterBase();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URTSOrderTargetComponent* OrderTargetComponent;

	void Select_Implementation() override;

	void Deselect_Implementation() override;

	void ExecuteOrder_Implementation() override;

	void CancelOrder_Implementation() override;

	void HandleOrderToLocation_Implementation(FVector Location) override;

	void HandleOrderToActor_Implementation(AActor* Actor) override;

	void HandleOrderToLocationAndRotation_Implementation(FVector Location, FRotator Rotation) override;

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<EBotStatus> CharacterStatus;



	TSubclassOf<UStaticMeshComponent> GetOrderPreviewMesh_Implementation() override;

protected:


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	ARTSAIController* MyController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URTSUtilityAIBrain* MyBrain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int OwningPlayerId = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URTSAttributeComponent* AttributeComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UStaticMeshComponent> OrderPreviewMarker;


	UPROPERTY(BlueprintReadWrite)
		FMission Mission;

	void MoveToLocation(FVector Target);

	void FaceTargetDirection(FAIRequestID Request, const FPathFollowingResult& Result);

	FVector MoveTargetOnActor;

	FRotator TargetRotation;

	UFUNCTION(BlueprintCallable)
	void MoveToResourceAndExploit(URTSOrderTargetComponent* TargetResource);

	//Very strangely, because I am using AddUObject on the AI Controller, this function should not be marked UFUNCTION(), unlike all other delegates
	void ExploitResource(FAIRequestID Request, const FPathFollowingResult& Result);

	//the bot is moving to exploit a resource, and so the tick should check their distance to that object
	bool bIsMovingToExploitResource;

	//whether the bot should automatically return to the resource they have just exploited
	bool bShouldAutoReturnToResource = false;

	UFUNCTION()
	void FinishExploitResource();

	UFUNCTION(BlueprintCallable)
	void MoveToAndDepositResources(AActor* TargetActor);

	void DepositToNearestCollector();

	void DepositResource(FAIRequestID Request, const FPathFollowingResult& Result);

	UFUNCTION(BlueprintCallable)
	void MoveToBuildingAndConstruct(ARTSBuildingBase* TargetBuilding);

	void ConstructBuilding(FAIRequestID Request, const FPathFollowingResult& Result);

	UFUNCTION()
	void FinishConstructBuilding();

	void ConstructNearestUnfinishedBuilding();

	//the max distance the bot should move to the next unconstructed building
	float MaxDistanceToNewBuilding;

	UPROPERTY(BlueprintReadWrite)
	AActor* OrderTarget; //the actor that the character is moving to

	UPROPERTY(BlueprintReadWrite)
	bool bIsAttacking;

	UPROPERTY(BlueprintReadWrite)
	bool bIsExtracting;

	UPROPERTY(BlueprintReadWrite)
	bool bIsDepositing;

	UPROPERTY(BlueprintReadWrite)
	bool bIsConstructing;

	UPROPERTY(BlueprintReadWrite)
	URTSOrderTargetComponent* LastExploitedResource;

	FDelegateHandle MoveCompleteDelegate;



	FTimerHandle PrimaryActionTimer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions")
	bool bCanExtractResource;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta  = (EditCondition = "bCanExtractResource"))
	float ExtractionCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta = (EditCondition = "bCanExtractResource"))
	float ExtractionDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta = (EditCondition = "bCanExtractResource"))
	uint8 ExtractionRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta = (EditCondition = "bCanExtractResource"))
	float TimeToExtract;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Actions")
	TEnumAsByte<EResourceType> CarriedResource;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta = (EditCondition = "bCanExtractResource"))
	int ResourceCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Actions", meta = (EditCondition = "bCanExtractResource"))
	int ResourcesCarried;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions")
	bool bCanConstruct;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta = (EditCondition = "bCanConstruct"))
	float ConstructRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta = (EditCondition = "bCanConstruct"))
	float ConstructTickCooldown;

	//FTimerHandle ConstructTimer;

	//UPROPERTY(EditAnywhere)
	//TArray<TEnumAsByte<ResourceType>> ExtractableResources;

	UPROPERTY(VisibleAnywhere)
	URTSUnitComponent* UnitComponent;

	//We run AI status ticks in a specific function, so it occurs less often than each frame, for performance reasons


	float LastAITick;

	FTimerHandle AIStatusTickTimerHandle;

	//The time between AI updates
	UPROPERTY(EditDefaultsOnly)
	float AITickDuration = 0.5f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent)
		void AIStatusTick();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetOwningPlayerId(int PlayerId);

	FMission GetMission() const {return Mission;}

	void SetMission(EMissionType MissionType, FVector TargetLocation, AActor* TargetActor);

	void ReturnToIdle();

	void UnbindAllAIDelegates();
};
