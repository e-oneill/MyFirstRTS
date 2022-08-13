// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_RTSOrderable_generated_h
#error "RTSOrderable.generated.h already included, missing '#pragma once' in RTSOrderable.h"
#endif
#define MYFIRSTRTS_RTSOrderable_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_RPC_WRAPPERS \
	virtual void CancelOrder_Implementation() {}; \
	virtual void ExecuteOrder_Implementation() {}; \
 \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execExecuteOrder);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CancelOrder_Implementation() {}; \
	virtual void ExecuteOrder_Implementation() {}; \
 \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execExecuteOrder);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_EVENT_PARMS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYFIRSTRTS_API URTSOrderable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSOrderable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYFIRSTRTS_API, URTSOrderable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYFIRSTRTS_API URTSOrderable(URTSOrderable&&); \
	MYFIRSTRTS_API URTSOrderable(const URTSOrderable&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYFIRSTRTS_API URTSOrderable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYFIRSTRTS_API URTSOrderable(URTSOrderable&&); \
	MYFIRSTRTS_API URTSOrderable(const URTSOrderable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYFIRSTRTS_API, URTSOrderable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSOrderable)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURTSOrderable(); \
	friend struct Z_Construct_UClass_URTSOrderable_Statics; \
public: \
	DECLARE_CLASS(URTSOrderable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), MYFIRSTRTS_API) \
	DECLARE_SERIALIZER(URTSOrderable)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRTSOrderable() {} \
public: \
	typedef URTSOrderable UClassType; \
	typedef IRTSOrderable ThisClass; \
	static void Execute_CancelOrder(UObject* O); \
	static void Execute_ExecuteOrder(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IRTSOrderable() {} \
public: \
	typedef URTSOrderable UClassType; \
	typedef IRTSOrderable ThisClass; \
	static void Execute_CancelOrder(UObject* O); \
	static void Execute_ExecuteOrder(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_10_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSOrderable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
