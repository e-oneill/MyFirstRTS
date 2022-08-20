#pragma once
#include "Engine/DataTable.h"
#include "FResourceCostData.h"
#include "FBuildingData.generated.h"

class ARTSBuildingPlacement;
class ARTSBuildingBase;

USTRUCT(BlueprintType)
struct FBuildingData : public FTableRowBase
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ARTSBuildingPlacement> BuildingPlacementActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ARTSBuildingBase> BuildingActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FResourceCostData> ConstructionCosts;
};
