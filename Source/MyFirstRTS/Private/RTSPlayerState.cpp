// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPlayerState.h"
#include "Structs/FPlayerStateStructs.h"

int ARTSPlayerState::GetResourceIndex(EResourceType Type)
{
	int index = 0;
	for (; index < PlayerResourceCounts.Num(); index++)
	{
		if (PlayerResourceCounts[index].Resource == Type)
		{	
			return index;
			break;
		}
	}
	return -1;

}

int32 ARTSPlayerState::AddToResource(EResourceType ResourceType, int32 Quantity)
{
	return ModifyResourceCount(GetResourceIndex(ResourceType), Quantity);
}

int32 ARTSPlayerState::RemoveFromResource(EResourceType ResourceType, int32 Quantity)
{
	return ModifyResourceCount(GetResourceIndex(ResourceType), (Quantity*-1));
}

int32 ARTSPlayerState::ModifyResourceCount(int ArrayIndex, int32 Quantity)
{
	PlayerResourceCounts[ArrayIndex].Quantity += Quantity;
	return PlayerResourceCounts[ArrayIndex].Quantity;
}
