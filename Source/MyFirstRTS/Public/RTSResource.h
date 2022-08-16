// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EResourceType.h"
#include "RTSResource.generated.h"

class URTSOrderTargetComponent;

enum EResourceType;

UCLASS()
class MYFIRSTRTS_API ARTSResource : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTSResource();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URTSOrderTargetComponent* OrderTargetComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bIsDepleted;

	UFUNCTION()
	void HandleResourceQuantityChanged(URTSOrderTargetComponent* ModifiedComponent, int NewValue, float PercentDone, AActor* AffectingActor);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void ResourcedExtracted();
	
	UFUNCTION(BlueprintImplementableEvent)
	void ResourceDepleted();

};
