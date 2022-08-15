// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URTSAttributeComponent;
class UDamageType;
class AController;
class AActor;
#ifdef MYFIRSTRTS_RTSAttributeComponent_generated_h
#error "RTSAttributeComponent.generated.h already included, missing '#pragma once' in RTSAttributeComponent.h"
#endif
#define MYFIRSTRTS_RTSAttributeComponent_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_12_DELEGATE \
struct _Script_MyFirstRTS_eventOnAttributeChangedSignature_Parms \
{ \
	URTSAttributeComponent* AttributeComp; \
	float Attribute; \
	float Delta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnAttributeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignature, URTSAttributeComponent* AttributeComp, float Attribute, float Delta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_MyFirstRTS_eventOnAttributeChangedSignature_Parms Parms; \
	Parms.AttributeComp=AttributeComp; \
	Parms.Attribute=Attribute; \
	Parms.Delta=Delta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnAttributeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execHandleTakeDamage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execHandleTakeDamage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSAttributeComponent(); \
	friend struct Z_Construct_UClass_URTSAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(URTSAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSAttributeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURTSAttributeComponent(); \
	friend struct Z_Construct_UClass_URTSAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(URTSAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSAttributeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSAttributeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSAttributeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAttributeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSAttributeComponent(URTSAttributeComponent&&); \
	NO_API URTSAttributeComponent(const URTSAttributeComponent&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSAttributeComponent(URTSAttributeComponent&&); \
	NO_API URTSAttributeComponent(const URTSAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTSAttributeComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_14_PROLOG
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
