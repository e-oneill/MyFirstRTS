// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTSSelectable.h"
#include "RTSOrderable.h"
#include "EResourceType.h"
#include "RTSCharacterBase.generated.h"

class URTSUnitComponent;
class URTSAttributeComponent;
class ARTSBuildingBase;
enum EResourceType;
class ARTSResource;
struct FAIRequestID;
struct FPathFollowingResult;

UCLASS()
class MYFIRSTRTS_API ARTSCharacterBase : public ACharacter, public IRTSSelectable, public IRTSOrderable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTSCharacterBase();


	void Select_Implementation() override;

	void Deselect_Implementation() override;

	void ExecuteOrder_Implementation() override;

	void CancelOrder_Implementation() override;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int OwningPlayerId = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URTSAttributeComponent* AttributeComponent;

	void MoveToLocation(FVector Target);

	void MoveToResourceAndExploit(ARTSResource* TargetResource);

	//Very strangely, because I am using AddUObject on the AI Controller, this function should not be marked UFUNCTION(), unlike all other delegates
	void ExploitResource(FAIRequestID Request, const FPathFollowingResult& Result);

	//the bot is moving to exploit a resource, and so the tick should check their distance to that object
	bool bIsMovingToExploitResource;

	//whether the bot should automatically return to the resource they have just exploited
	bool bShouldAutoReturnToResource = false;

	UFUNCTION()
	void FinishExploitResource();

	void MoveToAndDepositResources(AActor* TargetActor);

	void DepositToNearestCollector();

	void DepositResource(FAIRequestID Request, const FPathFollowingResult& Result);

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
	bool bIsConstructing;

	UPROPERTY(BlueprintReadWrite)
	ARTSResource* LastExploitedResource;

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
