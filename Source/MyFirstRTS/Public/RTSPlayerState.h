// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Structs/FPlayerStateStructs.h"
#include "RTSResource.h" //likely need to split the enum out of this file
#include "RTSPlayerState.generated.h"

struct FPlayerStateResource;
class ARTSBuildingBase;
class ARTSCharacterBase;
/**
 * 
 */
UCLASS()
class MYFIRSTRTS_API ARTSPlayerState : public APlayerState
{
	GENERATED_BODY()
	public:
	void BeginPlay() override;
	protected:
	int PlayerId;

	UPROPERTY(BlueprintReadWrite)
	TArray<ARTSBuildingBase*> MyBuildings;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<ARTSCharacterBase*> MyCharacters;

};
