// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/Data/FBuildingData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBuildingData() {}
// Cross Module References
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingData();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingPlacement_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FResourceCostData();
// End Cross Module References

static_assert(std::is_polymorphic<FBuildingData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBuildingData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildingData;
class UScriptStruct* FBuildingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingData, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("BuildingData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildingData.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FBuildingData>()
{
	return FBuildingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingPlacementActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingPlacementActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstructionCosts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionCosts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstructionCosts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/FBuildingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingPlacementActor_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Public/Data/FBuildingData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingPlacementActor = { "BuildingPlacementActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingData, BuildingPlacementActor), Z_Construct_UClass_ARTSBuildingPlacement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingPlacementActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingPlacementActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingActor_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Public/Data/FBuildingData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingActor = { "BuildingActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingData, BuildingActor), Z_Construct_UClass_ARTSBuildingBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingActor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCosts_Inner = { "ConstructionCosts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResourceCostData, METADATA_PARAMS(nullptr, 0) }; // 313251783
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCosts_MetaData[] = {
		{ "Category", "BuildingData" },
		{ "ModuleRelativePath", "Public/Data/FBuildingData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCosts = { "ConstructionCosts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingData, ConstructionCosts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCosts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCosts_MetaData)) }; // 313251783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingPlacementActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCosts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCosts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BuildingData",
		sizeof(FBuildingData),
		alignof(FBuildingData),
		Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildingData()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildingData.InnerSingleton, Z_Construct_UScriptStruct_FBuildingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildingData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FBuildingData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FBuildingData_h_Statics::ScriptStructInfo[] = {
		{ FBuildingData::StaticStruct, Z_Construct_UScriptStruct_FBuildingData_Statics::NewStructOps, TEXT("BuildingData"), &Z_Registration_Info_UScriptStruct_BuildingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingData), 458041330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FBuildingData_h_3514970939(TEXT("/Script/MyFirstRTS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FBuildingData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Data_FBuildingData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
