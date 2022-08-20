// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class AActor;
#ifdef MYFIRSTRTS_RTSOrderable_generated_h
#error "RTSOrderable.generated.h already included, missing '#pragma once' in RTSOrderable.h"
#endif
#define MYFIRSTRTS_RTSOrderable_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_SPARSE_DATA
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_RPC_WRAPPERS \
	virtual TSubclassOf<UStaticMeshComponent>  GetOrderPreviewMesh_Implementation() { return NULL; }; \
	virtual void CancelOrder_Implementation() {}; \
	virtual void HandleOrderToActor_Implementation(AActor* Actor) {}; \
	virtual void HandleOrderToLocationAndRotation_Implementation(FVector Location, FRotator Rotation) {}; \
	virtual void HandleOrderToLocation_Implementation(FVector Location) {}; \
	virtual void ExecuteOrder_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetOrderPreviewMesh); \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execHandleOrderToActor); \
	DECLARE_FUNCTION(execHandleOrderToLocationAndRotation); \
	DECLARE_FUNCTION(execHandleOrderToLocation); \
	DECLARE_FUNCTION(execExecuteOrder);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSubclassOf<UStaticMeshComponent>  GetOrderPreviewMesh_Implementation() { return NULL; }; \
	virtual void CancelOrder_Implementation() {}; \
	virtual void HandleOrderToActor_Implementation(AActor* Actor) {}; \
	virtual void HandleOrderToLocationAndRotation_Implementation(FVector Location, FRotator Rotation) {}; \
	virtual void HandleOrderToLocation_Implementation(FVector Location) {}; \
	virtual void ExecuteOrder_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetOrderPreviewMesh); \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execHandleOrderToActor); \
	DECLARE_FUNCTION(execHandleOrderToLocationAndRotation); \
	DECLARE_FUNCTION(execHandleOrderToLocation); \
	DECLARE_FUNCTION(execExecuteOrder);


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_EVENT_PARMS \
	struct RTSOrderable_eventGetOrderPreviewMesh_Parms \
	{ \
		TSubclassOf<UStaticMeshComponent>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		RTSOrderable_eventGetOrderPreviewMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct RTSOrderable_eventHandleOrderToActor_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct RTSOrderable_eventHandleOrderToLocation_Parms \
	{ \
		FVector Location; \
	}; \
	struct RTSOrderable_eventHandleOrderToLocationAndRotation_Parms \
	{ \
		FVector Location; \
		FRotator Rotation; \
	};


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_CALLBACK_WRAPPERS
#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_STANDARD_CONSTRUCTORS \
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


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_ENHANCED_CONSTRUCTORS \
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


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURTSOrderable(); \
	friend struct Z_Construct_UClass_URTSOrderable_Statics; \
public: \
	DECLARE_CLASS(URTSOrderable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyFirstRTS"), MYFIRSTRTS_API) \
	DECLARE_SERIALIZER(URTSOrderable)


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_GENERATED_UINTERFACE_BODY() \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_GENERATED_UINTERFACE_BODY() \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRTSOrderable() {} \
public: \
	typedef URTSOrderable UClassType; \
	typedef IRTSOrderable ThisClass; \
	static void Execute_CancelOrder(UObject* O); \
	static void Execute_ExecuteOrder(UObject* O); \
	static TSubclassOf<UStaticMeshComponent>  Execute_GetOrderPreviewMesh(UObject* O); \
	static void Execute_HandleOrderToActor(UObject* O, AActor* Actor); \
	static void Execute_HandleOrderToLocation(UObject* O, FVector Location); \
	static void Execute_HandleOrderToLocationAndRotation(UObject* O, FVector Location, FRotator Rotation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IRTSOrderable() {} \
public: \
	typedef URTSOrderable UClassType; \
	typedef IRTSOrderable ThisClass; \
	static void Execute_CancelOrder(UObject* O); \
	static void Execute_ExecuteOrder(UObject* O); \
	static TSubclassOf<UStaticMeshComponent>  Execute_GetOrderPreviewMesh(UObject* O); \
	static void Execute_HandleOrderToActor(UObject* O, AActor* Actor); \
	static void Execute_HandleOrderToLocation(UObject* O, FVector Location); \
	static void Execute_HandleOrderToLocationAndRotation(UObject* O, FVector Location, FRotator Rotation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_12_PROLOG \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_EVENT_PARMS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_RPC_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_SPARSE_DATA \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_CALLBACK_WRAPPERS \
	FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTRTS_API UClass* StaticClass<class URTSOrderable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
