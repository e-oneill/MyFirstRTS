// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RTSOrderable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
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

	UFUNCTION(BlueprintNativeEvent, Category = "User Interaction")
	void ExecuteOrder();

	UFUNCTION(BlueprintNativeEvent, Category = "User Interaction")
	void CancelOrder();
};
