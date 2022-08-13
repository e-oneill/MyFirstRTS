// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSResource() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSResource_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSResource();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
// End Cross Module References
	void ARTSResource::StaticRegisterNativesARTSResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSResource);
	UClass* Z_Construct_UClass_ARTSResource_NoRegister()
	{
		return ARTSResource::StaticClass();
	}
	struct Z_Construct_UClass_ARTSResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesCanBeExploited_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimesCanBeExploited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResourceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSResource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RTSResource.h" },
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSResource_Statics::NewProp_TimesCanBeExploited_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSResource_Statics::NewProp_TimesCanBeExploited = { "TimesCanBeExploited", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSResource, TimesCanBeExploited), nullptr, METADATA_PARAMS(Z_Construct_UClass_ARTSResource_Statics::NewProp_TimesCanBeExploited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::NewProp_TimesCanBeExploited_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSResource_Statics::NewProp_ResourceValue_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSResource_Statics::NewProp_ResourceValue = { "ResourceValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSResource, ResourceValue), METADATA_PARAMS(Z_Construct_UClass_ARTSResource_Statics::NewProp_ResourceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::NewProp_ResourceValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSResource_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSResource_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSResource, Type), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UClass_ARTSResource_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::NewProp_Type_MetaData)) }; // 4157312209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSResource_Statics::NewProp_TimesCanBeExploited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSResource_Statics::NewProp_ResourceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSResource_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSResource_Statics::ClassParams = {
		&ARTSResource::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSResource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSResource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSResource()
	{
		if (!Z_Registration_Info_UClass_ARTSResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSResource.OuterSingleton, Z_Construct_UClass_ARTSResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSResource.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSResource>()
	{
		return ARTSResource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSResource);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSResource, ARTSResource::StaticClass, TEXT("ARTSResource"), &Z_Registration_Info_UClass_ARTSResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSResource), 565515018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_2476476619(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
