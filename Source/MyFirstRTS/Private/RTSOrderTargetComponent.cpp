// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSOrderTargetComponent.h"
#include "EResourceType.h"
#include "RTSGameState.h"
#include "RTSUnitComponent.h"

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

	for (EResourceType Resource : ValidResources)
	{
		if (!CheckIfResourceArrayEntryExists(Resource))
		{
			FResourceCount NewResource;
			NewResource.Resource = Resource;
			NewResource.Quantity = 0;
		}
	}
}

bool URTSOrderTargetComponent::CheckIfResourceArrayEntryExists(TEnumAsByte<EResourceType> Resource)
{
	for (int i = 0; i < Resources.Num(); i++)
	{
		if (Resources[i].Resource == Resource)
		{
			return true;
		}
	}

	return false;
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

void URTSOrderTargetComponent::WorkAtJobSite_Implementation(URTSUnitComponent* Worker)
{

}

int URTSOrderTargetComponent::ModifyResource(TEnumAsByte<EResourceType> Resource, int Quantity)
{
	for (int i = 0; i < Resources.Num(); i++)
	{
		if (Resources[i].Resource == Resource)
		{
			int AmountToTake = 0;
			if (Quantity < 0)
			{
				AmountToTake = FMath::Clamp(FMath::Abs(Quantity), Resources[i].Quantity, FMath::Abs(Quantity));
			}
			Resources[i].Quantity = FMath::Clamp(Resources[i].Quantity + Quantity, 0, Resources[i].Quantity + Quantity);
			OnResourceDeposited.Broadcast(this, Resources[i].Resource, Resources[i].Quantity, Resources[i].Quantity - Quantity);
			return AmountToTake;
		}
	}
	return -1;
}

bool URTSOrderTargetComponent::AssignUnemployedWorker()
{
	ARTSGameState* GameState = Cast<ARTSGameState>(GetWorld()->GetGameState());
	if (GameState)
	{
		TArray<URTSUnitComponent*> UnemployedUnits = GameState->GetIdleUnitsForPlayer(OwningPlayerId);
		if (UnemployedUnits.Num() > 0)
		{
			UnemployedUnits[0]->AssignToJobSite(this);
			Workers.Add(UnemployedUnits[0]);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

