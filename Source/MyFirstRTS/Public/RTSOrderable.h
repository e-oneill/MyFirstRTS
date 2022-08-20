// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RTSOrderable.generated.h"

class UStaticMeshComponent;

// This class does not need to be modified.
UINTERFACE(Blueprintable, MinimalAPI)
class URTSOrderable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MYFIRSTRTS_API IRTSOrderable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Player Interaction")
	void ExecuteOrder();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Orderable Interface")
	void HandleOrderToLocation(FVector Location);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Orderable Interface")
	void HandleOrderToLocationAndRotation(FVector Location, FRotator Rotation);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Orderable Interface")
	void HandleOrderToActor(AActor* Actor);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Orderable Interface")
	void CancelOrder();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Orderable Interface")
	TSubclassOf<UStaticMeshComponent> GetOrderPreviewMesh();
};
