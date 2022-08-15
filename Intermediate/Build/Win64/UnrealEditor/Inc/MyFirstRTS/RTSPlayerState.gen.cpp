// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPlayerState() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerState_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSCharacterBase_NoRegister();
// End Cross Module References
	void ARTSPlayerState::StaticRegisterNativesARTSPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSPlayerState);
	UClass* Z_Construct_UClass_ARTSPlayerState_NoRegister()
	{
		return ARTSPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBuildings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBuildings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyBuildings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyCharacters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTSPlayerState.h" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyBuildings_Inner = { "MyBuildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARTSBuildingBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyBuildings_MetaData[] = {
		{ "Category", "RTSPlayerState" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyBuildings = { "MyBuildings", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerState, MyBuildings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyBuildings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyBuildings_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyCharacters_Inner = { "MyCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARTSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyCharacters_MetaData[] = {
		{ "Category", "RTSPlayerState" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyCharacters = { "MyCharacters", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerState, MyCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyCharacters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyBuildings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyBuildings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_MyCharacters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerState_Statics::ClassParams = {
		&ARTSPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPlayerState()
	{
		if (!Z_Registration_Info_UClass_ARTSPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSPlayerState.OuterSingleton, Z_Construct_UClass_ARTSPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSPlayerState.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSPlayerState>()
	{
		return ARTSPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPlayerState);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSPlayerState, ARTSPlayerState::StaticClass, TEXT("ARTSPlayerState"), &Z_Registration_Info_UClass_ARTSPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSPlayerState), 4142090277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_2898704328(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
