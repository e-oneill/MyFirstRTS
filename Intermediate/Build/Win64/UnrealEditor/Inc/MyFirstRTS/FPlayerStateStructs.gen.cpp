// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/Structs/FPlayerStateStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPlayerStateStructs() {}
// Cross Module References
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStateResource();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecord();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStateResource;
class UScriptStruct* FPlayerStateResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStateResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStateResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStateResource, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("PlayerStateResource"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStateResource.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FPlayerStateResource>()
{
	return FPlayerStateResource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerStateResource_Statics
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateResource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStateResource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource_MetaData[] = {
		{ "Category", "PlayerStateResource" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateResource, Resource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource_MetaData)) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "PlayerStateResource" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateResource, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStateResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStateResource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		&NewStructOps,
		"PlayerStateResource",
		sizeof(FPlayerStateResource),
		alignof(FPlayerStateResource),
		Z_Construct_UScriptStruct_FPlayerStateResource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStateResource()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerStateResource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStateResource.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStateResource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerStateResource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerRecord;
class UScriptStruct* FPlayerRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRecord, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("PlayerRecord"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerRecord.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FPlayerRecord>()
{
	return FPlayerRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNum_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamNum_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TeamNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerResources;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Buildings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buildings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buildings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerNum_MetaData[] = {
		{ "Category", "PlayerRecord" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecord, PlayerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_TeamNum_MetaData[] = {
		{ "Category", "PlayerRecord" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_TeamNum = { "TeamNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecord, TeamNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_TeamNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_TeamNum_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerResources_Inner = { "PlayerResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerStateResource, METADATA_PARAMS(nullptr, 0) }; // 3117980838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerResources_MetaData[] = {
		{ "Category", "PlayerRecord" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerResources = { "PlayerResources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecord, PlayerResources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerResources_MetaData)) }; // 3117980838
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_Buildings_Inner = { "Buildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARTSBuildingBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_Buildings_MetaData[] = {
		{ "Category", "PlayerRecord" },
		{ "ModuleRelativePath", "Public/Structs/FPlayerStateStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_Buildings = { "Buildings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecord, Buildings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_Buildings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_Buildings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_TeamNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_PlayerResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_Buildings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewProp_Buildings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		&NewStructOps,
		"PlayerRecord",
		sizeof(FPlayerRecord),
		alignof(FPlayerRecord),
		Z_Construct_UScriptStruct_FPlayerRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerRecord.InnerSingleton, Z_Construct_UScriptStruct_FPlayerRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerRecord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics::ScriptStructInfo[] = {
		{ FPlayerStateResource::StaticStruct, Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewStructOps, TEXT("PlayerStateResource"), &Z_Registration_Info_UScriptStruct_PlayerStateResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStateResource), 3117980838U) },
		{ FPlayerRecord::StaticStruct, Z_Construct_UScriptStruct_FPlayerRecord_Statics::NewStructOps, TEXT("PlayerRecord"), &Z_Registration_Info_UScriptStruct_PlayerRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerRecord), 3161735594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_2643723001(TEXT("/Script/MyFirstRTS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
