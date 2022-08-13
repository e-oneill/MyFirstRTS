// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_RTSCharacterBase_generated_h
#error "RTSCharacterBase.generated.h already included, missing '#pragma once' in RTSCharacterBase.h"
#endif
#define MYFIRSTRTS_RTSCharacterBase_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_RPC_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSCharacterBase(); \
	friend struct Z_Construct_UClass_ARTSCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARTSCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARTSCharacterBase*>(this); }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARTSCharacterBase(); \
	friend struct Z_Construct_UClass_ARTSCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARTSCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), NO_API) \
	DECLARE_SERIALIZER(ARTSCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARTSCharacterBase*>(this); }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCharacterBase(ARTSCharacterBase&&); \
	NO_API ARTSCharacterBase(const ARTSCharacterBase&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCharacterBase(ARTSCharacterBase&&); \
	NO_API ARTSCharacterBase(const ARTSCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSCharacterBase)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_15_PROLOG
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_INCLASS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class ARTSCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
