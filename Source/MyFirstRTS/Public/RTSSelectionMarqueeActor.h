// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RTSSelectionMarqueeActor.generated.h"

class UBoxComponent;

UCLASS()
class MYFIRSTRTS_API ARTSSelectionMarqueeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTSSelectionMarqueeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UBoxComponent* BoxCollider;

	TArray<AActor*> SelectedActors;

	bool bIsSelecting = false;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
};
