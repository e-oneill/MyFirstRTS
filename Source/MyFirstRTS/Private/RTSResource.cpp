// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSResource.h"

// Sets default values
ARTSResource::ARTSResource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARTSResource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTSResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARTSResource::SetResourceValue(int NewResourceValue)
{
	if (ResourceValue > NewResourceValue)
	{
		//play extraction effect
		ResourcedExtracted();
	}
	if (NewResourceValue == 0)
	{
		TimesCanBeExploited--;
		bIsDepleted = true;
		//change to depleted version
		ResourceDepleted();
	}

	ResourceValue = NewResourceValue; 
}
