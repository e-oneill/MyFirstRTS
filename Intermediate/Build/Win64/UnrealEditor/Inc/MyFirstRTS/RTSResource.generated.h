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
#ifdef MYFIRSTRTS_RTSResource_generated_h
#error "RTSResource.generated.h already included, missing '#pragma once' in RTSResource.h"
#endif
#define MYFIRSTRTS_RTSResource_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleResourceQuantityChanged);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleResourceQuantityChanged);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_EVENT_PARMS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSResource(); \
	friend struct Z_Construct_UClass_ARTSResource_Statics; \
public: \
	DECLARE_CLASS(ARTSResource, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSResource)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARTSResource(); \
	friend struct Z_Construct_UClass_ARTSResource_Statics; \
public: \
	DECLARE_CLASS(ARTSResource, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSResource)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSResource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSResource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSResource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSResource(ARTSResource&&); \
	NO_API ARTSResource(const ARTSResource&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSResource(ARTSResource&&); \
	NO_API ARTSResource(const ARTSResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSResource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSResource)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_14_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class ARTSResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
