#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EResourceType.generated.h"

UENUM(BlueprintType)
enum EResourceType
{
	Gold UMETA(DisplayName = "Gold"),
	Wood UMETA(DisplayName = "Wood"),
	END UMETA(DisplayName = "END")
};

USTRUCT(BlueprintType)
struct FResourceCount
{
	GENERATED_BODY();

	public:
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EResourceType> Resource;

	UPROPERTY(EditAnywhere)
	int Quantity;
};