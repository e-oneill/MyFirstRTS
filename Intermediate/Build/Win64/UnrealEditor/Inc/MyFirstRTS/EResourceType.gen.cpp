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
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FResourceCount();
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResourceCount;
class UScriptStruct* FResourceCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResourceCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResourceCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResourceCount, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("ResourceCount"));
	}
	return Z_Registration_Info_UScriptStruct_ResourceCount.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FResourceCount>()
{
	return FResourceCount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResourceCount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Resource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceCount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EResourceType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResourceCount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResourceCount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Resource_MetaData[] = {
		{ "Category", "ResourceCount" },
		{ "ModuleRelativePath", "Public/EResourceType.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResourceCount, Resource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Resource_MetaData)) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "ResourceCount" },
		{ "ModuleRelativePath", "Public/EResourceType.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResourceCount, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResourceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceCount_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResourceCount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		&NewStructOps,
		"ResourceCount",
		sizeof(FResourceCount),
		alignof(FResourceCount),
		Z_Construct_UScriptStruct_FResourceCount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceCount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResourceCount()
	{
		if (!Z_Registration_Info_UScriptStruct_ResourceCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResourceCount.InnerSingleton, Z_Construct_UScriptStruct_FResourceCount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResourceCount.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::EnumInfo[] = {
		{ EResourceType_StaticEnum, TEXT("EResourceType"), &Z_Registration_Info_UEnum_EResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2352757931U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::ScriptStructInfo[] = {
		{ FResourceCount::StaticStruct, Z_Construct_UScriptStruct_FResourceCount_Statics::NewStructOps, TEXT("ResourceCount"), &Z_Registration_Info_UScriptStruct_ResourceCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResourceCount), 895690614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_569711183(TEXT("/Script/MyFirstRTS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_EResourceType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
