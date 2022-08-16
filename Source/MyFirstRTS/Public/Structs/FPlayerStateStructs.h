#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EResourceType.h"
#include "FPlayerStateStructs.generated.h"

class ARTSBuildingBase;

enum EResourceType;

USTRUCT(BlueprintType)
struct FPlayerStateResource
{
	GENERATED_BODY();

	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EResourceType> Resource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity;

	FPlayerStateResource()
	{
		Resource = EResourceType::Gold;
		Quantity = 0;
	}

	FPlayerStateResource(TEnumAsByte<EResourceType> Resource, int32 Quantity)
	{
		this->Quantity = Quantity;
		this->Resource = Resource;
	}
};

USTRUCT(BlueprintType)
struct FPlayerRecord
{
	GENERATED_BODY();

	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int PlayerNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int TeamNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPlayerStateResource> PlayerResources;

	UPROPERTY(BlueprintReadWrite)
	TArray<ARTSBuildingBase*> Buildings;

	bool ModifyResource(TEnumAsByte<EResourceType> Resource, int32 Quantity) {
		for (int i = 0; i < PlayerResources.Num(); i++)
		{
			if (PlayerResources[i].Resource == Resource)
			{
				PlayerResources[i].Quantity += Quantity;
				return true;
			}
		}
		return false;
	}

	//UFUNCTION(BlueprintCallable)
	int32 GetPlayerResourceQuantityByType(TEnumAsByte<EResourceType> Resource)
	{
		for (int i = 0; i < PlayerResources.Num(); i++)
		{
			if (PlayerResources[i].Resource == Resource)
			{
				
				return PlayerResources[i].Quantity;
			}
		}
		return -1;
	}

	FPlayerRecord()
	{
		PlayerNum = 0;
		TArray<FPlayerStateResource> NewPlayerResource;
		PlayerResources = NewPlayerResource;
		
	}

	FPlayerRecord(int NewPlayerNum, TArray<FPlayerStateResource> NewPlayerResources)
	{
		PlayerNum = NewPlayerNum;
		PlayerResources = NewPlayerResources;
	}

};