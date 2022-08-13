// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTSSelectable.h"
#include "RTSOrderable.h"
#include "EResourceType.h"
#include "RTSCharacterBase.generated.h"

class URTSUnitComponent;
enum EResourceType;

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions")
	bool bCanExtractResource;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Unit Actions", meta  = (EditCondition = "bCanExtractResource"))
	float ExtractionCooldown;

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
