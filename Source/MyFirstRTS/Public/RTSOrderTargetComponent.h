// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EResourceType.h"
#include "RTSOrderTargetComponent.generated.h"

class URTSAttributeComponent;
struct FResourceCount;
class URTSUnitComponent;
enum EResourceType;
enum EJobType;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnValueChangedSignature, URTSOrderTargetComponent*, ModifiedComponent, int, NewValue, float, PercentDone, AActor*, AffectingActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnResourceDepositedSignature, URTSOrderTargetComponent*, ModifiedComp, TEnumAsByte<EResourceType>, Resource, int, NewQuantity, int, OldQuantity);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYFIRSTRTS_API URTSOrderTargetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URTSOrderTargetComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanBeOrderedNow = true;

	int OwningPlayerId = -1;

	UPROPERTY(EditAnywhere, Category = "Combat", BlueprintReadWrite)
		bool bCanBeAttacked;

	UPROPERTY(BlueprintReadOnly)
		URTSAttributeComponent* AttributeComponent;

	UPROPERTY(EditAnywhere, Category = "Resources", BlueprintReadWrite)
		bool bResourceDropOff;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resources", meta = (EditCondition = "bResourceDropOff"))
		TArray<TEnumAsByte<EResourceType>> ValidResources;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resources", meta = (EditCondition = "bResourceDropOff"))
		TArray<FResourceCount> Resources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources", meta = (EditCondition = "!bResourceDropOff"))
		bool bResource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources", meta = (EditCondition = "bResource"))
		bool bIsDepleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources", meta = (EditCondition = "bResource"))
		uint8 TimesCanBeExploited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources", meta = (EditCondition = "bResource"))
		float RespawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources", meta = (EditCondition = "bResource"))
		TEnumAsByte<EResourceType> ResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construction")
		bool bCanBeConstructed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jobs")
	bool bIsJobSite;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jobs")
	int NumJobsAvailable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jobs")
	TEnumAsByte<EJobType> JobType;

	UPROPERTY(BlueprintReadOnly)
	TArray<URTSUnitComponent*> Workers;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources", meta = (EditCondition = "bResource"))
		int ResourceValue;

	UPROPERTY(BlueprintReadOnly)
		int InitResourceValue;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintPure)
	int GetResourceValue() const {return ResourceValue;}

	UFUNCTION(BlueprintCallable)
	void SetResourceValue(int NewResourceValue);

	UFUNCTION(BlueprintNativeEvent)
		void WorkAtJobSite(URTSUnitComponent* Worker);

	bool CheckIfResourceArrayEntryExists(TEnumAsByte<EResourceType> Resource);
	int ModifyResource(TEnumAsByte<EResourceType> Resource, int Quantity);

	UPROPERTY(BlueprintAssignable)
		FOnValueChangedSignature OnResourceChanged;

	UPROPERTY(BlueprintAssignable)
		FOnResourceDepositedSignature OnResourceDeposited;

	UFUNCTION(BlueprintCallable)
		bool AssignUnemployedWorker();
		
};
