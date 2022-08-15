// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RTSPlayerPawn.generated.h"

class UNiagaraSystem;
class USoundCue;
class ARTSResource;
class ARTSPlayerController;
class ARTSSelectionMarqueeActor;

DECLARE_DELEGATE_OneParam(FInputSelectionGroupSwitchDelegate, const int32);

UCLASS()
class MYFIRSTRTS_API ARTSPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARTSPlayerPawn();

protected:
	ARTSPlayerController* MyPlayerController;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ARTSSelectionMarqueeActor> SelectionMarqueeClass;

	UPROPERTY(BlueprintReadOnly)
	ARTSSelectionMarqueeActor* SelectionMarquee;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Function to carry out tick updates on the player camera
	void PlayerCameraTick(float DeltaTime);



	UPROPERTY(EditAnywhere)
	class USphereComponent* PlayerCollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UCameraComponent* CameraComponent;

	class AActor* SelectedActor;

	UPROPERTY(BlueprintReadOnly)
	TArray<AActor*> SelectedActors; 

	UPROPERTY(EditAnywhere)
	class UFloatingPawnMovement* MovementComponent;

	//The click interaction is started
	void ClickInteract();

	FTimerHandle StartSelectionMarqueeTimer;

	FVector MouseStartPosition;

	FVector MouseEndPosition;

	//Callback to start the selection box (after a brief delay from click interaction start
	void StartSelectionMarquee();

	//Interaction key is released, select actors
	void FinishClickInteract();

	void ClickAddToSelect();

	UFUNCTION(BlueprintCallable, Category = "User Interface")
	void SaveSelection(const int SelectionGroupNumber);

	UFUNCTION(BlueprintCallable, Category = "User Interface")
	void SelectSavedGroup(const int SelectionGroupNumber);

	UPROPERTY(EditDefaultsOnly, Category = "User Interface")
	UNiagaraSystem* ClickEffect;

	UPROPERTY(EditDefaultsOnly, Category = "User Interface")
	USoundCue* ClickSound;

	void GiveOrder();

	AActor* TargetActor; //the target actor of the player pawn's Order

	FVector TargetLocation; //the FVector of the location of the order

	ARTSResource* LastExploitedResource;

	void SelectActorBeneathMouse(APlayerController* PC);

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


	TArray<AActor*> GetSelectedActor() const {return SelectedActors; }

	void AddActorToSelection(AActor* NewActor);

	void RemoveActorFromSelection(AActor* RemovedActor);

	void SetSelectedActor(AActor* NewActor) { SelectedActor = NewActor; }

	AActor* GetTargetActor() const {return TargetActor;}

	FVector GetOrderTargetLocation() const {return TargetLocation;}

	ARTSResource* GetLastExploitedResource() const {return LastExploitedResource;}

	void SetLastExploitedResource(ARTSResource* NewResource) { LastExploitedResource = NewResource; }
};
