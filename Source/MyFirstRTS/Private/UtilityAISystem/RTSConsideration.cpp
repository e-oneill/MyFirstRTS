// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilityAISystem/RTSConsideration.h"


void URTSConsideration::SetScore(float NewScore)
{
	Score = FMath::Clamp<float>(NewScore, 0, 1.f);
}

float URTSConsideration::ScoreConsideration_Implementation()
{
	return 1.f;
}
