// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RTSSelectable.h"
#include "RTSBuildingBase.generated.h"

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void Select_Implementation() override;


	void Deselect_Implementation() override;

};
