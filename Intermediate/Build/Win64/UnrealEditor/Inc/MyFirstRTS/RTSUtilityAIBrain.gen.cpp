// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSUtilityAIBrain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSUtilityAIBrain() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUtilityAIBrain_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUtilityAIBrain();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void URTSUtilityAIBrain::StaticRegisterNativesURTSUtilityAIBrain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSUtilityAIBrain);
	UClass* Z_Construct_UClass_URTSUtilityAIBrain_NoRegister()
	{
		return URTSUtilityAIBrain::StaticClass();
	}
	struct Z_Construct_UClass_URTSUtilityAIBrain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BestAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BestAction;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSUtilityAIBrain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUtilityAIBrain_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RTSUtilityAIBrain.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RTSUtilityAIBrain.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_BestAction_MetaData[] = {
		{ "Category", "RTSUtilityAIBrain" },
		{ "ModuleRelativePath", "Public/RTSUtilityAIBrain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_BestAction = { "BestAction", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSUtilityAIBrain, BestAction), Z_Construct_UClass_URTSAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_BestAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_BestAction_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_ActionTypes_Inner = { "ActionTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URTSAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_ActionTypes_MetaData[] = {
		{ "Category", "RTSUtilityAIBrain" },
		{ "ModuleRelativePath", "Public/RTSUtilityAIBrain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_ActionTypes = { "ActionTypes", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSUtilityAIBrain, ActionTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_ActionTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_ActionTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSUtilityAIBrain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_BestAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_ActionTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSUtilityAIBrain_Statics::NewProp_ActionTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSUtilityAIBrain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSUtilityAIBrain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSUtilityAIBrain_Statics::ClassParams = {
		&URTSUtilityAIBrain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URTSUtilityAIBrain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URTSUtilityAIBrain_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URTSUtilityAIBrain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUtilityAIBrain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSUtilityAIBrain()
	{
		if (!Z_Registration_Info_UClass_URTSUtilityAIBrain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSUtilityAIBrain.OuterSingleton, Z_Construct_UClass_URTSUtilityAIBrain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSUtilityAIBrain.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSUtilityAIBrain>()
	{
		return URTSUtilityAIBrain::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSUtilityAIBrain);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUtilityAIBrain_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUtilityAIBrain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSUtilityAIBrain, URTSUtilityAIBrain::StaticClass, TEXT("URTSUtilityAIBrain"), &Z_Registration_Info_UClass_URTSUtilityAIBrain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSUtilityAIBrain), 1265168301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUtilityAIBrain_h_3251138332(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUtilityAIBrain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUtilityAIBrain_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
