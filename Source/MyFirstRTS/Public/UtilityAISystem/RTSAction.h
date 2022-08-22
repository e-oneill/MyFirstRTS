// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RTSAction.generated.h"

class URTSConsideration;
class ARTSAIController;
class APawn;
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class MYFIRSTRTS_API URTSAction : public UObject
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditDefaultsOnly)
	FText Name;

	ARTSAIController* OwnerAIController;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<URTSConsideration>> ConsiderationTypes;

	TArray<URTSConsideration*> Considerations;

	void PostInitProperties() override;


	class UWorld* GetWorld() const override;

protected:
	float Score = 0.f;

	public:
	void InitializeConsiderations();

	virtual void BeginPlay();

	void SetScore(float NewScore);

	float GetScore() const {return Score;}

	TArray<URTSConsideration*> GetConsiderations() const {return Considerations;}
	
	UFUNCTION(BlueprintNativeEvent)
	void Execute(APawn* NPC);
};
