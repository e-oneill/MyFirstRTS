// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EResourceType.h"
#include "RTSResource.generated.h"

enum EResourceType;

UCLASS()
class MYFIRSTRTS_API ARTSResource : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTSResource();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Resource)
	uint8 TimesCanBeExploited;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Resource)
	int ResourceValue;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Resource)
	TEnumAsByte<EResourceType> Type;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
