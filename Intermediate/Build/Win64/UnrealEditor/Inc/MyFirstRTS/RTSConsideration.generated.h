// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_RTSConsideration_generated_h
#error "RTSConsideration.generated.h already included, missing '#pragma once' in RTSConsideration.h"
#endif
#define MYFIRSTRTS_RTSConsideration_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_RPC_WRAPPERS \
	virtual float ScoreConsideration_Implementation(); \
 \
	DECLARE_FUNCTION(execScoreConsideration); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execSetScore);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float ScoreConsideration_Implementation(); \
 \
	DECLARE_FUNCTION(execScoreConsideration); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execSetScore);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_EVENT_PARMS \
	struct RTSConsideration_eventScoreConsideration_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		RTSConsideration_eventScoreConsideration_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSConsideration(); \
	friend struct Z_Construct_UClass_URTSConsideration_Statics; \
public: \
	DECLARE_CLASS(URTSConsideration, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSConsideration)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURTSConsideration(); \
	friend struct Z_Construct_UClass_URTSConsideration_Statics; \
public: \
	DECLARE_CLASS(URTSConsideration, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSConsideration)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSConsideration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSConsideration) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSConsideration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSConsideration); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSConsideration(URTSConsideration&&); \
	NO_API URTSConsideration(const URTSConsideration&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSConsideration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSConsideration(URTSConsideration&&); \
	NO_API URTSConsideration(const URTSConsideration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSConsideration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSConsideration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSConsideration)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_12_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSConsideration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
