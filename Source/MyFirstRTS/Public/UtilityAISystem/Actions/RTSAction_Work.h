// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UtilityAISystem/RTSAction.h"
#include "RTSAction_Work.generated.h"

class URTSOrderTargetComponent;
class URTSUnitComponent;

/**
 * Utility AI System Action for AI to go to place of work
 */
UCLASS()
class MYFIRSTRTS_API URTSAction_Work : public URTSAction
{
	GENERATED_BODY()
	
	public:

		void Execute_Implementation(APawn* NPC) override;

protected:

		URTSOrderTargetComponent* JobSite;

		URTSUnitComponent* Worker;
	
};
