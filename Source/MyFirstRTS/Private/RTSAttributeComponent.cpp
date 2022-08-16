// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSAttributeComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/WidgetComponent.h"
#include "UObject/UObjectGlobals.h"

// Sets default values for this component's properties
URTSAttributeComponent::URTSAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MaxHealth = 100;
	Health = MaxHealth;
	bIsDead = false;
	// ...
}


// Called when the game starts
void URTSAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	SetIsReplicated(true);
	if (GetOwnerRole() == ROLE_Authority)
	{
		Health = MaxHealth;
		AActor* MyOwner = GetOwner();
		if (MyOwner)
		{
			MyOwner->OnTakeAnyDamage.AddDynamic(this, &URTSAttributeComponent::HandleTakeDamage);
			AttributeHealthBar = NewObject<UWidgetComponent>(this,StatBarWidget, TEXT("AttributeBar"));
			
			//ConstructObject<UWidgetComponent>(StatBarWidget, this, TEXT("SpawnedAttrBar"));
			if (AttributeHealthBar)
			{
				//FAttachmentTransformRules TransformRules;
				//TransformRules.KeepRelativeTransform(EAttachmentRule::SnapToTarget);
				AttributeHealthBar->RegisterComponent();
				AttributeHealthBar->AttachToComponent(MyOwner->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
				AttributeHealthBar->SetRelativeLocation(FVector::ZeroVector);
				FVector BarLocation = AttributeHealthBar->GetRelativeLocation();
				BarLocation.Z += WidgetVerticalOffset;
				AttributeHealthBar->SetRelativeLocation(BarLocation);
			}
		}
	}
}

void URTSAttributeComponent::OnRep_Health(float OldHealth)
{
	float Damage = Health - OldHealth;
	OnHealthChanged.Broadcast(this, Health, Damage, nullptr, nullptr, nullptr);
}


void URTSAttributeComponent::HandleTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.f || bIsDead)
	{
		{
			return;
		} 
	}
	Health = FMath::Clamp(Health - Damage, 0.f, MaxHealth);
	if (Health <= 0.f && !bIsDead)
	{
		bIsDead = true;
	}

	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);

}

// Called every frame
void URTSAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float URTSAttributeComponent::Heal(AActor* Healer, float HealingAmount)
{
	Health = FMath::Clamp(Health + HealingAmount, 0.f, MaxHealth);

	OnHealthChanged.Broadcast(this, Health, (HealingAmount*-1), nullptr, Healer->GetInstigatorController(), Healer);

	return Health/MaxHealth;
}

void URTSAttributeComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(URTSAttributeComponent, Health);
	//DOREPLIFETIME(USHealthComponent, Shield);
}


