// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/Data/FResourceCostData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFResourceCostData() {}
// Cross Module References
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FResourceCostData();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResourceCostData;
class UScriptStruct* FResourceCostData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResourceCostData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResourceCostData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResourceCostData, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("ResourceCostData"));
	}
	return Z_Registration_Info_UScriptStruct_ResourceCostData.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FResourceCostData>()
{
	return FResourceCostData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResourceCostData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceCostData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/FResourceCostData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResourceCostData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResourceCostData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Resource_MetaData[] = {
		{ "Category", "ResourceCostData" },
		{ "ModuleRelativePath", "Public/Data/FResourceCostData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResourceCostData, Resource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Resource_MetaData)) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "ResourceCostData" },
		{ "ModuleRelativePath", "Public/Data/FResourceCostData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResourceCostData, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResourceCostData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceCostData_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResourceCostData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		&NewStructOps,
		"ResourceCostData",
		sizeof(FResourceCostData),
		alignof(FResourceCostData),
		Z_Construct_UScriptStruct_FResourceCostData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCostData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResourceCostData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceCostData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResourceCostData()
	{
		if (!Z_Registration_Info_UScriptStruct_ResourceCostData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResourceCostData.InnerSingleton, Z_Construct_UScriptStruct_FResourceCostData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResourceCostData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FResourceCostData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FResourceCostData_h_Statics::ScriptStructInfo[] = {
		{ FResourceCostData::StaticStruct, Z_Construct_UScriptStruct_FResourceCostData_Statics::NewStructOps, TEXT("ResourceCostData"), &Z_Registration_Info_UScriptStruct_ResourceCostData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResourceCostData), 313251783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FResourceCostData_h_318043336(TEXT("/Script/MyFirstRTS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FResourceCostData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FResourceCostData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
