#pragma once

#include "CoreMinimal.h"

UENUM()
enum EResourceType
{
	None UMETA(DisplayName = "None"),
	Gold UMETA(DisplayName = "Gold"),
	Stone UMETA(DisplayName = "Stone")
};