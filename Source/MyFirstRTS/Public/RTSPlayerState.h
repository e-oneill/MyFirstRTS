// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Structs/FPlayerStateStructs.h"
#include "RTSResource.h" //likely need to split the enum out of this file
#include "RTSPlayerState.generated.h"

struct FPlayerStateResource;

/**
 * 
 */
UCLASS()
class MYFIRSTRTS_API ARTSPlayerState : public APlayerState
{
	GENERATED_BODY()
	public:

	protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FPlayerStateResource> PlayerResourceCounts;

	int GetResourceIndex(EResourceType Type);

	public:
	UFUNCTION(BlueprintCallable, Category = "Player State")
	int32 AddToResource(EResourceType ResourceType, int32 Quantity);

	UFUNCTION(BlueprintCallable, Category = "Player State")
	int32 RemoveFromResource(EResourceType ResourceType, int32 Quantity);

	UFUNCTION(BlueprintCallable, Category = "Player State")
	int32 ModifyResourceCount(int ArrayIndex, int32 Quantity);

};
