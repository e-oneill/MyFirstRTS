#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EResourceType.h"
#include "FPlayerStateStructs.generated.h"

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
};