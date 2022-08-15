// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSGameMode.h"
#include "RTSGameState.h"
#include "Structs/FPlayerStateStructs.h"

void ARTSGameMode::StartPlay()
{
	Super::StartPlay();
	//throw std::logic_error("The method or operation is not implemented.");

	//Initialise the player data object stored in game state
	SetupPlayerData();


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

		return true;
	}
	return false;
}
