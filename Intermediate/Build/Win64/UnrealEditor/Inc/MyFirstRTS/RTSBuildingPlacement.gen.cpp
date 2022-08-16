// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSBuildingPlacement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBuildingPlacement() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingPlacement_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingPlacement();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARTSBuildingPlacement::StaticRegisterNativesARTSBuildingPlacement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSBuildingPlacement);
	UClass* Z_Construct_UClass_ARTSBuildingPlacement_NoRegister()
	{
		return ARTSBuildingPlacement::StaticClass();
	}
	struct Z_Construct_UClass_ARTSBuildingPlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Building;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSBuildingPlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingPlacement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class UMaterial;\n" },
		{ "IncludePath", "RTSBuildingPlacement.h" },
		{ "ModuleRelativePath", "Public/RTSBuildingPlacement.h" },
		{ "ToolTip", "class UMaterial;" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_Building_MetaData[] = {
		{ "Category", "RTSBuildingPlacement" },
		{ "ModuleRelativePath", "Public/RTSBuildingPlacement.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingPlacement, Building), Z_Construct_UClass_ARTSBuildingBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_Building_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_Building_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "RTSBuildingPlacement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSBuildingPlacement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingPlacement, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSBuildingPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_Building,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingPlacement_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSBuildingPlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSBuildingPlacement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSBuildingPlacement_Statics::ClassParams = {
		&ARTSBuildingPlacement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSBuildingPlacement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingPlacement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingPlacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingPlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSBuildingPlacement()
	{
		if (!Z_Registration_Info_UClass_ARTSBuildingPlacement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSBuildingPlacement.OuterSingleton, Z_Construct_UClass_ARTSBuildingPlacement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSBuildingPlacement.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSBuildingPlacement>()
	{
		return ARTSBuildingPlacement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSBuildingPlacement);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSBuildingPlacement, ARTSBuildingPlacement::StaticClass, TEXT("ARTSBuildingPlacement"), &Z_Registration_Info_UClass_ARTSBuildingPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSBuildingPlacement), 3616464549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_3673384001(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingPlacement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
