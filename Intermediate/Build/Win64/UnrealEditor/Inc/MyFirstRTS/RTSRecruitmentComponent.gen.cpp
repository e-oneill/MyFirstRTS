// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSRecruitmentComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSRecruitmentComponent() {}
// Cross Module References
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FUnit();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSCharacterBase_NoRegister();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FUnitTrainingRecord();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSRecruitmentComponent_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSRecruitmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Unit;
class UScriptStruct* FUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Unit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Unit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnit, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("Unit"));
	}
	return Z_Registration_Info_UScriptStruct_Unit.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FUnit>()
{
	return FUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UnitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToTrain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToTrain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnit_Statics::NewProp_UnitCharacter_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUnit_Statics::NewProp_UnitCharacter = { "UnitCharacter", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnit, UnitCharacter), Z_Construct_UClass_ARTSCharacterBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnit_Statics::NewProp_UnitCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnit_Statics::NewProp_UnitCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnit_Statics::NewProp_TimeToTrain_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnit_Statics::NewProp_TimeToTrain = { "TimeToTrain", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnit, TimeToTrain), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnit_Statics::NewProp_TimeToTrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnit_Statics::NewProp_TimeToTrain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnit_Statics::NewProp_UnitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnit_Statics::NewProp_TimeToTrain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		&NewStructOps,
		"Unit",
		sizeof(FUnit),
		alignof(FUnit),
		Z_Construct_UScriptStruct_FUnit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_Unit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Unit.InnerSingleton, Z_Construct_UScriptStruct_FUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Unit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnitTrainingRecord;
class UScriptStruct* FUnitTrainingRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnitTrainingRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnitTrainingRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitTrainingRecord, Z_Construct_UPackage__Script_MyFirstRTS(), TEXT("UnitTrainingRecord"));
	}
	return Z_Registration_Info_UScriptStruct_UnitTrainingRecord.OuterSingleton;
}
template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<FUnitTrainingRecord>()
{
	return FUnitTrainingRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Unit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainingProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrainingProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitTrainingRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_Unit_MetaData[] = {
		{ "Category", "UnitTrainingRecord" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnitTrainingRecord, Unit), Z_Construct_UScriptStruct_FUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_Unit_MetaData)) }; // 2788278600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_TrainingProgress_MetaData[] = {
		{ "Category", "UnitTrainingRecord" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_TrainingProgress = { "TrainingProgress", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnitTrainingRecord, TrainingProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_TrainingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_TrainingProgress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_Unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewProp_TrainingProgress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
		nullptr,
		&NewStructOps,
		"UnitTrainingRecord",
		sizeof(FUnitTrainingRecord),
		alignof(FUnitTrainingRecord),
		Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnitTrainingRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_UnitTrainingRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnitTrainingRecord.InnerSingleton, Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UnitTrainingRecord.InnerSingleton;
	}
	DEFINE_FUNCTION(URTSRecruitmentComponent::execStartTrainingUnit)
	{
		P_GET_STRUCT(FUnit,Z_Param_Unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUnitTrainingRecord*)Z_Param__Result=P_THIS->StartTrainingUnit(Z_Param_Unit);
		P_NATIVE_END;
	}
	static FName NAME_URTSRecruitmentComponent_TrainingComplete = FName(TEXT("TrainingComplete"));
	void URTSRecruitmentComponent::TrainingComplete(int32 index)
	{
		RTSRecruitmentComponent_eventTrainingComplete_Parms Parms;
		Parms.index=index;
		ProcessEvent(FindFunctionChecked(NAME_URTSRecruitmentComponent_TrainingComplete),&Parms);
	}
	void URTSRecruitmentComponent::StaticRegisterNativesURTSRecruitmentComponent()
	{
		UClass* Class = URTSRecruitmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTrainingUnit", &URTSRecruitmentComponent::execStartTrainingUnit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics
	{
		struct RTSRecruitmentComponent_eventStartTrainingUnit_Parms
		{
			FUnit Unit;
			FUnitTrainingRecord ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Unit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSRecruitmentComponent_eventStartTrainingUnit_Parms, Unit), Z_Construct_UScriptStruct_FUnit, METADATA_PARAMS(nullptr, 0) }; // 2788278600
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSRecruitmentComponent_eventStartTrainingUnit_Parms, ReturnValue), Z_Construct_UScriptStruct_FUnitTrainingRecord, METADATA_PARAMS(nullptr, 0) }; // 570935314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::NewProp_Unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSRecruitmentComponent, nullptr, "StartTrainingUnit", nullptr, nullptr, sizeof(Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::RTSRecruitmentComponent_eventStartTrainingUnit_Parms), Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSRecruitmentComponent_eventTrainingComplete_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSRecruitmentComponent, nullptr, "TrainingComplete", nullptr, nullptr, sizeof(RTSRecruitmentComponent_eventTrainingComplete_Parms), Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSRecruitmentComponent);
	UClass* Z_Construct_UClass_URTSRecruitmentComponent_NoRegister()
	{
		return URTSRecruitmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_URTSRecruitmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParallelTrainingCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParallelTrainingCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecruitableUnits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecruitableUnits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecruitableUnits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainingQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainingQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrainingQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSRecruitmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSRecruitmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSRecruitmentComponent_StartTrainingUnit, "StartTrainingUnit" }, // 140555540
		{ &Z_Construct_UFunction_URTSRecruitmentComponent_TrainingComplete, "TrainingComplete" }, // 3359443853
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSRecruitmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RTSRecruitmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_SpawnTag_MetaData[] = {
		{ "Category", "RTSRecruitmentComponent" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_SpawnTag = { "SpawnTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSRecruitmentComponent, SpawnTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_SpawnTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_SpawnTag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_MoveTag_MetaData[] = {
		{ "Category", "RTSRecruitmentComponent" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_MoveTag = { "MoveTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSRecruitmentComponent, MoveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_MoveTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_MoveTag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_ParallelTrainingCount_MetaData[] = {
		{ "Category", "RTSRecruitmentComponent" },
		{ "Comment", "//How many units this recruiter can train at once\n" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
		{ "ToolTip", "How many units this recruiter can train at once" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_ParallelTrainingCount = { "ParallelTrainingCount", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSRecruitmentComponent, ParallelTrainingCount), METADATA_PARAMS(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_ParallelTrainingCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_ParallelTrainingCount_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_RecruitableUnits_Inner = { "RecruitableUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnit, METADATA_PARAMS(nullptr, 0) }; // 2788278600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_RecruitableUnits_MetaData[] = {
		{ "Category", "RTSRecruitmentComponent" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_RecruitableUnits = { "RecruitableUnits", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSRecruitmentComponent, RecruitableUnits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_RecruitableUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_RecruitableUnits_MetaData)) }; // 2788278600
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_TrainingQueue_Inner = { "TrainingQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnitTrainingRecord, METADATA_PARAMS(nullptr, 0) }; // 570935314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_TrainingQueue_MetaData[] = {
		{ "Category", "RTSRecruitmentComponent" },
		{ "ModuleRelativePath", "Public/RTSRecruitmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_TrainingQueue = { "TrainingQueue", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSRecruitmentComponent, TrainingQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_TrainingQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_TrainingQueue_MetaData)) }; // 570935314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSRecruitmentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_SpawnTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_MoveTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_ParallelTrainingCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_RecruitableUnits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_RecruitableUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_TrainingQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSRecruitmentComponent_Statics::NewProp_TrainingQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSRecruitmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSRecruitmentComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSRecruitmentComponent_Statics::ClassParams = {
		&URTSRecruitmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URTSRecruitmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URTSRecruitmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URTSRecruitmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSRecruitmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSRecruitmentComponent()
	{
		if (!Z_Registration_Info_UClass_URTSRecruitmentComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSRecruitmentComponent.OuterSingleton, Z_Construct_UClass_URTSRecruitmentComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSRecruitmentComponent.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSRecruitmentComponent>()
	{
		return URTSRecruitmentComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSRecruitmentComponent);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_Statics::ScriptStructInfo[] = {
		{ FUnit::StaticStruct, Z_Construct_UScriptStruct_FUnit_Statics::NewStructOps, TEXT("Unit"), &Z_Registration_Info_UScriptStruct_Unit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnit), 2788278600U) },
		{ FUnitTrainingRecord::StaticStruct, Z_Construct_UScriptStruct_FUnitTrainingRecord_Statics::NewStructOps, TEXT("UnitTrainingRecord"), &Z_Registration_Info_UScriptStruct_UnitTrainingRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitTrainingRecord), 570935314U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSRecruitmentComponent, URTSRecruitmentComponent::StaticClass, TEXT("URTSRecruitmentComponent"), &Z_Registration_Info_UClass_URTSRecruitmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSRecruitmentComponent), 2557161064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_2826181951(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSRecruitmentComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
