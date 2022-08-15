// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RTSSelectable.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable, MinimalAPI)
class URTSSelectable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MYFIRSTRTS_API IRTSSelectable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//UFUNCTION(BlueprintNativeEvent)
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "User Interaction")
	void Select();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "User Interaction")
	void Deselect();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "User Interaction")
	void PreviewSelect();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "User Interaction")
	void EndPreviewSelect();
};
