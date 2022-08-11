// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/MyFirstRTSGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstRTSGameModeBase() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_AMyFirstRTSGameModeBase_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_AMyFirstRTSGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	void AMyFirstRTSGameModeBase::StaticRegisterNativesAMyFirstRTSGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyFirstRTSGameModeBase);
	UClass* Z_Construct_UClass_AMyFirstRTSGameModeBase_NoRegister()
	{
		return AMyFirstRTSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyFirstRTSGameModeBase.h" },
		{ "ModuleRelativePath", "MyFirstRTSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFirstRTSGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics::ClassParams = {
		&AMyFirstRTSGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFirstRTSGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyFirstRTSGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyFirstRTSGameModeBase.OuterSingleton, Z_Construct_UClass_AMyFirstRTSGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyFirstRTSGameModeBase.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<AMyFirstRTSGameModeBase>()
	{
		return AMyFirstRTSGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstRTSGameModeBase);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_MyFirstRTSGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_MyFirstRTSGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyFirstRTSGameModeBase, AMyFirstRTSGameModeBase::StaticClass, TEXT("AMyFirstRTSGameModeBase"), &Z_Registration_Info_UClass_AMyFirstRTSGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyFirstRTSGameModeBase), 2686597448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_MyFirstRTSGameModeBase_h_732214642(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_MyFirstRTSGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_MyFirstRTSGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
