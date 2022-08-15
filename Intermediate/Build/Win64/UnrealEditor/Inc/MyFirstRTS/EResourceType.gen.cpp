// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/EResourceType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEResourceType() {}
// Cross Module References
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceType;
	static UEnum* EResourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyFirstRTS_EResourceType, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("EResourceType"));
		}
		return Z_Registration_Info_UEnum_EResourceType.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UEnum* StaticEnum<EResourceType>()
	{
		return EResourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::Enumerators[] = {
		{ "Gold", (int64)Gold },
		{ "Wood", (int64)Wood },
		{ "END", (int64)END },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "END.DisplayName", "END" },
		{ "END.Name", "END" },
		{ "Gold.DisplayName", "Gold" },
		{ "Gold.Name", "Gold" },
		{ "ModuleRelativePath", "Public/EResourceType.h" },
		{ "Wood.DisplayName", "Wood" },
		{ "Wood.Name", "Wood" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		"EResourceType",
		"EResourceType",
		Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType()
	{
		if (!Z_Registration_Info_UEnum_EResourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceType.InnerSingleton, Z_Construct_UEnum_MyFirstRTS_EResourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResourceType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::EnumInfo[] = {
		{ EResourceType_StaticEnum, TEXT("EResourceType"), &Z_Registration_Info_UEnum_EResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2352757931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_2972357514(TEXT("/Script/MyFirstRTS"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
