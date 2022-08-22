// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYFIRSTRTS_RTSAction_generated_h
#error "RTSAction.generated.h already included, missing '#pragma once' in RTSAction.h"
#endif
#define MYFIRSTRTS_RTSAction_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_RPC_WRAPPERS \
	virtual void Execute_Implementation(APawn* NPC); \
 \
	DECLARE_FUNCTION(execExecute);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Execute_Implementation(APawn* NPC); \
 \
	DECLARE_FUNCTION(execExecute);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_EVENT_PARMS \
	struct RTSAction_eventExecute_Parms \
	{ \
		APawn* NPC; \
	};


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSAction(); \
	friend struct Z_Construct_UClass_URTSAction_Statics; \
public: \
	DECLARE_CLASS(URTSAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSAction)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURTSAction(); \
	friend struct Z_Construct_UClass_URTSAction_Statics; \
public: \
	DECLARE_CLASS(URTSAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(URTSAction)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSAction(URTSAction&&); \
	NO_API URTSAction(const URTSAction&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSAction(URTSAction&&); \
	NO_API URTSAction(const URTSAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSAction)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_15_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
