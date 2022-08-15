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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int OwningPlayerId = 0;

	//Very strangely, because I am using AddUObject on the AI Controller, this function should not be marked UFUNCTION(), unlike all other delegates
	void ExploitResource(FAIRequestID Request, const FPathFollowingResult& Result);

	//the bot is moving to exploit a resource, and so the tick should check their distance to that object
	bool bIsMovingToExploitResource;

	//whether the bot should automatically return to the resource they have just exploited
	bool bShouldAutoReturnToResource = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URTSAttributeComponent* AttributeComponent;

	UFUNCTION()
	void FinishExploitResource();

	void MoveToLocation(FVector Target);

	void MoveToResourceAndExploit(ARTSResource* TargetResource);

	void MoveToAndDepositResources(AActor* TargetActor);

	void DepositToNearestCollector();

	void DepositResource(FAIRequestID Request, const FPathFollowingResult& Result);

	UPROPERTY(BlueprintReadWrite)
	AActor* OrderTarget; //the actor that the character is moving to

	UPROPERTY(BlueprintReadWrite)
	bool bIsAttacking;

	UPROPERTY(BlueprintReadWrite)
	bool bIsExtracting;

	UPROPERTY(BlueprintReadWrite)
	ARTSResource* LastExploitedResource;

	FDelegateHandle MoveCompleteDelegate;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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

	FTimerHandle ResourceExploitTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Actions")
	TEnumAsByte<EResourceType> CarriedResource;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta = (EditCondition = "bCanExtractResource"))
	int ResourceCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Actions", meta = (EditCondition = "bCanExtractResource"))
	int ResourcesCarried;

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
