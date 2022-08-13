// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_RTSPlayerState_generated_h
#error "RTSPlayerState.generated.h already included, missing '#pragma once' in RTSPlayerState.h"
#endif
#define MYFIRSTRTS_RTSPlayerState_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execModifyResourceCount); \
	DECLARE_FUNCTION(execRemoveFromResource); \
	DECLARE_FUNCTION(execAddToResource);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModifyResourceCount); \
	DECLARE_FUNCTION(execRemoveFromResource); \
	DECLARE_FUNCTION(execAddToResource);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSPlayerState(); \
	friend struct Z_Construct_UClass_ARTSPlayerState_Statics; \
public: \
	DECLARE_CLASS(ARTSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerState)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_INCLASS \
private: \
	static void StaticRegisterNativesARTSPlayerState(); \
	friend struct Z_Construct_UClass_ARTSPlayerState_Statics; \
public: \
	DECLARE_CLASS(ARTSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerState)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPlayerState(ARTSPlayerState&&); \
	NO_API ARTSPlayerState(const ARTSPlayerState&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPlayerState(ARTSPlayerState&&); \
	NO_API ARTSPlayerState(const ARTSPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSPlayerState)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_16_PROLOG
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class ARTSPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
