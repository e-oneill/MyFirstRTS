// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAIController() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSAIController_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	void ARTSAIController::StaticRegisterNativesARTSAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSAIController);
	UClass* Z_Construct_UClass_ARTSAIController_NoRegister()
	{
		return ARTSAIController::StaticClass();
	}
	struct Z_Construct_UClass_ARTSAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RTSAIController.h" },
		{ "ModuleRelativePath", "Public/RTSAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSAIController_Statics::ClassParams = {
		&ARTSAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSAIController()
	{
		if (!Z_Registration_Info_UClass_ARTSAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSAIController.OuterSingleton, Z_Construct_UClass_ARTSAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSAIController.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSAIController>()
	{
		return ARTSAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSAIController);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSAIController, ARTSAIController::StaticClass, TEXT("ARTSAIController"), &Z_Registration_Info_UClass_ARTSAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSAIController), 4163514688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAIController_h_3509223353(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
