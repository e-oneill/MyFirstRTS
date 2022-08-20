// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RTSAttributeComponent.generated.h"

class UWidgetComponent;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnAttributeChangedSignature, URTSAttributeComponent*, AttributeComp, float, Attribute, float, Delta, const class UDamageType*, DamageType, class AController*, InstigatedBy, AActor*, DamageCauser);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYFIRSTRTS_API URTSAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URTSAttributeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UWidgetComponent> StatBarWidget;

	UPROPERTY(EditAnywhere)
	float WidgetVerticalOffset;

	UPROPERTY(BlueprintReadWrite)
		UWidgetComponent* AttributeHealthBar;

	UPROPERTY(BlueprintReadWrite, Category = "Statistics", ReplicatedUsing=OnRep_Health)
	float Health;

	UFUNCTION()
	void OnRep_Health(float OldHealth);

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Statistics")
	float MaxHealth;

	UPROPERTY(BlueprintReadWrite)
	bool bIsDead;

	UFUNCTION()
	void HandleTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable, Category = "Attribute Events")
		FOnAttributeChangedSignature OnHealthChanged;

	UFUNCTION(BlueprintCallable)
	float GetHealth() const {return Health;}
	
	void SetHealth (float NewHealth) { Health = NewHealth;}

	//Function to heal a target, will return the current percentage HP of the target
	UFUNCTION(BlueprintCallable)
	float Heal(AActor* Healer, float HealingAmount);
};
