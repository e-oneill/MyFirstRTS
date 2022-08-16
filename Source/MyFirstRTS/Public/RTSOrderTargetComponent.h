// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RTSOrderTargetComponent.generated.h"

class URTSAttributeComponent;

enum EResourceType;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnValueChangedSignature, URTSOrderTargetComponent*, ModifiedComponent, int, NewValue, float, PercentDone, AActor*, AffectingActor);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYFIRSTRTS_API URTSOrderTargetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URTSOrderTargetComponent();

	UPROPERTY(EditAnywhere, Category = "Combat", BlueprintReadWrite)
		bool bCanBeAttacked;

	UPROPERTY(BlueprintReadOnly)
		URTSAttributeComponent* AttributeComponent;

	UPROPERTY(EditAnywhere, Category = "Resources", BlueprintReadWrite)
		bool bResourceDropOff;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resources", meta = (EditCondition = "bResourceDropOff"))
		TArray<TEnumAsByte<EResourceType>> ValidResources;

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

	UPROPERTY(BlueprintAssignable)
		FOnValueChangedSignature OnResourceChanged;
		
};
