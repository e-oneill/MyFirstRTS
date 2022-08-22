// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilityAISystem/RTSAction.h"
#include "RTSAIController.h"
#include "UtilityAISystem/RTSConsideration.h"

void URTSAction::PostInitProperties()
{
	Super::PostInitProperties();
	//throw std::logic_error("The method or operation is not implemented.");

	//if (GetOuter()->GetWorld())
	//{
	//	OwnerAIController = Cast<ARTSAIController>(Cast<APawn>(GetOuter())->GetController());
	//	for (int i = 0; i < ConsiderationTypes.Num(); i++)
	//	{
	//		URTSConsideration* TempConsideration = NewObject<URTSConsideration>(this);
	//		Considerations.Add(TempConsideration);
	//	}
	//}


}

class UWorld* URTSAction::GetWorld() const
{
	if (GIsEditor && !GIsPlayInEditorWorld)
	{
		return nullptr;
	}
	else if (GetOuter())
	{
		return GetOuter()->GetWorld();
	}

	return nullptr;
}

void URTSAction::BeginPlay()
{
	if (GetOuter()->GetWorld())
	{
		APawn* OwningPawn = Cast<APawn>(GetOuter()->GetOuter());
		if (OwningPawn)
			OwnerAIController = Cast<ARTSAIController>(OwningPawn->GetController());
		if (!OwnerAIController)
		{
			UE_LOG(LogTemp, Error, TEXT("CRITICAL: NO AI CONTROLLER ASSIGNED TO PAWN"));
			return;
		}
		//OwnerAIController = Cast<ARTSAIController>(Cast<APawn>(GetOuter())->GetController());
		URTSAction* ThisAction = this;
		for (int i = 0; i < ConsiderationTypes.Num(); i++)
		{
			URTSConsideration* TempConsideration = NewObject<URTSConsideration>(this, ConsiderationTypes[i]);
			Considerations.Add(TempConsideration);
		}
	}
}

void URTSAction::SetScore(float NewScore)
{
	Score = FMath::Clamp<float>(NewScore, 0, 1.f);
}

void URTSAction::Execute_Implementation(APawn* NPC)
{
	
}
