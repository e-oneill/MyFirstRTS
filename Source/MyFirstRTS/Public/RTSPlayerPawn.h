// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RTSPlayerPawn.generated.h"

UCLASS()
class MYFIRSTRTS_API ARTSPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARTSPlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class USphereComponent* PlayerCollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere)
	class UFloatingPawnMovement* MovementComponent;

	void MoveForward(float InMovement);

	void MoveLateral(float InMovement);

	void ZoomCamera(float Delta);

	float PlayerDefaultZoom = 4000.f;
	FRotator PlayerDefaultRotation;
	bool bRevertToDefaultZoom;
	float TargetCameraZoom;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Controls")
	float MinZoom;

	//The value for the zoom distance where the camera will start automatically rotating down
	UPROPERTY(EditDefaultsOnly, Category = "Camera Controls")
	float PitchRotationThreshold;

	UPROPERTY(EditDefaultsOnly, Category = "Camera Controls")
	float MaxZoom;
	
	UPROPERTY(EditDefaultsOnly, Category = "Camera Controls")
	float ZoomSpeed;
	
	UPROPERTY(EditDefaultsOnly, Category = "Camera Controls")
	float RotateSpeed;
	float MinRotation;
	float MaxRotation;
	void RotateCamera(float Delta);
	float TargetCameraRotation;
	float TargetCameraPitch;

	void ResetCamera();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
