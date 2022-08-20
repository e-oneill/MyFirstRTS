// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUnit;
struct FUnitTrainingRecord;
#ifdef MYFIRSTRTS_RTSRecruitmentComponent_generated_h
#error "RTSRecruitmentComponent.generated.h already included, missing '#pragma once' in RTSRecruitmentComponent.h"
#endif
#define MYFIRSTRTS_RTSRecruitmentComponent_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnit_Statics; \
	MYFIRSTRTS_API static class UScriptStruct* StaticStruct();


template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<struct FUnit>();

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics; \
	MYFIRSTRTS_API static class UScriptStruct* StaticStruct();


template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<struct FUnitTrainingRecord>();

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartTrainingUnit);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartTrainingUnit);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_EVENT_PARMS \
	struct RTSRecruitmentComponent_eventTrainingComplete_Parms \
	{ \
		int32 index; \
	};


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSRecruitmentComponent(); \
	friend struct Z_Construct_UClass_URTSRecruitmentComponent_Statics; \
public: \
	DECLARE_CLASS(URTSRecruitmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSRecruitmentComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesURTSRecruitmentComponent(); \
	friend struct Z_Construct_UClass_URTSRecruitmentComponent_Statics; \
public: \
	DECLARE_CLASS(URTSRecruitmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSRecruitmentComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSRecruitmentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSRecruitmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSRecruitmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSRecruitmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSRecruitmentComponent(URTSRecruitmentComponent&&); \
	NO_API URTSRecruitmentComponent(const URTSRecruitmentComponent&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSRecruitmentComponent(URTSRecruitmentComponent&&); \
	NO_API URTSRecruitmentComponent(const URTSRecruitmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSRecruitmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSRecruitmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTSRecruitmentComponent)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_42_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSRecruitmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
