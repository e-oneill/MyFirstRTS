// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URTSOrderTargetComponent;
class AActor;
class URTSUnitComponent;
#ifdef MYFIRSTRTS_RTSOrderTargetComponent_generated_h
#error "RTSOrderTargetComponent.generated.h already included, missing '#pragma once' in RTSOrderTargetComponent.h"
#endif
#define MYFIRSTRTS_RTSOrderTargetComponent_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_16_DELEGATE \
struct _Script_MyFirstRTS_eventOnValueChangedSignature_Parms \
{ \
	URTSOrderTargetComponent* ModifiedComponent; \
	int32 NewValue; \
	float PercentDone; \
	AActor* AffectingActor; \
}; \
static inline void FOnValueChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnValueChangedSignature, URTSOrderTargetComponent* ModifiedComponent, int32 NewValue, float PercentDone, AActor* AffectingActor) \
{ \
	_Script_MyFirstRTS_eventOnValueChangedSignature_Parms Parms; \
	Parms.ModifiedComponent=ModifiedComponent; \
	Parms.NewValue=NewValue; \
	Parms.PercentDone=PercentDone; \
	Parms.AffectingActor=AffectingActor; \
	OnValueChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_17_DELEGATE \
struct _Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms \
{ \
	URTSOrderTargetComponent* ModifiedComp; \
	TEnumAsByte<EResourceType> Resource; \
	int32 NewQuantity; \
	int32 OldQuantity; \
}; \
static inline void FOnResourceDepositedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnResourceDepositedSignature, URTSOrderTargetComponent* ModifiedComp, EResourceType Resource, int32 NewQuantity, int32 OldQuantity) \
{ \
	_Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms Parms; \
	Parms.ModifiedComp=ModifiedComp; \
	Parms.Resource=Resource; \
	Parms.NewQuantity=NewQuantity; \
	Parms.OldQuantity=OldQuantity; \
	OnResourceDepositedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_RPC_WRAPPERS \
	virtual void WorkAtJobSite_Implementation(URTSUnitComponent* Worker); \
 \
	DECLARE_FUNCTION(execAssignUnemployedWorker); \
	DECLARE_FUNCTION(execWorkAtJobSite); \
	DECLARE_FUNCTION(execSetResourceValue); \
	DECLARE_FUNCTION(execGetResourceValue);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void WorkAtJobSite_Implementation(URTSUnitComponent* Worker); \
 \
	DECLARE_FUNCTION(execAssignUnemployedWorker); \
	DECLARE_FUNCTION(execWorkAtJobSite); \
	DECLARE_FUNCTION(execSetResourceValue); \
	DECLARE_FUNCTION(execGetResourceValue);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_EVENT_PARMS \
	struct RTSOrderTargetComponent_eventWorkAtJobSite_Parms \
	{ \
		URTSUnitComponent* Worker; \
	};


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSOrderTargetComponent(); \
	friend struct Z_Construct_UClass_URTSOrderTargetComponent_Statics; \
public: \
	DECLARE_CLASS(URTSOrderTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSOrderTargetComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURTSOrderTargetComponent(); \
	friend struct Z_Construct_UClass_URTSOrderTargetComponent_Statics; \
public: \
	DECLARE_CLASS(URTSOrderTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSOrderTargetComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSOrderTargetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSOrderTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSOrderTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSOrderTargetComponent(URTSOrderTargetComponent&&); \
	NO_API URTSOrderTargetComponent(const URTSOrderTargetComponent&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSOrderTargetComponent(URTSOrderTargetComponent&&); \
	NO_API URTSOrderTargetComponent(const URTSOrderTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSOrderTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTSOrderTargetComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_19_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSOrderTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
