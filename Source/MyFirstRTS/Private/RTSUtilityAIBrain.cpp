// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSUtilityAIBrain.h"
#include "UtilityAISystem/RTSConsideration.h"
#include "UtilityAISystem/RTSAction.h"
// Sets default values for this component's properties
URTSUtilityAIBrain::URTSUtilityAIBrain()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URTSUtilityAIBrain::BeginPlay()
{
	Super::BeginPlay();


	for (int i = 0; i < ActionTypes.Num(); i++)
	{
		//UClass* ActionClass = ActionTypes[i];
		URTSAction* TempAction = NewObject<URTSAction>(this, ActionTypes[i]);
		TempAction->BeginPlay();
		Actions.Add(TempAction);
	}
	// ...
	
}


// Called every frame
void URTSUtilityAIBrain::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void URTSUtilityAIBrain::DecideBestAction(TArray<URTSAction*> ActionsAvailable)
{
	float BestScore = 0.f;
	int BestActionIndex = 0;
	for (int i = 0; i < ActionsAvailable.Num(); i++)
	{
		if (ScoreAction(ActionsAvailable[i]) > BestScore)
		{
			BestScore = ActionsAvailable[i]->GetScore();
			BestActionIndex = i;
		}
	}

	BestAction = ActionsAvailable[BestActionIndex];
}

float URTSUtilityAIBrain::ScoreAction(URTSAction* Action)
{
	float Score = 1.f;

	for (URTSConsideration* Consideration : Action->GetConsiderations())
	{
		float ConsScore = Consideration->ScoreConsideration();
		Score *= ConsScore;

		if (Score <= 0.f)
		{
			Action->SetScore(Score);
			return Score;
		}
	}

	//Now we need to modify the score to account for the cumulative effect of multiplying multiple fractional floats by each other
	float OriginalScore = Score;
	float ModificationFactor = 1 - (1 / Action->Considerations.Num());
	float MakeUpValue = (1 - OriginalScore) * ModificationFactor;
	Score += (MakeUpValue * OriginalScore);
	Action->SetScore(Score);
	return Score;
}

