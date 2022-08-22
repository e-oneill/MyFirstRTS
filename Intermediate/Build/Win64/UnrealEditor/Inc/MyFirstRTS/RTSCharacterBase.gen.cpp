// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSCharacterBase() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSCharacterBase_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderTargetComponent_NoRegister();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EBotStatus();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUtilityAIBrain_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAttributeComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FMission();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUnitComponent_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSSelectable_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARTSCharacterBase::execAIStatusTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AIStatusTick_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacterBase::execFinishConstructBuilding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishConstructBuilding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacterBase::execMoveToBuildingAndConstruct)
	{
		P_GET_OBJECT(ARTSBuildingBase,Z_Param_TargetBuilding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToBuildingAndConstruct(Z_Param_TargetBuilding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacterBase::execMoveToAndDepositResources)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToAndDepositResources(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacterBase::execFinishExploitResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishExploitResource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacterBase::execMoveToResourceAndExploit)
	{
		P_GET_OBJECT(URTSOrderTargetComponent,Z_Param_TargetResource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToResourceAndExploit(Z_Param_TargetResource);
		P_NATIVE_END;
	}
	static FName NAME_ARTSCharacterBase_AIStatusTick = FName(TEXT("AIStatusTick"));
	void ARTSCharacterBase::AIStatusTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARTSCharacterBase_AIStatusTick),NULL);
	}
	void ARTSCharacterBase::StaticRegisterNativesARTSCharacterBase()
	{
		UClass* Class = ARTSCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIStatusTick", &ARTSCharacterBase::execAIStatusTick },
			{ "FinishConstructBuilding", &ARTSCharacterBase::execFinishConstructBuilding },
			{ "FinishExploitResource", &ARTSCharacterBase::execFinishExploitResource },
			{ "MoveToAndDepositResources", &ARTSCharacterBase::execMoveToAndDepositResources },
			{ "MoveToBuildingAndConstruct", &ARTSCharacterBase::execMoveToBuildingAndConstruct },
			{ "MoveToResourceAndExploit", &ARTSCharacterBase::execMoveToResourceAndExploit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterBase, nullptr, "AIStatusTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterBase, nullptr, "FinishConstructBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterBase, nullptr, "FinishExploitResource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics
	{
		struct RTSCharacterBase_eventMoveToAndDepositResources_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSCharacterBase_eventMoveToAndDepositResources_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterBase, nullptr, "MoveToAndDepositResources", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::RTSCharacterBase_eventMoveToAndDepositResources_Parms), Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics
	{
		struct RTSCharacterBase_eventMoveToBuildingAndConstruct_Parms
		{
			ARTSBuildingBase* TargetBuilding;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetBuilding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::NewProp_TargetBuilding = { "TargetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSCharacterBase_eventMoveToBuildingAndConstruct_Parms, TargetBuilding), Z_Construct_UClass_ARTSBuildingBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::NewProp_TargetBuilding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterBase, nullptr, "MoveToBuildingAndConstruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::RTSCharacterBase_eventMoveToBuildingAndConstruct_Parms), Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics
	{
		struct RTSCharacterBase_eventMoveToResourceAndExploit_Parms
		{
			URTSOrderTargetComponent* TargetResource;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetResource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetResource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::NewProp_TargetResource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::NewProp_TargetResource = { "TargetResource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSCharacterBase_eventMoveToResourceAndExploit_Parms, TargetResource), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::NewProp_TargetResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::NewProp_TargetResource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::NewProp_TargetResource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterBase, nullptr, "MoveToResourceAndExploit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::RTSCharacterBase_eventMoveToResourceAndExploit_Parms), Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSCharacterBase);
	UClass* Z_Construct_UClass_ARTSCharacterBase_NoRegister()
	{
		return ARTSCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ARTSCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderTargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderTargetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStatus_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBrain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OwningPlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderPreviewMarker_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OrderPreviewMarker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mission_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExtracting_MetaData[];
#endif
		static void NewProp_bIsExtracting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExtracting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDepositing_MetaData[];
#endif
		static void NewProp_bIsDepositing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDepositing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConstructing_MetaData[];
#endif
		static void NewProp_bIsConstructing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstructing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExploitedResource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastExploitedResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanExtractResource_MetaData[];
#endif
		static void NewProp_bCanExtractResource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanExtractResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtractionCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtractionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionRate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExtractionRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToExtract_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToExtract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedResource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CarriedResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResourceCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourcesCarried_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResourcesCarried;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanConstruct_MetaData[];
#endif
		static void NewProp_bCanConstruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanConstruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstructRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstructRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstructTickCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstructTickCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AITickDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AITickDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSCharacterBase_AIStatusTick, "AIStatusTick" }, // 2965599611
		{ &Z_Construct_UFunction_ARTSCharacterBase_FinishConstructBuilding, "FinishConstructBuilding" }, // 767143555
		{ &Z_Construct_UFunction_ARTSCharacterBase_FinishExploitResource, "FinishExploitResource" }, // 3313052311
		{ &Z_Construct_UFunction_ARTSCharacterBase_MoveToAndDepositResources, "MoveToAndDepositResources" }, // 3860171208
		{ &Z_Construct_UFunction_ARTSCharacterBase_MoveToBuildingAndConstruct, "MoveToBuildingAndConstruct" }, // 933289456
		{ &Z_Construct_UFunction_ARTSCharacterBase_MoveToResourceAndExploit, "MoveToResourceAndExploit" }, // 828054073
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSCharacterBase.h" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTargetComponent_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTargetComponent = { "OrderTargetComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, OrderTargetComponent), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTargetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CharacterStatus_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CharacterStatus = { "CharacterStatus", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, CharacterStatus), Z_Construct_UEnum_MyFirstRTS_EBotStatus, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CharacterStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CharacterStatus_MetaData)) }; // 2675024659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_MyBrain_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_MyBrain = { "MyBrain", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, MyBrain), Z_Construct_UClass_URTSUtilityAIBrain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_MyBrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_MyBrain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OwningPlayerId_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OwningPlayerId = { "OwningPlayerId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, OwningPlayerId), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OwningPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OwningPlayerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AttributeComponent_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AttributeComponent = { "AttributeComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, AttributeComponent), Z_Construct_UClass_URTSAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AttributeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AttributeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderPreviewMarker_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderPreviewMarker = { "OrderPreviewMarker", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, OrderPreviewMarker), Z_Construct_UClass_UStaticMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderPreviewMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderPreviewMarker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_Mission_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_Mission = { "Mission", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, Mission), Z_Construct_UScriptStruct_FMission, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_Mission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_Mission_MetaData)) }; // 295345503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTarget_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTarget = { "OrderTarget", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, OrderTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "Comment", "//the actor that the character is moving to\n" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
		{ "ToolTip", "the actor that the character is moving to" },
	};
