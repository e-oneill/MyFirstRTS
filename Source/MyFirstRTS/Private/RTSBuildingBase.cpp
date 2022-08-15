// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSBuildingBase.h"
#include "GameFramework/PlayerController.h"
#include "RTSPlayerPawn.h"
#include "RTSSelectable.h"
#include "RTSGameState.h"
#include "RTSAttributeComponent.h"

// Sets default values
ARTSBuildingBase::ARTSBuildingBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AttributeComponent = CreateDefaultSubobject<URTSAttributeComponent>(TEXT("AttributeComponent"));
}

// Called when the game starts or when spawned
void ARTSBuildingBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTSBuildingBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ARTSBuildingBase::SetOwningPlayerId(int NewID)
{
	ARTSGameState* GameState = Cast<ARTSGameState>(GetWorld()->GetGameState());
	if (GameState)
	{
		if (GameState->GetPlayerRecords().Num() > NewID)
		{
			OwningPlayerId = NewID;
			return true;
		}
		else
		{
			FString BuildingName = GetName();
			UE_LOG(LogTemp, Warning, TEXT("Attempted to set the owning player of %s to an invalid ID"), *(BuildingName));
			return false;
		}
	}
	return false;
}

void ARTSBuildingBase::Deselect_Implementation()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (PC)
	{
		APawn* SelectorPawn = PC->GetPawn();
		if (SelectorPawn)
		{
			ARTSPlayerPawn* RTSPawn = Cast<ARTSPlayerPawn>(SelectorPawn);
			if (RTSPawn)
			{
				RTSPawn->RemoveActorFromSelection(this);
			}
		}
	}
}

void ARTSBuildingBase::Select_Implementation()
{
	//UE_LOG(LogTemp, Log, TEXT("Building clicked"));
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (PC)
	{
		APawn* SelectorPawn = PC->GetPawn();
		if (SelectorPawn)
		{
			ARTSPlayerPawn* RTSPawn = Cast<ARTSPlayerPawn>(SelectorPawn);
			if (RTSPawn)
			{
				RTSPawn->AddActorToSelection(this);
			}
		}
	}

	//SelectBuilding();
}

