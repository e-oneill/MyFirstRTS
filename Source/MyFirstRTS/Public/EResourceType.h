#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum EResourceType
{
	Gold UMETA(DisplayName = "Gold"),
	Wood UMETA(DisplayName = "Wood"),
	END UMETA(DisplayName = "END")
};