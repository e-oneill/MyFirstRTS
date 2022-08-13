// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSCharacterBase.h"
#include "RTSUnitComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "RTSSelectable.h"
#include "RTSOrderable.h"
#include "RTSPlayerPawn.h"
#include "RTSResource.h"
// Sets default values
ARTSCharacterBase::ARTSCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UnitComponent = CreateDefaultSubobject<URTSUnitComponent>(TEXT("UnitComponent"));
}

void ARTSCharacterBase::Deselect_Implementation()
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

void ARTSCharacterBase::Select_Implementation()
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
				RTSPawn->AddActorToSelection(this);
			}
		}
	}
}

void ARTSCharacterBase::ExecuteOrder_Implementation()
{

}

void ARTSCharacterBase::CancelOrder_Implementation()
{

}

// Called when the game starts or when spawned
void ARTSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTSCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARTSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

