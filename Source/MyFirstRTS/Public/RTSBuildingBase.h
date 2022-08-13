// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RTSSelectable.h"
#include "RTSBuildingBase.generated.h"

enum EResourceType;

UCLASS()
class MYFIRSTRTS_API ARTSBuildingBase : public AActor, public IRTSSelectable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTSBuildingBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AActor* SelectedActor;

	UPROPERTY(EditAnywhere, Category = "Building Functions")
	bool bIsResourceDropOff;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Building Functions", meta = (EditCondition = "bIsResourceDropOff"))
	TArray<TEnumAsByte<EResourceType>> ValidResources;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void Select_Implementation() override;

	bool GetIsResourceDropOff() const {return bIsResourceDropOff;}

	TArray<TEnumAsByte<EResourceType>> GetValidResources() const {return ValidResources;}

	void Deselect_Implementation() override;

};
