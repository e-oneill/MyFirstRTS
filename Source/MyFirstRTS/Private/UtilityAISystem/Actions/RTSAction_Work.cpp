// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilityAISystem/Actions/RTSAction_Work.h"
#include "RTSOrderTargetComponent.h"
#include "RTSUnitComponent.h"

void URTSAction_Work::Execute_Implementation(APawn* NPC)
{
	//throw std::logic_error("The method or operation is not implemented.");
	JobSite = Cast<URTSOrderTargetComponent>(NPC->GetComponentByClass(URTSOrderTargetComponent::StaticClass()));
	Worker = Cast<URTSUnitComponent>(NPC->GetComponentByClass(URTSUnitComponent::StaticClass()));
	if (JobSite && Worker)
	{
		Worker->WorkAtJobSite(JobSite);
	}
}
