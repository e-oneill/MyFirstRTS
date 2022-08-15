// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MYFIRSTRTS_API ARTSPlayerController : public APlayerController
{
	GENERATED_BODY()
	

	protected:
	TArray<TArray<AActor*>> SelectionGroups;

	UPROPERTY(EditDefaultsOnly)
	int NumOfSelectionGroups = 9;

	void BeginPlay() override;

public:

	void SetSelectionGroup(int GroupNumber, TArray<AActor*> Actors);

	TArray<AActor*> GetSelectionGroup(int GroupNumber) const {return SelectionGroups[GroupNumber]; }

	int CheckSelectionGroupLength(int GroupNumber) const { return SelectionGroups[GroupNumber].Num(); }
};
