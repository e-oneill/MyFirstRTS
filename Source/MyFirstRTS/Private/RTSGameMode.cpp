// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSGameMode.h"
#include "RTSGameState.h"
#include "Structs/FPlayerStateStructs.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingBase.h"
#include "RTSUnitComponent.h"

void ARTSGameMode::StartPlay()
{
	Super::StartPlay();
	//throw std::logic_error("The method or operation is not implemented.");

	//Initialise the player data object stored in game state
	SetupPlayerData();

	GameStartTime = GetWorld()->GetTimeSeconds();

}

void ARTSGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//throw std::logic_error("The method or operation is not implemented.");

	//float CurrentTime = GetWorld()->GetTimeSeconds();
	//float TimePlayed = CurrentTime - GameStartTime;

	//Day = TimePlayed / DayLength;
}

bool ARTSGameMode::SetupPlayerData()
{
	ARTSGameState* RTSGameState = Cast<ARTSGameState>(GameState);
	if (RTSGameState)
	{
		for (int i = 0; i < NumPlayers; i++)
		{
			TArray<FPlayerStateResource> ResourceRecords;
			for (int ResourceInt = EResourceType::Gold; ResourceInt != EResourceType::END; ResourceInt++)
			{
				FPlayerStateResource ResourceRecord;
				ResourceRecord.Resource = static_cast<EResourceType>(ResourceInt);
				ResourceRecord.Quantity = 0;
				ResourceRecords.Add(ResourceRecord);
			}
			FPlayerRecord* PlayerRecord = new FPlayerRecord;
			PlayerRecord->PlayerNum = i;
			PlayerRecord->PlayerResources = ResourceRecords;
			//FPlayerRecord* RecordPointer = &PlayerRecord;
			RTSGameState->AddPlayerRecord(PlayerRecord);
		}

		TArray<AActor*> Pawns;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawn::StaticClass(), Pawns);

		for (AActor* Pawn : Pawns)
		{
			URTSUnitComponent* UnitComponent = Cast<URTSUnitComponent>(Pawn->GetComponentByClass(URTSUnitComponent::StaticClass()));
			if (UnitComponent)
			{
				FPlayerRecord* PlayerRecord = RTSGameState->GetPlayerRecordByIndex(UnitComponent->GetOwningPlayerId());
				if (PlayerRecord)
				{
					PlayerRecord->Units.Add(UnitComponent);
				}
			}
		}

		TArray<AActor*> Buildings;

		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARTSBuildingBase::StaticClass(), Buildings);
		for (AActor* Actor : Buildings)
		{
			ARTSBuildingBase* Building = Cast<ARTSBuildingBase>(Actor);
			if (!Building)
			{
				continue;
			}
			FPlayerRecord* PlayerRecord = RTSGameState->GetPlayerRecordByIndex(Building->GetOwningPlayerId());
			if (PlayerRecord)
			{
				PlayerRecord->Buildings.Add(Building);
			}
		}

		return true;
	}
	return false;
}
