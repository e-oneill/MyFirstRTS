// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTags.h"
#include "RTSRallyPoint.generated.h"

class UCapsuleComponent;

UCLASS()
class MYFIRSTRTS_API ARTSRallyPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTSRallyPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere)
	FGameplayTag RallyPointTag;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FGameplayTag GetTag() const {return RallyPointTag;}
};
