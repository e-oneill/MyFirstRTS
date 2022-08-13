// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSBuildingBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBuildingBase() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSSelectable_NoRegister();
// End Cross Module References
	void ARTSBuildingBase::StaticRegisterNativesARTSBuildingBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSBuildingBase);
	UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister()
	{
		return ARTSBuildingBase::StaticClass();
	}
	struct Z_Construct_UClass_ARTSBuildingBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsResourceDropOff_MetaData[];
#endif
		static void NewProp_bIsResourceDropOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsResourceDropOff;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValidResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidResources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSBuildingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RTSBuildingBase.h" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_MetaData[] = {
		{ "Category", "Building Functions" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_SetBit(void* Obj)
	{
		((ARTSBuildingBase*)Obj)->bIsResourceDropOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff = { "bIsResourceDropOff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSBuildingBase), &Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_Inner = { "ValidResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 4157312209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_MetaData[] = {
		{ "Category", "Building Functions" },
		{ "EditCondition", "bIsResourceDropOff" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources = { "ValidResources", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingBase, ValidResources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_MetaData)) }; // 4157312209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSBuildingBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARTSBuildingBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URTSSelectable_NoRegister, (int32)VTABLE_OFFSET(ARTSBuildingBase, IRTSSelectable), false },  // 4127889431
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSBuildingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSBuildingBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSBuildingBase_Statics::ClassParams = {
		&ARTSBuildingBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSBuildingBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSBuildingBase()
	{
		if (!Z_Registration_Info_UClass_ARTSBuildingBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSBuildingBase.OuterSingleton, Z_Construct_UClass_ARTSBuildingBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSBuildingBase.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSBuildingBase>()
	{
		return ARTSBuildingBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSBuildingBase);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSBuildingBase, ARTSBuildingBase::StaticClass, TEXT("ARTSBuildingBase"), &Z_Registration_Info_UClass_ARTSBuildingBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSBuildingBase), 1782436223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_794186502(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