#endif
	void Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((ARTSCharacterBase*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSCharacterBase), &Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsExtracting_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsExtracting_SetBit(void* Obj)
	{
		((ARTSCharacterBase*)Obj)->bIsExtracting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsExtracting = { "bIsExtracting", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSCharacterBase), &Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsExtracting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsExtracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsExtracting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsDepositing_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsDepositing_SetBit(void* Obj)
	{
		((ARTSCharacterBase*)Obj)->bIsDepositing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsDepositing = { "bIsDepositing", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSCharacterBase), &Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsDepositing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsDepositing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsDepositing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsConstructing_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsConstructing_SetBit(void* Obj)
	{
		((ARTSCharacterBase*)Obj)->bIsConstructing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsConstructing = { "bIsConstructing", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSCharacterBase), &Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsConstructing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsConstructing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsConstructing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_LastExploitedResource_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_LastExploitedResource = { "LastExploitedResource", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, LastExploitedResource), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_LastExploitedResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_LastExploitedResource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_SetBit(void* Obj)
	{
		((ARTSCharacterBase*)Obj)->bCanExtractResource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource = { "bCanExtractResource", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSCharacterBase), &Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown = { "ExtractionCooldown", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ExtractionCooldown), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionDistance_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionDistance = { "ExtractionDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ExtractionDistance), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate = { "ExtractionRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ExtractionRate), nullptr, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract = { "TimeToExtract", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, TimeToExtract), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource = { "CarriedResource", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, CarriedResource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource_MetaData)) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity = { "ResourceCapacity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ResourceCapacity), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanExtractResource" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried = { "ResourcesCarried", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ResourcesCarried), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanConstruct_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanConstruct_SetBit(void* Obj)
	{
		((ARTSCharacterBase*)Obj)->bCanConstruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanConstruct = { "bCanConstruct", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSCharacterBase), &Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanConstruct_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanConstruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanConstruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructRate_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanConstruct" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructRate = { "ConstructRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ConstructRate), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructTickCooldown_MetaData[] = {
		{ "Category", "Unit Actions" },
		{ "EditCondition", "bCanConstruct" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructTickCooldown = { "ConstructTickCooldown", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, ConstructTickCooldown), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructTickCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructTickCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//TArray<TEnumAsByte<ResourceType>> ExtractableResources;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nTArray<TEnumAsByte<ResourceType>> ExtractableResources;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent = { "UnitComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, UnitComponent), Z_Construct_UClass_URTSUnitComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AITickDuration_MetaData[] = {
		{ "Category", "RTSCharacterBase" },
		{ "Comment", "//The time between AI updates\n" },
		{ "ModuleRelativePath", "Public/RTSCharacterBase.h" },
		{ "ToolTip", "The time between AI updates" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AITickDuration = { "AITickDuration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacterBase, AITickDuration), METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AITickDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AITickDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CharacterStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_MyBrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OwningPlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AttributeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderPreviewMarker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_Mission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_OrderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsExtracting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsDepositing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bIsConstructing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_LastExploitedResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanExtractResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ExtractionRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_TimeToExtract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_CarriedResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourceCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ResourcesCarried,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_bCanConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_ConstructTickCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_UnitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterBase_Statics::NewProp_AITickDuration,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARTSCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URTSSelectable_NoRegister, (int32)VTABLE_OFFSET(ARTSCharacterBase, IRTSSelectable), false },  // 3114470803
			{ Z_Construct_UClass_URTSOrderable_NoRegister, (int32)VTABLE_OFFSET(ARTSCharacterBase, IRTSOrderable), false },  // 456066481
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSCharacterBase_Statics::ClassParams = {
		&ARTSCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSCharacterBase()
	{
		if (!Z_Registration_Info_UClass_ARTSCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSCharacterBase.OuterSingleton, Z_Construct_UClass_ARTSCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSCharacterBase.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSCharacterBase>()
	{
		return ARTSCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSCharacterBase);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSCharacterBase, ARTSCharacterBase::StaticClass, TEXT("ARTSCharacterBase"), &Z_Registration_Info_UClass_ARTSCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSCharacterBase), 192001410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_1809924644(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
