// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSOrderTargetComponent.h"

// Sets default values for this component's properties
URTSOrderTargetComponent::URTSOrderTargetComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URTSOrderTargetComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	InitResourceValue = ResourceValue;
}

// Called every frame
void URTSOrderTargetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void URTSOrderTargetComponent::SetResourceValue(int NewResourceValue)
{
	ResourceValue = FMath::Clamp(NewResourceValue, 0, 10000);

	OnResourceChanged.Broadcast(this, ResourceValue, ((float) ResourceValue/InitResourceValue), nullptr);
}

