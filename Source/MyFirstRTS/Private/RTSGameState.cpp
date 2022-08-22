// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSGameState.h"
#include "Structs/FPlayerStateStructs.h"
#include "RTSUnitComponent.h"
#include "Structs/UnitStructs.h"

bool ARTSGameState::HasBegunPlay() const
{
	return Super::HasBegunPlay();

	

}

FPlayerRecord ARTSGameState::GetPlayerRecordForBlueprint(int index) const
{
	if (PlayerRecords.Num() > index)
	{
		return *PlayerRecords[index];
	}
	FPlayerRecord EmptyPlayerRecord;
	EmptyPlayerRecord.PlayerNum = -1;
	return EmptyPlayerRecord;
}

int32 ARTSGameState::GetPlayerResourceQuantity(int PlayerIndex, TEnumAsByte<EResourceType> ResourceType) const
{
	if (PlayerRecords.Num() > PlayerIndex)
	{
		FPlayerRecord* PlayerRecord = PlayerRecords[PlayerIndex];
		for (int i = 0; i < PlayerRecord->PlayerResources.Num(); i++)
		{
			if (ResourceType == PlayerRecord->PlayerResources[i].Resource)
			{
				//UE_LOG(LogTemp, Log, TEXT("Getting player resource quantity..."));
				return PlayerRecord->PlayerResources[i].Quantity;
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Tried to get resources count for a player that doesn't exist."));
	return -1;
}

FPlayerRecord* ARTSGameState::GetPlayerRecordByIndex(int Index) const
{
	if (PlayerRecords.Num() > Index)
	{
		return PlayerRecords[Index];
	}
	//FPlayerRecord* EmptyPlayerRecord;
	return nullptr;
}

TArray<URTSUnitComponent*> ARTSGameState::GetIdleUnitsForPlayer(int Player)
{
	FPlayerRecord* PlayerRecord = GetPlayerRecordByIndex(Player);
	TArray<URTSUnitComponent*> UnemployedUnits;
	if (PlayerRecord)
	{
		for (URTSUnitComponent* Unit : PlayerRecord->Units)
		{
			if (Unit->GetJob() == EJobType::Unemployed)
			{
				UnemployedUnits.Add(Unit);
			}
		}
	}
	return UnemployedUnits;
}

void ARTSGameState::ModifyPlayerResourceCount(int PlayerNum, EResourceType Resource, int Quantity)
{
	if (PlayerRecords.Num() > PlayerNum)
	{
		PlayerRecords[PlayerNum]->ModifyResource(Resource, Quantity);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Tried to modify resources of player number %d, which does not exist"), PlayerNum);
	}
}

bool ARTSGameState::AddBuildingToPlayer(int PlayerId, ARTSBuildingBase* Building)
{
	if (PlayerRecords.Num() > PlayerId)
	{
		PlayerRecords[PlayerId]->Buildings.Add(Building);
		return true;
	}
	else
	{
		return false;
	}
}

bool ARTSGameState::RemoveBuildingFromPlayer(int PlayerId, ARTSBuildingBase* Building)
{
	if (PlayerRecords.Num() > PlayerId)
	{
		PlayerRecords[PlayerId]->Buildings.Remove(Building);
		return true;
	}
	else
	{
		return false;
	}
}
