#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM()
enum EResourceType
{
	None UMETA(DisplayName = "None"),
	Gold UMETA(DisplayName = "Gold"),
	Wood UMETA(DisplayName = "Wood")
};