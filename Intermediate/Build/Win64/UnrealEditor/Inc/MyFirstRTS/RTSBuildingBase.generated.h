// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_RTSBuildingBase_generated_h
#error "RTSBuildingBase.generated.h already included, missing '#pragma once' in RTSBuildingBase.h"
#endif
#define MYFIRSTRTS_RTSBuildingBase_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_RPC_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSBuildingBase(); \
	friend struct Z_Construct_UClass_ARTSBuildingBase_Statics; \
public: \
	DECLARE_CLASS(ARTSBuildingBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSBuildingBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARTSBuildingBase*>(this); }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARTSBuildingBase(); \
	friend struct Z_Construct_UClass_ARTSBuildingBase_Statics; \
public: \
	DECLARE_CLASS(ARTSBuildingBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSBuildingBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARTSBuildingBase*>(this); }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSBuildingBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSBuildingBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSBuildingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSBuildingBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSBuildingBase(ARTSBuildingBase&&); \
	NO_API ARTSBuildingBase(const ARTSBuildingBase&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSBuildingBase(ARTSBuildingBase&&); \
	NO_API ARTSBuildingBase(const ARTSBuildingBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSBuildingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSBuildingBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSBuildingBase)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_10_PROLOG
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class ARTSBuildingBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
