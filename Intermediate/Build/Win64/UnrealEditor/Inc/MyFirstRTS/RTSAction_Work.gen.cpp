// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/UtilityAISystem/Actions/RTSAction_Work.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAction_Work() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAction_Work_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAction_Work();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAction();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	void URTSAction_Work::StaticRegisterNativesURTSAction_Work()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAction_Work);
	UClass* Z_Construct_UClass_URTSAction_Work_NoRegister()
	{
		return URTSAction_Work::StaticClass();
	}
	struct Z_Construct_UClass_URTSAction_Work_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSAction_Work_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URTSAction,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSAction_Work_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility AI System Action for AI to go to place of work\n */" },
		{ "IncludePath", "UtilityAISystem/Actions/RTSAction_Work.h" },
		{ "ModuleRelativePath", "Public/UtilityAISystem/Actions/RTSAction_Work.h" },
		{ "ToolTip", "Utility AI System Action for AI to go to place of work" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSAction_Work_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAction_Work>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAction_Work_Statics::ClassParams = {
		&URTSAction_Work::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URTSAction_Work_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSAction_Work_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSAction_Work()
	{
		if (!Z_Registration_Info_UClass_URTSAction_Work.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAction_Work.OuterSingleton, Z_Construct_UClass_URTSAction_Work_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSAction_Work.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSAction_Work>()
	{
		return URTSAction_Work::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAction_Work);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_Actions_RTSAction_Work_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_Actions_RTSAction_Work_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSAction_Work, URTSAction_Work::StaticClass, TEXT("URTSAction_Work"), &Z_Registration_Info_UClass_URTSAction_Work, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAction_Work), 4173161323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_Actions_RTSAction_Work_h_4153198284(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_Actions_RTSAction_Work_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_Actions_RTSAction_Work_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
