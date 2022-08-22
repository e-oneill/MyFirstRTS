// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URTSUnitComponent;
struct FMission;
class URTSOrderTargetComponent;
#ifdef MYFIRSTRTS_RTSUnitComponent_generated_h
#error "RTSUnitComponent.generated.h already included, missing '#pragma once' in RTSUnitComponent.h"
#endif
#define MYFIRSTRTS_RTSUnitComponent_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_10_DELEGATE \
struct _Script_MyFirstRTS_eventOnMissionChangedSignature_Parms \
{ \
	URTSUnitComponent* UnitComp; \
	FMission NewMission; \
	FMission OldMission; \
}; \
static inline void FOnMissionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMissionChangedSignature, URTSUnitComponent* UnitComp, FMission NewMission, FMission OldMission) \
{ \
	_Script_MyFirstRTS_eventOnMissionChangedSignature_Parms Parms; \
	Parms.UnitComp=UnitComp; \
	Parms.NewMission=NewMission; \
	Parms.OldMission=OldMission; \
	OnMissionChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_RPC_WRAPPERS \
	virtual void WorkAtJobSite_Implementation(URTSOrderTargetComponent* CalledJobSite); \
 \
	DECLARE_FUNCTION(execWorkAtJobSite); \
	DECLARE_FUNCTION(execPickUpResource); \
	DECLARE_FUNCTION(execDepositResource); \
	DECLARE_FUNCTION(execExploitResource);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void WorkAtJobSite_Implementation(URTSOrderTargetComponent* CalledJobSite); \
 \
	DECLARE_FUNCTION(execWorkAtJobSite); \
	DECLARE_FUNCTION(execPickUpResource); \
	DECLARE_FUNCTION(execDepositResource); \
	DECLARE_FUNCTION(execExploitResource);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_EVENT_PARMS \
	struct RTSUnitComponent_eventWorkAtJobSite_Parms \
	{ \
		URTSOrderTargetComponent* CalledJobSite; \
	};


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSUnitComponent(); \
	friend struct Z_Construct_UClass_URTSUnitComponent_Statics; \
public: \
	DECLARE_CLASS(URTSUnitComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSUnitComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURTSUnitComponent(); \
	friend struct Z_Construct_UClass_URTSUnitComponent_Statics; \
public: \
	DECLARE_CLASS(URTSUnitComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSUnitComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSUnitComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSUnitComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSUnitComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSUnitComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSUnitComponent(URTSUnitComponent&&); \
	NO_API URTSUnitComponent(const URTSUnitComponent&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSUnitComponent(URTSUnitComponent&&); \
	NO_API URTSUnitComponent(const URTSUnitComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSUnitComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSUnitComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTSUnitComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_18_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSUnitComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
