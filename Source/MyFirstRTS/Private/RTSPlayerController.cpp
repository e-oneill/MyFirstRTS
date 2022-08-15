// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPlayerController.h"

void ARTSPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	for (int i = 0; i < NumOfSelectionGroups; i++)
	{
		TArray<AActor*> EmptyActorArray;
		SelectionGroups.Add(EmptyActorArray);
	}

}

void ARTSPlayerController::SetSelectionGroup(int GroupNumber, TArray<AActor*> Actors)
{
	SelectionGroups[GroupNumber] = Actors;
}
