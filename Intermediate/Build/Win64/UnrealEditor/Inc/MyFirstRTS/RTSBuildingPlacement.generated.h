// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_RTSBuildingPlacement_generated_h
#error "RTSBuildingPlacement.generated.h already included, missing '#pragma once' in RTSBuildingPlacement.h"
#endif
#define MYFIRSTRTS_RTSBuildingPlacement_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_RPC_WRAPPERS \
	virtual bool CanPlaceBuilding_Implementation(); \
 \
	DECLARE_FUNCTION(execCanPlaceBuilding);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanPlaceBuilding_Implementation(); \
 \
	DECLARE_FUNCTION(execCanPlaceBuilding);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_EVENT_PARMS \
	struct RTSBuildingPlacement_eventCanPlaceBuilding_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		RTSBuildingPlacement_eventCanPlaceBuilding_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSBuildingPlacement(); \
	friend struct Z_Construct_UClass_ARTSBuildingPlacement_Statics; \
public: \
	DECLARE_CLASS(ARTSBuildingPlacement, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSBuildingPlacement)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARTSBuildingPlacement(); \
	friend struct Z_Construct_UClass_ARTSBuildingPlacement_Statics; \
public: \
	DECLARE_CLASS(ARTSBuildingPlacement, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSBuildingPlacement)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSBuildingPlacement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSBuildingPlacement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSBuildingPlacement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSBuildingPlacement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSBuildingPlacement(ARTSBuildingPlacement&&); \
	NO_API ARTSBuildingPlacement(const ARTSBuildingPlacement&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSBuildingPlacement(ARTSBuildingPlacement&&); \
	NO_API ARTSBuildingPlacement(const ARTSBuildingPlacement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSBuildingPlacement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSBuildingPlacement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSBuildingPlacement)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_13_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class ARTSBuildingPlacement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
