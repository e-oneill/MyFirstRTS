// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSBaseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBaseGameMode() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBaseGameMode_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBaseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	void ARTSBaseGameMode::StaticRegisterNativesARTSBaseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSBaseGameMode);
	UClass* Z_Construct_UClass_ARTSBaseGameMode_NoRegister()
	{
		return ARTSBaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARTSBaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSBaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBaseGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTSBaseGameMode.h" },
		{ "ModuleRelativePath", "Public/RTSBaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSBaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSBaseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSBaseGameMode_Statics::ClassParams = {
		&ARTSBaseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARTSBaseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBaseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSBaseGameMode()
	{
		if (!Z_Registration_Info_UClass_ARTSBaseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSBaseGameMode.OuterSingleton, Z_Construct_UClass_ARTSBaseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSBaseGameMode.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSBaseGameMode>()
	{
		return ARTSBaseGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSBaseGameMode);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBaseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBaseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSBaseGameMode, ARTSBaseGameMode::StaticClass, TEXT("ARTSBaseGameMode"), &Z_Registration_Info_UClass_ARTSBaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSBaseGameMode), 433389641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBaseGameMode_h_1365184548(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBaseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBaseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
