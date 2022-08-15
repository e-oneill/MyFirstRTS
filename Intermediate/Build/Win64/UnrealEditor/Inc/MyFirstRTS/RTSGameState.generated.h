// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerRecord;
#ifdef MYFIRSTRTS_RTSGameState_generated_h
#error "RTSGameState.generated.h already included, missing '#pragma once' in RTSGameState.h"
#endif
#define MYFIRSTRTS_RTSGameState_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerResourceQuantity); \
	DECLARE_FUNCTION(execGetPlayerRecordForBlueprint);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerResourceQuantity); \
	DECLARE_FUNCTION(execGetPlayerRecordForBlueprint);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSGameState(); \
	friend struct Z_Construct_UClass_ARTSGameState_Statics; \
public: \
	DECLARE_CLASS(ARTSGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSGameState)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARTSGameState(); \
	friend struct Z_Construct_UClass_ARTSGameState_Statics; \
public: \
	DECLARE_CLASS(ARTSGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSGameState)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSGameState(ARTSGameState&&); \
	NO_API ARTSGameState(const ARTSGameState&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSGameState(ARTSGameState&&); \
	NO_API ARTSGameState(const ARTSGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSGameState)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_15_PROLOG
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class ARTSGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
