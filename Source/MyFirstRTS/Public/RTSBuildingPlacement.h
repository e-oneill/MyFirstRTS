// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RTSBuildingPlacement.generated.h"

class ARTSBuildingBase;
class UStaticMeshComponent;
//class UMaterial;

UCLASS()
class MYFIRSTRTS_API ARTSBuildingPlacement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTSBuildingPlacement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TSubclassOf<ARTSBuildingBase> Building;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* MeshComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent)
	bool CanPlaceBuilding();

	TSubclassOf<ARTSBuildingBase> GetBuilding() const { return Building;}

	ARTSBuildingBase* PlaceBuilding(int PlayerId);
};
