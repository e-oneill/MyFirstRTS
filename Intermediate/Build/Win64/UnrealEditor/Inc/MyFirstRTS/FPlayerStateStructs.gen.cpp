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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateResource, Resource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewProp_Resource_MetaData)) }; // 4157312209
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
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics::ScriptStructInfo[] = {
		{ FPlayerStateResource::StaticStruct, Z_Construct_UScriptStruct_FPlayerStateResource_Statics::NewStructOps, TEXT("PlayerStateResource"), &Z_Registration_Info_UScriptStruct_PlayerStateResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStateResource), 217924941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_3251497604(TEXT("/Script/MyFirstRTS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_FPlayerStateStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
