// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSRallyPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSRallyPoint() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSRallyPoint_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSRallyPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void ARTSRallyPoint::StaticRegisterNativesARTSRallyPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSRallyPoint);
	UClass* Z_Construct_UClass_ARTSRallyPoint_NoRegister()
	{
		return ARTSRallyPoint::StaticClass();
	}
	struct Z_Construct_UClass_ARTSRallyPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RallyPointTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RallyPointTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSRallyPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSRallyPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RTSRallyPoint.h" },
		{ "ModuleRelativePath", "Public/RTSRallyPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSRallyPoint_Statics::NewProp_RallyPointTag_MetaData[] = {
		{ "Category", "RTSRallyPoint" },
		{ "ModuleRelativePath", "Public/RTSRallyPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSRallyPoint_Statics::NewProp_RallyPointTag = { "RallyPointTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSRallyPoint, RallyPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ARTSRallyPoint_Statics::NewProp_RallyPointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSRallyPoint_Statics::NewProp_RallyPointTag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSRallyPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSRallyPoint_Statics::NewProp_RallyPointTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSRallyPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSRallyPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSRallyPoint_Statics::ClassParams = {
		&ARTSRallyPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSRallyPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSRallyPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSRallyPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSRallyPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSRallyPoint()
	{
		if (!Z_Registration_Info_UClass_ARTSRallyPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSRallyPoint.OuterSingleton, Z_Construct_UClass_ARTSRallyPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSRallyPoint.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSRallyPoint>()
	{
		return ARTSRallyPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSRallyPoint);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRallyPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRallyPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSRallyPoint, ARTSRallyPoint::StaticClass, TEXT("ARTSRallyPoint"), &Z_Registration_Info_UClass_ARTSRallyPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSRallyPoint), 4212612763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRallyPoint_h_1632669140(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRallyPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRallyPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
