// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Structs/FPlayerStateStructs.h"
#include "RTSGameState.generated.h"

struct FPlayerRecord;
enum EResourceType;
/**
 * 
 */
UCLASS()
class MYFIRSTRTS_API ARTSGameState : public AGameStateBase
{
	GENERATED_BODY()
	
	public:
	virtual bool HasBegunPlay() const override;

	TArray<FPlayerRecord*> GetPlayerRecords() const {return PlayerRecords;}

	//Function for getting a de-pointered version of the player record for blueprint. Will return a player numbered -1 if an invalid index is provided
	UFUNCTION(BlueprintCallable)
	FPlayerRecord GetPlayerRecordForBlueprint(int index) const;

	UFUNCTION(BlueprintCallable)
	int32 GetPlayerResourceQuantity(int PlayerIndex, TEnumAsByte<EResourceType> ResourceType) const;

	FPlayerRecord* GetPlayerRecordByIndex(int Index) const;

	void SetPlayerRecord(FPlayerRecord* NewRecord, int Index) { PlayerRecords[Index] = NewRecord; }

	void AddPlayerRecord(FPlayerRecord* NewRecord) { PlayerRecords.AddUnique(NewRecord); }

	void ModifyPlayerResourceCount(int PlayerNum, EResourceType Resource, int Quantity);

	//UPROPERTY(BlueprintReadOnly)
	TArray<FPlayerRecord*> PlayerRecords;

	bool AddBuildingToPlayer(int PlayerId, ARTSBuildingBase* Building);

	bool RemoveBuildingFromPlayer(int PlayerId, ARTSBuildingBase* Building);

	protected:
	//UPROPERTY(BlueprintReadOnly)
	

};
