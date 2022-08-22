// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RTSConsideration.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class MYFIRSTRTS_API URTSConsideration : public UObject
{
	GENERATED_BODY()
	
	public:
	UPROPERTY(EditDefaultsOnly)
	FText Name;

protected:
	float Score = 0.f;

public:
	UFUNCTION(BlueprintCallable)
	void SetScore(float NewScore);

	UFUNCTION(BlueprintCallable)
	float GetScore() const { return Score; }

	UFUNCTION(BlueprintNativeEvent)
	float ScoreConsideration();
};
