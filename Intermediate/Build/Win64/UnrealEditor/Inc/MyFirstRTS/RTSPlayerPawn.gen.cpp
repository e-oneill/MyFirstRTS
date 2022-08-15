// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSPlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPlayerPawn() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerPawn_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSSelectionMarqueeActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARTSPlayerPawn::execSelectSavedGroup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SelectionGroupNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSavedGroup(Z_Param_SelectionGroupNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerPawn::execSaveSelection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SelectionGroupNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSelection(Z_Param_SelectionGroupNumber);
		P_NATIVE_END;
	}
	void ARTSPlayerPawn::StaticRegisterNativesARTSPlayerPawn()
	{
		UClass* Class = ARTSPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveSelection", &ARTSPlayerPawn::execSaveSelection },
			{ "SelectSavedGroup", &ARTSPlayerPawn::execSelectSavedGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics
	{
		struct RTSPlayerPawn_eventSaveSelection_Parms
		{
			int32 SelectionGroupNumber;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionGroupNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectionGroupNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::NewProp_SelectionGroupNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::NewProp_SelectionGroupNumber = { "SelectionGroupNumber", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerPawn_eventSaveSelection_Parms, SelectionGroupNumber), METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::NewProp_SelectionGroupNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::NewProp_SelectionGroupNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::NewProp_SelectionGroupNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerPawn, nullptr, "SaveSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::RTSPlayerPawn_eventSaveSelection_Parms), Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics
	{
		struct RTSPlayerPawn_eventSelectSavedGroup_Parms
		{
			int32 SelectionGroupNumber;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionGroupNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectionGroupNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::NewProp_SelectionGroupNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::NewProp_SelectionGroupNumber = { "SelectionGroupNumber", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerPawn_eventSelectSavedGroup_Parms, SelectionGroupNumber), METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::NewProp_SelectionGroupNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::NewProp_SelectionGroupNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::NewProp_SelectionGroupNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerPawn, nullptr, "SelectSavedGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::RTSPlayerPawn_eventSelectSavedGroup_Parms), Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSPlayerPawn);
	UClass* Z_Construct_UClass_ARTSPlayerPawn_NoRegister()
	{
		return ARTSPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMarqueeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectionMarqueeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMarquee_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionMarquee;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSPlayerPawn_SaveSelection, "SaveSelection" }, // 3056017169
		{ &Z_Construct_UFunction_ARTSPlayerPawn_SelectSavedGroup, "SelectSavedGroup" }, // 2119825288
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSPlayerPawn.h" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarqueeClass_MetaData[] = {
		{ "Category", "RTSPlayerPawn" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarqueeClass = { "SelectionMarqueeClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, SelectionMarqueeClass), Z_Construct_UClass_ARTSSelectionMarqueeActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarqueeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarqueeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarquee_MetaData[] = {
		{ "Category", "RTSPlayerPawn" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarquee = { "SelectionMarquee", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, SelectionMarquee), Z_Construct_UClass_ARTSSelectionMarqueeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarquee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarquee_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PlayerCollisionComponent_MetaData[] = {
		{ "Category", "RTSPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PlayerCollisionComponent = { "PlayerCollisionComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, PlayerCollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PlayerCollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PlayerCollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "RTSPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "RTSPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_CameraComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectedActors_Inner = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectedActors_MetaData[] = {
		{ "Category", "RTSPlayerPawn" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, SelectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "RTSPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickEffect_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickEffect = { "ClickEffect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, ClickEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickSound_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickSound = { "ClickSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, ClickSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MinZoom_MetaData[] = {
		{ "Category", "Camera Controls" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MinZoom = { "MinZoom", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, MinZoom), METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MinZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MinZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PitchRotationThreshold_MetaData[] = {
		{ "Category", "Camera Controls" },
		{ "Comment", "//The value for the zoom distance where the camera will start automatically rotating down\n" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
		{ "ToolTip", "The value for the zoom distance where the camera will start automatically rotating down" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PitchRotationThreshold = { "PitchRotationThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, PitchRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PitchRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PitchRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MaxZoom_MetaData[] = {
		{ "Category", "Camera Controls" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MaxZoom = { "MaxZoom", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, MaxZoom), METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MaxZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MaxZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera Controls" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Camera Controls" },
		{ "ModuleRelativePath", "Public/RTSPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerPawn, RotateSpeed), METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_RotateSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarqueeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectionMarquee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PlayerCollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SpringArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_SelectedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ClickSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MinZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_PitchRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_MaxZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_ZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerPawn_Statics::NewProp_RotateSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerPawn_Statics::ClassParams = {
		&ARTSPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPlayerPawn()
	{
		if (!Z_Registration_Info_UClass_ARTSPlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSPlayerPawn.OuterSingleton, Z_Construct_UClass_ARTSPlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSPlayerPawn.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSPlayerPawn>()
	{
		return ARTSPlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPlayerPawn);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSPlayerPawn, ARTSPlayerPawn::StaticClass, TEXT("ARTSPlayerPawn"), &Z_Registration_Info_UClass_ARTSPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSPlayerPawn), 4015401964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_3025701215(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
