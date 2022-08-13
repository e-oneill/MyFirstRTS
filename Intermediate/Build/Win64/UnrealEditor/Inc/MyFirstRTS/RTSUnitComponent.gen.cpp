// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSUnitComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSUnitComponent() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUnitComponent_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUnitComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	void URTSUnitComponent::StaticRegisterNativesURTSUnitComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSUnitComponent);
	UClass* Z_Construct_UClass_URTSUnitComponent_NoRegister()
	{
		return URTSUnitComponent::StaticClass();
	}
	struct Z_Construct_UClass_URTSUnitComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSUnitComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUnitComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RTSUnitComponent.h" },
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSUnitComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSUnitComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSUnitComponent_Statics::ClassParams = {
		&URTSUnitComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URTSUnitComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUnitComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSUnitComponent()
	{
		if (!Z_Registration_Info_UClass_URTSUnitComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSUnitComponent.OuterSingleton, Z_Construct_UClass_URTSUnitComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSUnitComponent.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSUnitComponent>()
	{
		return URTSUnitComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSUnitComponent);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSUnitComponent, URTSUnitComponent::StaticClass, TEXT("URTSUnitComponent"), &Z_Registration_Info_UClass_URTSUnitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSUnitComponent), 1878490607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_239739369(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
