// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSCharacterBase() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSCharacterBase_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUnitComponent_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSSelectable_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderable_NoRegister();
// End Cross Module References
	void ARTSCharacterBase::StaticRegisterNativesARTSCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSCharacterBase);
	UClass* Z_Construct_UClass_ARTSCharacterBase_NoRegister()
	{
		return ARTSCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ARTSCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanExtractResource_MetaData[];
#endif
		static void NewProp_bCanExtractResource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanExtractResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtractionCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionRate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExtractionRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToExtract_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToExtract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedResource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CarriedResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResourceCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourcesCarried_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResourcesCarried;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSCharacterBase.h" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_SetBit(void* Obj)
	{
		((ARTSCharacterBase*)Obj)->bCanExtractResource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource = { "bCanExtractResource", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSCharacterBase), &Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown = { "ExtractionCooldown", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ExtractionCooldown), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate = { "ExtractionRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ExtractionRate), nullptr, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract = { "TimeToExtract", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, TimeToExtract), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource = { "CarriedResource", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, CarriedResource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource_MetaData)) }; // 2557795391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity = { "ResourceCapacity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ResourceCapacity), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried = { "ResourcesCarried", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ResourcesCarried), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//TArray<TEnumAsByte<ResourceType>> ExtractableResources;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nTArray<TEnumAsByte<ResourceType>> ExtractableResources;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent = { "UnitComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, UnitComponent), Z_Construct_UClass_URTSUnitComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARTSCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URTSSelectable_NoRegister, (int32)VTABLE_OFFSET(ARTSCharacterBase, IRTSSelectable), false },  // 4127889431
			{ Z_Construct_UClass_URTSOrderable_NoRegister, (int32)VTABLE_OFFSET(ARTSCharacterBase, IRTSOrderable), false },  // 2507338803
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSCharacterBase_Statics::ClassParams = {
		&ARTSCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSCharacterBase()
	{
		if (!Z_Registration_Info_UClass_ARTSCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSCharacterBase.OuterSingleton, Z_Construct_UClass_ARTSCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSCharacterBase.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSCharacterBase>()
	{
		return ARTSCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSCharacterBase);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSCharacterBase, ARTSCharacterBase::StaticClass, TEXT("ARTSCharacterBase"), &Z_Registration_Info_UClass_ARTSCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSCharacterBase), 309949043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_3195331572(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
