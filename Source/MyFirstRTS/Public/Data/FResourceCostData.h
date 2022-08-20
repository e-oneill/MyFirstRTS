#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EResourceType.h"
#include "FResourceCostData.generated.h"

USTRUCT(BlueprintType)
struct FResourceCostData
{
	GENERATED_BODY();

	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EResourceType> Resource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Quantity;
};