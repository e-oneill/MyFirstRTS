// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPlayerController() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerController_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	void ARTSPlayerController::StaticRegisterNativesARTSPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSPlayerController);
	UClass* Z_Construct_UClass_ARTSPlayerController_NoRegister()
	{
		return ARTSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfSelectionGroups_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumOfSelectionGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RTSPlayerController.h" },
		{ "ModuleRelativePath", "Public/RTSPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_NumOfSelectionGroups_MetaData[] = {
		{ "Category", "RTSPlayerController" },
		{ "ModuleRelativePath", "Public/RTSPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_NumOfSelectionGroups = { "NumOfSelectionGroups", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerController, NumOfSelectionGroups), METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_NumOfSelectionGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_NumOfSelectionGroups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_NumOfSelectionGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerController_Statics::ClassParams = {
		&ARTSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPlayerController()
	{
		if (!Z_Registration_Info_UClass_ARTSPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSPlayerController.OuterSingleton, Z_Construct_UClass_ARTSPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSPlayerController.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSPlayerController>()
	{
		return ARTSPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPlayerController);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSPlayerController, ARTSPlayerController::StaticClass, TEXT("ARTSPlayerController"), &Z_Registration_Info_UClass_ARTSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSPlayerController), 1972246909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerController_h_3159490353(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
