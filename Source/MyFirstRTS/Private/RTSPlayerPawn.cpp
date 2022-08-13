// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/KismetMathLibrary.h"
#include "RTSSelectable.h"
#include "RTSOrderable.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
ARTSPlayerPawn::ARTSPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PlayerCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerCollisionComponent"));
	PlayerCollisionComponent->SetSphereRadius(36.f);
	PlayerCollisionComponent->SetCollisionResponseToAllChannels(ECR_Overlap);
	RootComponent = PlayerCollisionComponent;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComp->AttachToComponent(PlayerCollisionComponent, FAttachmentTransformRules::KeepRelativeTransform);
	CameraComponent->AttachToComponent(SpringArmComp, FAttachmentTransformRules::KeepRelativeTransform);
	//CameraComponent->AttachToComponent(SpringArmComp, FAttachmentTransformRules::KeepRelativeTransform);

	SpringArmComp->TargetArmLength = 4000.f;
	SpringArmComp->SetRelativeRotation(FRotator(0.f, -45.f, 0.f));
	SpringArmComp->bDoCollisionTest = false;


	SpringArmComp->bUsePawnControlRotation = false;
	SpringArmComp->bInheritPitch = false;
	SpringArmComp->bInheritRoll = false;
	SpringArmComp->bInheritYaw = false;

	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
	MovementComponent->MaxSpeed = 3000.f;

	MinZoom = 1500.f;
	MaxZoom = 6000.f;
	ZoomSpeed = 100.f;
	RotateSpeed = 20.f;
}

// Called when the game starts or when spawned
void ARTSPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	TargetCameraRotation = SpringArmComp->GetRelativeRotation().Yaw;
	TargetCameraZoom = SpringArmComp->TargetArmLength;
	PlayerDefaultRotation = SpringArmComp->GetRelativeRotation();
	TargetCameraPitch = PlayerDefaultRotation.Pitch;
}

void ARTSPlayerPawn::ClickInteract()
{
	while (SelectedActors.Num() >= 1)
	{
		AActor* CurrentActor = SelectedActors[0];
		IRTSSelectable* SelectionInterface = Cast<IRTSSelectable>(CurrentActor);
		if (SelectionInterface)
		{
			//RemoveActorFromSelection(CurrentActor);
			IRTSSelectable::Execute_Deselect(CurrentActor);
		}
	}
	//Add actor to 
	ClickAddToSelect();

}

void ARTSPlayerPawn::ClickAddToSelect()
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	
	SelectActorBeneathMouse(PC);
}

void ARTSPlayerPawn::GiveOrder()
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		FHitResult Hit;
		if (PC->GetHitResultUnderCursor(ECC_GameTraceChannel1, true, Hit))
		{
			TargetActor = Hit.GetActor();
			TargetLocation = Hit.Location;
			if (ClickEffect)
			{
				FRotator Rotation;
				
				//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ClickEffect, Hit.Location, FRotator(0.f, 0.f, 0.f));
				UNiagaraComponent* ClickNiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ClickEffect, Hit.Location);
			}
		}
	}
	for (int i = 0; i < SelectedActors.Num(); i++)
	{
		IRTSOrderable* OrderInterface = Cast<IRTSOrderable>(SelectedActors[i]);
		if (OrderInterface)
		{
			IRTSOrderable::Execute_ExecuteOrder(SelectedActors[i]);
		}
	}
}

void ARTSPlayerPawn::SelectActorBeneathMouse(APlayerController* PC)
{
	if (PC)
	{
		FHitResult Hit;
		if (PC->GetHitResultUnderCursor(ECC_GameTraceChannel1, true, Hit))
		{
			AActor* ClickedActor = Hit.GetActor();
			if (ClickedActor == nullptr)
			{
				UE_LOG(LogTemp, Log, TEXT("Clicking Empty Space"));
			}
			else
			{
				FString ActorName;
				ClickedActor->GetName(ActorName);
				UE_LOG(LogTemp, Log, TEXT("Click on Actor: %s"), *(ActorName));
				IRTSSelectable* SelectionInterface = Cast<IRTSSelectable>(ClickedActor);
				if (SelectionInterface)
				{
					IRTSSelectable::Execute_Select(ClickedActor);
				}
			}
		}
	}
}

void ARTSPlayerPawn::MoveForward(float InMovement)
{
	
}

void ARTSPlayerPawn::MoveLateral(float InMovement)
{

}

void ARTSPlayerPawn::ZoomCamera(float Delta)
{
	if (Delta == 0.f)
	{
		return;
	}
	TargetCameraZoom = SpringArmComp->TargetArmLength + (Delta * ZoomSpeed);
	//UE_LOG(LogTemp, Log, TEXT("New Target Zoom is %f"), TargetCameraZoom);
}

void ARTSPlayerPawn::RotateCamera(float Delta)
{
	if (Delta == 0.f)
	{
		return;
	}
	TargetCameraRotation = SpringArmComp->GetRelativeRotation().Yaw + (Delta * RotateSpeed);
	//UE_LOG(LogTemp, Log, TEXT("New Target Rotation is %f"), TargetCameraRotation);
}

