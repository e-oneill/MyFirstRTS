// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RTSSelectable.h"
#include "RTSBuildingBase.generated.h"

class URTSAttributeComponent;
//class UMeshComponent;
enum EResourceType;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnConstructionSignature, ARTSBuildingBase*, ConstructedBuilding, float, PercentDone, AActor*, Builder);

UCLASS()
class MYFIRSTRTS_API ARTSBuildingBase : public AActor, public IRTSSelectable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTSBuildingBase();

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	//UMeshComponent* MeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int OwningPlayerId = 0;

	class AActor* SelectedActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsConstructed = false;

	UPROPERTY(EditAnywhere, Category = "Building Functions")
	bool bIsResourceDropOff;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Building Functions", meta = (EditCondition = "bIsResourceDropOff"))
	TArray<TEnumAsByte<EResourceType>> ValidResources;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URTSAttributeComponent* AttributeComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Select_Implementation() override;

	int GetOwningPlayerId() const {return OwningPlayerId; }

	bool SetOwningPlayerId(int NewID);

	bool GetIsResourceDropOff() const {return bIsResourceDropOff;}

	TArray<TEnumAsByte<EResourceType>> GetValidResources() const {return ValidResources;}

	void Deselect_Implementation() override;

	//Function that must be implemented in blueprint, as buildings can have either a static or skeletal mesh, this lets the C++ code work with this mesh
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UMeshComponent* GetBuildingMesh(); 

	UFUNCTION(BlueprintCallable)
	bool GetIsConstructed() const {return bIsConstructed;}

	URTSAttributeComponent* GetAttributeComponent() const {return AttributeComponent;}

	UPROPERTY(BlueprintAssignable, Category = "RTS Building Events")
	FOnConstructionSignature OnConstruction;

};
