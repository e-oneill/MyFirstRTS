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
#include "RTSPlayerController.h"
#include "RTSSelectionMarqueeActor.h"
#include "Components/BoxComponent.h"
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
	MyPlayerController = Cast<ARTSPlayerController>(GetController());
	if (!MyPlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("Player Controller class is invalid."));
	}
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

	//GetInitialMousePosition
	FHitResult Hit;
	MyPlayerController->GetHitResultUnderCursor(ECC_GameTraceChannel1, true, Hit);
	MouseStartPosition = Hit.Location;

	////Add actor to 
	//ClickAddToSelect();
	GetWorldTimerManager().SetTimer(StartSelectionMarqueeTimer, this, &ARTSPlayerPawn::StartSelectionMarquee, 0.1f);
}

void ARTSPlayerPawn::StartSelectionMarquee()
{
	//SelectionMarquee = GetWorld()->SpawnActor(Selection)
	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = this;
	SelectionMarquee = Cast<ARTSSelectionMarqueeActor>(GetWorld()->SpawnActor(SelectionMarqueeClass, &MouseStartPosition, &FRotator::ZeroRotator, SpawnParams));
	SelectionMarquee->bIsSelecting = true;
}

void ARTSPlayerPawn::FinishClickInteract()
{
	GetWorldTimerManager().ClearTimer(StartSelectionMarqueeTimer);
	FHitResult Hit;
	MyPlayerController->GetHitResultUnderCursor(ECC_GameTraceChannel1, true, Hit);
	MouseEndPosition = Hit.Location;

	SelectActorBeneathMouse(MyPlayerController);
	
	if (SelectionMarquee && !SelectionMarquee->IsPendingKill())
	{
		for (int i = 0; i < SelectionMarquee->SelectedActors.Num(); i++)
		{
			if (SelectionMarquee->SelectedActors[i])
			{
				//SelectedActors.Add(SelectionMarquee->SelectedActors[i]);
				IRTSSelectable* SelectionInterface = Cast<IRTSSelectable>(SelectionMarquee->SelectedActors[i]);
				if (SelectionInterface)
				{
					IRTSSelectable::Execute_Select(SelectionMarquee->SelectedActors[i]);
				}
			}
		}
		SelectionMarquee->BoxCollider->OnComponentEndOverlap.Clear();
		SelectionMarquee->Destroy();
	}

}

void ARTSPlayerPawn::ClickAddToSelect()
{
	//APlayerController* PC = Cast<APlayerController>(GetController());
	
	SelectActorBeneathMouse(MyPlayerController);
}

void ARTSPlayerPawn::SaveSelection(const int SelectionGroupNumber)
{
	ARTSPlayerController* PC = Cast<ARTSPlayerController>(GetController());
	if (PC)
		PC->SetSelectionGroup(SelectionGroupNumber, SelectedActors);
}

void ARTSPlayerPawn::SelectSavedGroup(const int SelectionGroupNumber)
{
	ARTSPlayerController* PC = Cast<ARTSPlayerController>(GetController());
	if (PC)
	{
		if (PC->CheckSelectionGroupLength(SelectionGroupNumber) > 0)
		{
			TArray<AActor*> SelectionGroup = PC->GetSelectionGroup(SelectionGroupNumber);
			for (int i = 0; i < SelectionGroup.Num(); i++)
			{
				if (SelectionGroup[i])
				{
					IRTSSelectable* SelectionInterface = Cast<IRTSSelectable>(SelectionGroup[i]);
					if (SelectionInterface)
					{
						IRTSSelectable::Execute_Select(SelectionGroup[i]);
					}
				}
			}
		}
	}
}

void ARTSPlayerPawn::PrepareOrder_Implementation()
{
	
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

	if (SelectionMarquee && SelectionMarquee->bIsSelecting)
	{
		FHitResult Hit;
		MyPlayerController->GetHitResultUnderCursor(ECC_GameTraceChannel1, true, Hit);
		FVector CurrentMousePosition = Hit.Location;

		

		FVector LerpedVector = UKismetMathLibrary::VLerp(CurrentMousePosition, MouseStartPosition, 0.5f);
		//FVector LerpedPosition = LerpedVector;
		/*LerpedPosition.Z = CurrentMousePosition.Z;*/
		SelectionMarquee->BoxCollider->SetWorldLocation(LerpedVector);

		FVector NewBoxExtents = UKismetMathLibrary::Vector_GetAbs(CurrentMousePosition - MouseStartPosition);
		//Abs(CurrentMousePosition - MouseStartPosition);
		NewBoxExtents /= 2.f;
		NewBoxExtents.Z = 500.f;
		SelectionMarquee->BoxCollider->SetBoxExtent(NewBoxExtents);
	}
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

	PlayerInputComponent->BindAction("Select", IE_Pressed, this, &ARTSPlayerPawn::ClickInteract);
	PlayerInputComponent->BindAction("Select", IE_Released, this, &ARTSPlayerPawn::FinishClickInteract);
	PlayerInputComponent->BindAction("CumulativeSelect", IE_Released, this, &ARTSPlayerPawn::ClickAddToSelect);
	PlayerInputComponent->BindAction("Order", IE_Pressed, this, &ARTSPlayerPawn::PrepareOrder);
	PlayerInputComponent->BindAction("Order", IE_Released, this, &ARTSPlayerPawn::GiveOrder);
	PlayerInputComponent->BindAction("ResetCamera", IE_Pressed, this, &ARTSPlayerPawn::ResetCamera);

	//Selection Groups
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup1", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 0);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup1", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 0);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup2", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 1);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup2", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 1);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup3", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 2);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup3", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 2);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup4", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 3);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup4", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 3);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup5", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 4);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup5", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 4);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup6", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 5);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup6", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 5);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup7", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 6);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup7", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 6);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup8", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 7);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup8", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 7);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SaveGroup9", IE_Pressed, this, &ARTSPlayerPawn::SaveSelection, 8);
	PlayerInputComponent->BindAction<FInputSelectionGroupSwitchDelegate>("SelectGroup9", IE_Pressed, this, &ARTSPlayerPawn::SelectSavedGroup, 8);
}

void ARTSPlayerPawn::AddActorToSelection(AActor* NewActor)
{
	SelectedActors.AddUnique(NewActor);
}

void ARTSPlayerPawn::RemoveActorFromSelection(AActor* RemovedActor)
{
	SelectedActors.Remove(RemovedActor);
}