void ARTSPlayerPawn::ResetCamera()
{
	//SpringArmComp->TargetArmLength = PlayerDefaultZoom;
	//SpringArmComp->SetRelativeRotation(PlayerDefaultRotation);
	bRevertToDefaultZoom = true;
	TargetCameraZoom = PlayerDefaultZoom;
	TargetCameraRotation = PlayerDefaultRotation.Yaw;
	TargetCameraPitch = PlayerDefaultRotation.Pitch;
}

// Called every frame
void ARTSPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	PlayerCameraTick(DeltaTime);
}

void ARTSPlayerPawn::PlayerCameraTick(float DeltaTime)
{
	FRotator CurrentRotation = SpringArmComp->GetRelativeRotation();
	if (bRevertToDefaultZoom)
	{
		if (UKismetMathLibrary::Abs(CurrentRotation.Yaw - PlayerDefaultRotation.Yaw) < 2.f)
			bRevertToDefaultZoom = false;
	}

	if (TargetCameraZoom != SpringArmComp->TargetArmLength)
	{
		float CameraZoom = UKismetMathLibrary::FClamp(UKismetMathLibrary::FInterpTo(SpringArmComp->TargetArmLength, TargetCameraZoom, DeltaTime, 5.f), MinZoom, MaxZoom);
		SpringArmComp->TargetArmLength = CameraZoom;

		//if the zoom is below 1500, start decreasing the Y rotation
		if (SpringArmComp->TargetArmLength < PitchRotationThreshold)
		{
			//We are zooming in
			float DistanceFromZero = PitchRotationThreshold - CameraZoom;
			float PercentageDistance = 1 - (DistanceFromZero / PitchRotationThreshold);
			TargetCameraPitch = PlayerDefaultRotation.Pitch * PercentageDistance;
		}
		else
		{
			TargetCameraPitch = PlayerDefaultRotation.Pitch;
		}
		//if the zoom is nearing 1500 start increasing the Y rotation
	}

	if (TargetCameraRotation != SpringArmComp->GetRelativeRotation().Yaw)
	{
		//FRotator CurrentRotation = SpringArmComp->GetRelativeRotation();
		float CameraRotation = UKismetMathLibrary::FInterpTo(SpringArmComp->GetRelativeRotation().Yaw, TargetCameraRotation, DeltaTime, 5.f);
		CurrentRotation.Yaw = CameraRotation;
		SpringArmComp->SetRelativeRotation(CurrentRotation);
	}

	if (TargetCameraPitch != SpringArmComp->GetRelativeRotation().Pitch)
	{
		//FRotator CurrentRotation = SpringArmComp->GetRelativeRotation();
		float CameraPitch = UKismetMathLibrary::FInterpTo(SpringArmComp->GetRelativeRotation().Pitch, TargetCameraPitch, DeltaTime, 5.f);
		CurrentRotation.Pitch = TargetCameraPitch;
		SpringArmComp->SetRelativeRotation(CurrentRotation);
	}


	if (bRevertToDefaultZoom)
	{
		//interp each axis separately
		float CameraYaw = UKismetMathLibrary::FInterpTo(CurrentRotation.Yaw, PlayerDefaultRotation.Yaw, DeltaTime, 5.f);
		float CameraPitch = UKismetMathLibrary::FInterpTo(CurrentRotation.Pitch, PlayerDefaultRotation.Pitch, DeltaTime, 5.f);
		float CameraRoll = UKismetMathLibrary::FInterpTo(CurrentRotation.Roll, PlayerDefaultRotation.Roll, DeltaTime, 5.f);
		CurrentRotation.Yaw = CameraYaw;
		CurrentRotation.Pitch = CameraPitch;
		CurrentRotation.Roll = CameraRoll;
		SpringArmComp->SetRelativeRotation(CurrentRotation);
	}
}

// Called to bind functionality to input
void ARTSPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ARTSPlayerPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveLateral", this, &ARTSPlayerPawn::MoveLateral);
	PlayerInputComponent->BindAxis("RotateCamera", this, &ARTSPlayerPawn::RotateCamera);
	PlayerInputComponent->BindAxis("ZoomCamera", this, &ARTSPlayerPawn::ZoomCamera);

	PlayerInputComponent->BindAction("Select", IE_Released, this, &ARTSPlayerPawn::ClickInteract);
	PlayerInputComponent->BindAction("CumulativeSelect", IE_Released, this, &ARTSPlayerPawn::ClickAddToSelect);
	PlayerInputComponent->BindAction("Order", IE_Released, this, &ARTSPlayerPawn::GiveOrder);
	PlayerInputComponent->BindAction("ResetCamera", IE_Pressed, this, &ARTSPlayerPawn::ResetCamera);

}

void ARTSPlayerPawn::AddActorToSelection(AActor* NewActor)
{
	SelectedActors.AddUnique(NewActor);
}

void ARTSPlayerPawn::RemoveActorFromSelection(AActor* RemovedActor)
{
	SelectedActors.Remove(RemovedActor);
}

