// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSBuildingPlacement.h"
#include "Components/StaticMeshComponent.h"
#include "RTSBuildingBase.h"
#include "RTSGameState.h"
#include "RTSAttributeComponent.h"

// Sets default values
ARTSBuildingPlacement::ARTSBuildingPlacement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ARTSBuildingPlacement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTSBuildingPlacement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ARTSBuildingPlacement::CanPlaceBuilding_Implementation()
{
	//NOT IMPLEMENTED
	return true;
}

ARTSBuildingBase* ARTSBuildingPlacement::PlaceBuilding(int PlayerId)
{
	FActorSpawnParameters SpawnParams;
	const FVector Location = GetActorLocation();
	const FRotator Rotator = GetActorRotation();
	ARTSBuildingBase* SpawnedBuilding = Cast<ARTSBuildingBase>(GetWorld()->SpawnActor(Building, &Location, &Rotator, SpawnParams));
	
	FVector Scale = SpawnedBuilding->GetBuildingMesh()->GetRelativeScale3D();
	Scale.Z = 0.1f;
	SpawnedBuilding->GetBuildingMesh()->SetRelativeScale3D(Scale);
	SpawnedBuilding->SetIsConstructed(false);
	SpawnedBuilding->GetAttributeComponent()->SetHealth(0.f);
	ARTSGameState* GameState = Cast<ARTSGameState>(GetWorld()->GetGameState());
	if (GameState)
	{
		bool AddedBuilding = GameState->AddBuildingToPlayer(PlayerId, SpawnedBuilding);
	}
	return SpawnedBuilding;
}

