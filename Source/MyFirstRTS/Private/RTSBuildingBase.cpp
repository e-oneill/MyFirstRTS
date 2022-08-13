// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSBuildingBase.h"
#include "GameFramework/PlayerController.h"
#include "RTSPlayerPawn.h"
#include "RTSSelectable.h"

// Sets default values
ARTSBuildingBase::ARTSBuildingBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

