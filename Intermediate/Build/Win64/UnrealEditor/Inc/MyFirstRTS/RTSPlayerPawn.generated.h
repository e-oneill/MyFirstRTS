// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBuildingData;
#ifdef MYFIRSTRTS_RTSPlayerPawn_generated_h
#error "RTSPlayerPawn.generated.h already included, missing '#pragma once' in RTSPlayerPawn.h"
#endif
#define MYFIRSTRTS_RTSPlayerPawn_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_RPC_WRAPPERS \
	virtual void PrepareOrder_Implementation(); \
 \
	DECLARE_FUNCTION(execStartBuildingPlacement); \
	DECLARE_FUNCTION(execPrepareOrder); \
	DECLARE_FUNCTION(execSelectSavedGroup); \
	DECLARE_FUNCTION(execSaveSelection);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PrepareOrder_Implementation(); \
 \
	DECLARE_FUNCTION(execStartBuildingPlacement); \
	DECLARE_FUNCTION(execPrepareOrder); \
	DECLARE_FUNCTION(execSelectSavedGroup); \
	DECLARE_FUNCTION(execSaveSelection);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_EVENT_PARMS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSPlayerPawn(); \
	friend struct Z_Construct_UClass_ARTSPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ARTSPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerPawn)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_INCLASS \
private: \
	static void StaticRegisterNativesARTSPlayerPawn(); \
	friend struct Z_Construct_UClass_ARTSPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ARTSPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerPawn)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPlayerPawn(ARTSPlayerPawn&&); \
	NO_API ARTSPlayerPawn(const ARTSPlayerPawn&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPlayerPawn(ARTSPlayerPawn&&); \
	NO_API ARTSPlayerPawn(const ARTSPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSPlayerPawn)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_19_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class ARTSPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
