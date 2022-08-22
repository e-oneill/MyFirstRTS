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


	void Tick(float DeltaSeconds) override;

protected:
	bool SetupPlayerData();

	UPROPERTY(EditDefaultsOnly)
	float DayLength = 60.f;

	float GameStartTime;

	UPROPERTY(BlueprintReadOnly)
	int Year;

	UPROPERTY(BlueprintReadOnly)
	int Month;

	UPROPERTY(BlueprintReadOnly)
	int Day;

	UPROPERTY(BlueprintReadOnly)
	int Hour;

};
