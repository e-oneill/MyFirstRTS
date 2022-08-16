// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSResource.h"
#include "RTSOrderTargetComponent.h"

// Sets default values
ARTSResource::ARTSResource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	OrderTargetComponent = CreateDefaultSubobject<URTSOrderTargetComponent>(TEXT("OrderTargetComponent"));
	OrderTargetComponent->bResource = true;
	OrderTargetComponent->SetResourceValue(100);
	OrderTargetComponent->TimesCanBeExploited = 1;
}

// Called when the game starts or when spawned
void ARTSResource::BeginPlay()
{
	Super::BeginPlay();
	OrderTargetComponent->OnResourceChanged.AddDynamic(this, &ARTSResource::HandleResourceQuantityChanged);
}

void ARTSResource::HandleResourceQuantityChanged(URTSOrderTargetComponent* ModifiedComponent, int NewValue, float PercentDone, AActor* AffectingActor)
{
	if (NewValue <= 0)
	{
		ResourceDepleted();
	}
	ResourcedExtracted();
}

// Called every frame
void ARTSResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


