// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RTSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYFIRSTRTS_API ARTSGameMode : public AGameModeBase
{
	GENERATED_BODY()
		int NumPlayers = 2;
public:
	void StartPlay() override;

protected:
	bool SetupPlayerData();
};
