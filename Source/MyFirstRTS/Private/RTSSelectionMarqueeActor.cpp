// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSSelectionMarqueeActor.h"
#include "Components/BoxComponent.h"
#include "RTSSelectable.h"
// Sets default values
ARTSSelectionMarqueeActor::ARTSSelectionMarqueeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	RootComponent = BoxCollider;
}

// Called when the game starts or when spawned
void ARTSSelectionMarqueeActor::BeginPlay()
{
	Super::BeginPlay();
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ARTSSelectionMarqueeActor::OnBeginOverlap);
	BoxCollider->OnComponentEndOverlap.AddDynamic(this, &ARTSSelectionMarqueeActor::OnEndOverlap);
}

// Called every frame
void ARTSSelectionMarqueeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARTSSelectionMarqueeActor::OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<IRTSSelectable>(OtherActor))
	{
		SelectedActors.Add(OtherActor);
		IRTSSelectable::Execute_PreviewSelect(OtherActor);
	}
}

void ARTSSelectionMarqueeActor::OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	if (Cast<IRTSSelectable>(OtherActor) && SelectedActors.Contains(OtherActor))
	{
		SelectedActors.Remove(OtherActor);
		IRTSSelectable::Execute_EndPreviewSelect(OtherActor);
	}
}