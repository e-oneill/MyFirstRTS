// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSGameMode() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSGameMode_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	void ARTSGameMode::StaticRegisterNativesARTSGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSGameMode);
	UClass* Z_Construct_UClass_ARTSGameMode_NoRegister()
	{
		return ARTSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARTSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Year;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hour_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Hour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTSGameMode.h" },
		{ "ModuleRelativePath", "Public/RTSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSGameMode_Statics::NewProp_DayLength_MetaData[] = {
		{ "Category", "RTSGameMode" },
		{ "ModuleRelativePath", "Public/RTSGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSGameMode_Statics::NewProp_DayLength = { "DayLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSGameMode, DayLength), METADATA_PARAMS(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_DayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_DayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Year_MetaData[] = {
		{ "Category", "RTSGameMode" },
		{ "ModuleRelativePath", "Public/RTSGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSGameMode, Year), METADATA_PARAMS(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Year_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Year_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Month_MetaData[] = {
		{ "Category", "RTSGameMode" },
		{ "ModuleRelativePath", "Public/RTSGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSGameMode, Month), METADATA_PARAMS(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Month_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Month_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Day_MetaData[] = {
		{ "Category", "RTSGameMode" },
		{ "ModuleRelativePath", "Public/RTSGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSGameMode, Day), METADATA_PARAMS(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Day_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Day_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Hour_MetaData[] = {
		{ "Category", "RTSGameMode" },
		{ "ModuleRelativePath", "Public/RTSGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSGameMode, Hour), METADATA_PARAMS(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Hour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Hour_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSGameMode_Statics::NewProp_DayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Year,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Month,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSGameMode_Statics::NewProp_Hour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSGameMode_Statics::ClassParams = {
		&ARTSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARTSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSGameMode()
	{
		if (!Z_Registration_Info_UClass_ARTSGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSGameMode.OuterSingleton, Z_Construct_UClass_ARTSGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSGameMode.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSGameMode>()
	{
		return ARTSGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSGameMode);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSGameMode, ARTSGameMode::StaticClass, TEXT("ARTSGameMode"), &Z_Registration_Info_UClass_ARTSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSGameMode), 2034230801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameMode_h_1247441246(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
