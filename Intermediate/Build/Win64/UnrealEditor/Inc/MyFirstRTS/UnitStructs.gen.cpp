// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/Structs/UnitStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitStructs() {}
// Cross Module References
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EBotStatus();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EMissionType();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FMission();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EJobType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBotStatus;
	static UEnum* EBotStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBotStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBotStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyFirstRTS_EBotStatus, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("EBotStatus"));
		}
		return Z_Registration_Info_UEnum_EBotStatus.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UEnum* StaticEnum<EBotStatus>()
	{
		return EBotStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::Enumerators[] = {
		{ "Idle", (int64)Idle },
		{ "Moving", (int64)Moving },
		{ "MovingToExtract", (int64)MovingToExtract },
		{ "MovingToConstruct", (int64)MovingToConstruct },
		{ "MovingToDeposit", (int64)MovingToDeposit },
		{ "MovingToAttack", (int64)MovingToAttack },
		{ "Extracting", (int64)Extracting },
		{ "Depositing", (int64)Depositing },
		{ "Collecting", (int64)Collecting },
		{ "Constructing", (int64)Constructing },
		{ "Attacking", (int64)Attacking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::Enum_MetaDataParams[] = {
		{ "Attacking.Name", "Attacking" },
		{ "BlueprintType", "true" },
		{ "Collecting.Name", "Collecting" },
		{ "Comment", "/*\n** SECTION: AI MISSIONS\x09\n*/" },
		{ "Constructing.Name", "Constructing" },
		{ "Depositing.Name", "Depositing" },
		{ "Extracting.Name", "Extracting" },
		{ "Idle.Name", "Idle" },
		{ "ModuleRelativePath", "Public/Structs/UnitStructs.h" },
		{ "Moving.Name", "Moving" },
		{ "MovingToAttack.Name", "MovingToAttack" },
		{ "MovingToConstruct.Name", "MovingToConstruct" },
		{ "MovingToDeposit.Name", "MovingToDeposit" },
		{ "MovingToExtract.Name", "MovingToExtract" },
		{ "ToolTip", "** SECTION: AI MISSIONS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		"EBotStatus",
		"EBotStatus",
		Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MyFirstRTS_EBotStatus()
	{
		if (!Z_Registration_Info_UEnum_EBotStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBotStatus.InnerSingleton, Z_Construct_UEnum_MyFirstRTS_EBotStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBotStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMissionType;
	static UEnum* EMissionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMissionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMissionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyFirstRTS_EMissionType, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("EMissionType"));
		}
		return Z_Registration_Info_UEnum_EMissionType.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UEnum* StaticEnum<EMissionType>()
	{
		return EMissionType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::Enumerators[] = {
		{ "Nothing", (int64)Nothing },
		{ "FindFood", (int64)FindFood },
		{ "FindWater", (int64)FindWater },
		{ "AttendServices", (int64)AttendServices },
		{ "Sleep", (int64)Sleep },
		{ "Guard", (int64)Guard },
		{ "MoveToLocation", (int64)MoveToLocation },
		{ "AttackMoveToLocation", (int64)AttackMoveToLocation },
		{ "MoveToAndBuild", (int64)MoveToAndBuild },
		{ "ExtractAndDeposit", (int64)ExtractAndDeposit },
		{ "Transport", (int64)Transport },
		{ "AttackTarget", (int64)AttackTarget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::Enum_MetaDataParams[] = {
		{ "AttackMoveToLocation.Name", "AttackMoveToLocation" },
		{ "AttackTarget.Name", "AttackTarget" },
		{ "AttendServices.Name", "AttendServices" },
		{ "BlueprintType", "true" },
		{ "ExtractAndDeposit.Name", "ExtractAndDeposit" },
		{ "FindFood.Name", "FindFood" },
		{ "FindWater.Name", "FindWater" },
		{ "Guard.Name", "Guard" },
		{ "ModuleRelativePath", "Public/Structs/UnitStructs.h" },
		{ "MoveToAndBuild.Name", "MoveToAndBuild" },
		{ "MoveToLocation.Name", "MoveToLocation" },
		{ "Nothing.Name", "Nothing" },
		{ "Sleep.Name", "Sleep" },
		{ "Transport.Name", "Transport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		"EMissionType",
		"EMissionType",
		Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MyFirstRTS_EMissionType()
	{
		if (!Z_Registration_Info_UEnum_EMissionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMissionType.InnerSingleton, Z_Construct_UEnum_MyFirstRTS_EMissionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMissionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Mission;
class UScriptStruct* FMission::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Mission.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Mission.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMission, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("Mission"));
	}
	return Z_Registration_Info_UScriptStruct_Mission.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FMission>()
{
	return FMission::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMission_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MissionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissionTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MissionTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMission_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/UnitStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMission_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMission>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionType_MetaData[] = {
		{ "Category", "Mission" },
		{ "ModuleRelativePath", "Public/Structs/UnitStructs.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionType = { "MissionType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMission, MissionType), Z_Construct_UEnum_MyFirstRTS_EMissionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionType_MetaData)) }; // 2274243510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionTargetLocation_MetaData[] = {
		{ "Category", "Mission" },
		{ "ModuleRelativePath", "Public/Structs/UnitStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionTargetLocation = { "MissionTargetLocation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMission, MissionTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionTargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMission_Statics::NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Structs/UnitStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMission_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMission, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMission_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMission_Statics::NewProp_TargetActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMission_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMission_Statics::NewProp_MissionTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMission_Statics::NewProp_TargetActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMission_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		&NewStructOps,
		"Mission",
		sizeof(FMission),
		alignof(FMission),
		Z_Construct_UScriptStruct_FMission_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMission_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMission_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMission_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMission()
	{
		if (!Z_Registration_Info_UScriptStruct_Mission.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Mission.InnerSingleton, Z_Construct_UScriptStruct_FMission_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Mission.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJobType;
	static UEnum* EJobType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJobType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJobType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyFirstRTS_EJobType, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("EJobType"));
		}
		return Z_Registration_Info_UEnum_EJobType.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UEnum* StaticEnum<EJobType>()
	{
		return EJobType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyFirstRTS_EJobType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::Enumerators[] = {
		{ "Unemployed", (int64)Unemployed },
		{ "Builder", (int64)Builder },
		{ "Woodcutter", (int64)Woodcutter },
		{ "Miner", (int64)Miner },
		{ "Farmer", (int64)Farmer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Builder.Name", "Builder" },
		{ "Comment", "/*\n** SECTION: JOBS\n*/" },
		{ "Farmer.Name", "Farmer" },
		{ "Miner.Name", "Miner" },
		{ "ModuleRelativePath", "Public/Structs/UnitStructs.h" },
		{ "ToolTip", "** SECTION: JOBS" },
		{ "Unemployed.Name", "Unemployed" },
		{ "Woodcutter.Name", "Woodcutter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		"EJobType",
		"EJobType",
		Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MyFirstRTS_EJobType()
	{
		if (!Z_Registration_Info_UEnum_EJobType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJobType.InnerSingleton, Z_Construct_UEnum_MyFirstRTS_EJobType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJobType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_Statics::EnumInfo[] = {
		{ EBotStatus_StaticEnum, TEXT("EBotStatus"), &Z_Registration_Info_UEnum_EBotStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2675024659U) },
		{ EMissionType_StaticEnum, TEXT("EMissionType"), &Z_Registration_Info_UEnum_EMissionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2274243510U) },
		{ EJobType_StaticEnum, TEXT("EJobType"), &Z_Registration_Info_UEnum_EJobType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 796507167U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_Statics::ScriptStructInfo[] = {
		{ FMission::StaticStruct, Z_Construct_UScriptStruct_FMission_Statics::NewStructOps, TEXT("Mission"), &Z_Registration_Info_UScriptStruct_Mission, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMission), 295345503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_912456123(TEXT("/Script/MyFirstRTS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
