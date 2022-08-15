// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_RTSSelectable_generated_h
#error "RTSSelectable.generated.h already included, missing '#pragma once' in RTSSelectable.h"
#endif
#define MYFIRSTRTS_RTSSelectable_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_RPC_WRAPPERS \
	virtual void EndPreviewSelect_Implementation() {}; \
	virtual void PreviewSelect_Implementation() {}; \
	virtual void Deselect_Implementation() {}; \
	virtual void Select_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEndPreviewSelect); \
	DECLARE_FUNCTION(execPreviewSelect); \
	DECLARE_FUNCTION(execDeselect); \
	DECLARE_FUNCTION(execSelect);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndPreviewSelect_Implementation() {}; \
	virtual void PreviewSelect_Implementation() {}; \
	virtual void Deselect_Implementation() {}; \
	virtual void Select_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEndPreviewSelect); \
	DECLARE_FUNCTION(execPreviewSelect); \
	DECLARE_FUNCTION(execDeselect); \
	DECLARE_FUNCTION(execSelect);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_EVENT_PARMS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYFIRSTRTS_API URTSSelectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSSelectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYFIRSTRTS_API, URTSSelectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSSelectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYFIRSTRTS_API URTSSelectable(URTSSelectable&&); \
	MYFIRSTRTS_API URTSSelectable(const URTSSelectable&); \
public:


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYFIRSTRTS_API URTSSelectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYFIRSTRTS_API URTSSelectable(URTSSelectable&&); \
	MYFIRSTRTS_API URTSSelectable(const URTSSelectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYFIRSTRTS_API, URTSSelectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSSelectable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSSelectable)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURTSSelectable(); \
	friend struct Z_Construct_UClass_URTSSelectable_Statics; \
public: \
	DECLARE_CLASS(URTSSelectable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), MYFIRSTRTS_API) \
	DECLARE_SERIALIZER(URTSSelectable)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRTSSelectable() {} \
public: \
	typedef URTSSelectable UClassType; \
	typedef IRTSSelectable ThisClass; \
	static void Execute_Deselect(UObject* O); \
	static void Execute_EndPreviewSelect(UObject* O); \
	static void Execute_PreviewSelect(UObject* O); \
	static void Execute_Select(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IRTSSelectable() {} \
public: \
	typedef URTSSelectable UClassType; \
	typedef IRTSSelectable ThisClass; \
	static void Execute_Deselect(UObject* O); \
	static void Execute_EndPreviewSelect(UObject* O); \
	static void Execute_PreviewSelect(UObject* O); \
	static void Execute_Select(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_10_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSSelectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
