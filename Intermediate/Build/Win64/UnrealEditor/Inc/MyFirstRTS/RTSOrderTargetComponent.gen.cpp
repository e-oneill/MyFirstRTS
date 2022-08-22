// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSOrderTargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderTargetComponent() {}
// Cross Module References
	MYFIRSTRTS_API UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderTargetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYFIRSTRTS_API UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUnitComponent_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAttributeComponent_NoRegister();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FResourceCount();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EJobType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics
	{
		struct _Script_MyFirstRTS_eventOnValueChangedSignature_Parms
		{
			URTSOrderTargetComponent* ModifiedComponent;
			int32 NewValue;
			float PercentDone;
			AActor* AffectingActor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentDone;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AffectingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_ModifiedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_ModifiedComponent = { "ModifiedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnValueChangedSignature_Parms, ModifiedComponent), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_ModifiedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_ModifiedComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnValueChangedSignature_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_PercentDone = { "PercentDone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnValueChangedSignature_Parms, PercentDone), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_AffectingActor = { "AffectingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnValueChangedSignature_Parms, AffectingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_ModifiedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_PercentDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::NewProp_AffectingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS, nullptr, "OnValueChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::_Script_MyFirstRTS_eventOnValueChangedSignature_Parms), Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics
	{
		struct _Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms
		{
			URTSOrderTargetComponent* ModifiedComp;
			TEnumAsByte<EResourceType> Resource;
			int32 NewQuantity;
			int32 OldQuantity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Resource;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewQuantity;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OldQuantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_ModifiedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_ModifiedComp = { "ModifiedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms, ModifiedComp), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_ModifiedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_ModifiedComp_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms, Resource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 2352757931
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_NewQuantity = { "NewQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms, NewQuantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_OldQuantity = { "OldQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms, OldQuantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_ModifiedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_NewQuantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::NewProp_OldQuantity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS, nullptr, "OnResourceDepositedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::_Script_MyFirstRTS_eventOnResourceDepositedSignature_Parms), Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URTSOrderTargetComponent::execAssignUnemployedWorker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssignUnemployedWorker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSOrderTargetComponent::execWorkAtJobSite)
	{
		P_GET_OBJECT(URTSUnitComponent,Z_Param_Worker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WorkAtJobSite_Implementation(Z_Param_Worker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSOrderTargetComponent::execSetResourceValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewResourceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResourceValue(Z_Param_NewResourceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSOrderTargetComponent::execGetResourceValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResourceValue();
		P_NATIVE_END;
	}
	static FName NAME_URTSOrderTargetComponent_WorkAtJobSite = FName(TEXT("WorkAtJobSite"));
	void URTSOrderTargetComponent::WorkAtJobSite(URTSUnitComponent* Worker)
	{
		RTSOrderTargetComponent_eventWorkAtJobSite_Parms Parms;
		Parms.Worker=Worker;
		ProcessEvent(FindFunctionChecked(NAME_URTSOrderTargetComponent_WorkAtJobSite),&Parms);
	}
	void URTSOrderTargetComponent::StaticRegisterNativesURTSOrderTargetComponent()
	{
		UClass* Class = URTSOrderTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignUnemployedWorker", &URTSOrderTargetComponent::execAssignUnemployedWorker },
			{ "GetResourceValue", &URTSOrderTargetComponent::execGetResourceValue },
			{ "SetResourceValue", &URTSOrderTargetComponent::execSetResourceValue },
			{ "WorkAtJobSite", &URTSOrderTargetComponent::execWorkAtJobSite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics
	{
		struct RTSOrderTargetComponent_eventAssignUnemployedWorker_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RTSOrderTargetComponent_eventAssignUnemployedWorker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RTSOrderTargetComponent_eventAssignUnemployedWorker_Parms), &Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderTargetComponent, nullptr, "AssignUnemployedWorker", nullptr, nullptr, sizeof(Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::RTSOrderTargetComponent_eventAssignUnemployedWorker_Parms), Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics
	{
		struct RTSOrderTargetComponent_eventGetResourceValue_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderTargetComponent_eventGetResourceValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderTargetComponent, nullptr, "GetResourceValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::RTSOrderTargetComponent_eventGetResourceValue_Parms), Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics
	{
		struct RTSOrderTargetComponent_eventSetResourceValue_Parms
		{
			int32 NewResourceValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewResourceValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::NewProp_NewResourceValue = { "NewResourceValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderTargetComponent_eventSetResourceValue_Parms, NewResourceValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::NewProp_NewResourceValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderTargetComponent, nullptr, "SetResourceValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::RTSOrderTargetComponent_eventSetResourceValue_Parms), Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Worker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Worker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::NewProp_Worker_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::NewProp_Worker = { "Worker", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderTargetComponent_eventWorkAtJobSite_Parms, Worker), Z_Construct_UClass_URTSUnitComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::NewProp_Worker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::NewProp_Worker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::NewProp_Worker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderTargetComponent, nullptr, "WorkAtJobSite", nullptr, nullptr, sizeof(RTSOrderTargetComponent_eventWorkAtJobSite_Parms), Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSOrderTargetComponent);
	UClass* Z_Construct_UClass_URTSOrderTargetComponent_NoRegister()
	{
		return URTSOrderTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_URTSOrderTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeOrderedNow_MetaData[];
#endif
		static void NewProp_bCanBeOrderedNow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeOrderedNow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeAttacked_MetaData[];
#endif
		static void NewProp_bCanBeAttacked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeAttacked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResourceDropOff_MetaData[];
#endif
		static void NewProp_bResourceDropOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResourceDropOff;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValidResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidResources;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Resources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResource_MetaData[];
#endif
		static void NewProp_bResource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDepleted_MetaData[];
#endif
		static void NewProp_bIsDepleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDepleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesCanBeExploited_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimesCanBeExploited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeConstructed_MetaData[];
#endif
		static void NewProp_bCanBeConstructed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeConstructed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsJobSite_MetaData[];
#endif
		static void NewProp_bIsJobSite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJobSite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumJobsAvailable_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumJobsAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_JobType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Workers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Workers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Workers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResourceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitResourceValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InitResourceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceDeposited_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceDeposited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSOrderTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSOrderTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSOrderTargetComponent_AssignUnemployedWorker, "AssignUnemployedWorker" }, // 3969625115
		{ &Z_Construct_UFunction_URTSOrderTargetComponent_GetResourceValue, "GetResourceValue" }, // 1305652310
		{ &Z_Construct_UFunction_URTSOrderTargetComponent_SetResourceValue, "SetResourceValue" }, // 3662298595
		{ &Z_Construct_UFunction_URTSOrderTargetComponent_WorkAtJobSite, "WorkAtJobSite" }, // 1567229172
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RTSOrderTargetComponent.h" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeOrderedNow_MetaData[] = {
		{ "Category", "RTSOrderTargetComponent" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeOrderedNow_SetBit(void* Obj)
	{
		((URTSOrderTargetComponent*)Obj)->bCanBeOrderedNow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeOrderedNow = { "bCanBeOrderedNow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSOrderTargetComponent), &Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeOrderedNow_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeOrderedNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeOrderedNow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeAttacked_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeAttacked_SetBit(void* Obj)
	{
		((URTSOrderTargetComponent*)Obj)->bCanBeAttacked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeAttacked = { "bCanBeAttacked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSOrderTargetComponent), &Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeAttacked_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeAttacked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeAttacked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_AttributeComponent_MetaData[] = {
		{ "Category", "RTSOrderTargetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_AttributeComponent = { "AttributeComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, AttributeComponent), Z_Construct_UClass_URTSAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_AttributeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_AttributeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResourceDropOff_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResourceDropOff_SetBit(void* Obj)
	{
		((URTSOrderTargetComponent*)Obj)->bResourceDropOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResourceDropOff = { "bResourceDropOff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSOrderTargetComponent), &Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResourceDropOff_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResourceDropOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResourceDropOff_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ValidResources_Inner = { "ValidResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ValidResources_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "bResourceDropOff" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ValidResources = { "ValidResources", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, ValidResources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ValidResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ValidResources_MetaData)) }; // 2352757931
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Resources_Inner = { "Resources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResourceCount, METADATA_PARAMS(nullptr, 0) }; // 895690614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Resources_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "bResourceDropOff" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, Resources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Resources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Resources_MetaData)) }; // 895690614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResource_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "!bResourceDropOff" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResource_SetBit(void* Obj)
	{
		((URTSOrderTargetComponent*)Obj)->bResource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResource = { "bResource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSOrderTargetComponent), &Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResource_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsDepleted_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "bResource" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsDepleted_SetBit(void* Obj)
	{
		((URTSOrderTargetComponent*)Obj)->bIsDepleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsDepleted = { "bIsDepleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSOrderTargetComponent), &Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsDepleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsDepleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsDepleted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_TimesCanBeExploited_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "bResource" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_TimesCanBeExploited = { "TimesCanBeExploited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, TimesCanBeExploited), nullptr, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_TimesCanBeExploited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_TimesCanBeExploited_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_RespawnTimer_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "bResource" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_RespawnTimer = { "RespawnTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, RespawnTimer), METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_RespawnTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_RespawnTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "bResource" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, ResourceType), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceType_MetaData)) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeConstructed_MetaData[] = {
		{ "Category", "Construction" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeConstructed_SetBit(void* Obj)
	{
		((URTSOrderTargetComponent*)Obj)->bCanBeConstructed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeConstructed = { "bCanBeConstructed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSOrderTargetComponent), &Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeConstructed_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeConstructed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeConstructed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsJobSite_MetaData[] = {
		{ "Category", "Jobs" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsJobSite_SetBit(void* Obj)
	{
		((URTSOrderTargetComponent*)Obj)->bIsJobSite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsJobSite = { "bIsJobSite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSOrderTargetComponent), &Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsJobSite_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsJobSite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsJobSite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_NumJobsAvailable_MetaData[] = {
		{ "Category", "Jobs" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_NumJobsAvailable = { "NumJobsAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, NumJobsAvailable), METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_NumJobsAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_NumJobsAvailable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_JobType_MetaData[] = {
		{ "Category", "Jobs" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_JobType = { "JobType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, JobType), Z_Construct_UEnum_MyFirstRTS_EJobType, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_JobType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_JobType_MetaData)) }; // 796507167
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Workers_Inner = { "Workers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URTSUnitComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Workers_MetaData[] = {
		{ "Category", "RTSOrderTargetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Workers = { "Workers", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, Workers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Workers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Workers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceValue_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditCondition", "bResource" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceValue = { "ResourceValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, ResourceValue), METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_InitResourceValue_MetaData[] = {
		{ "Category", "RTSOrderTargetComponent" },
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_InitResourceValue = { "InitResourceValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, InitResourceValue), METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_InitResourceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_InitResourceValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceChanged = { "OnResourceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, OnResourceChanged), Z_Construct_UDelegateFunction_MyFirstRTS_OnValueChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceChanged_MetaData)) }; // 2123020332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceDeposited_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTSOrderTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceDeposited = { "OnResourceDeposited", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSOrderTargetComponent, OnResourceDeposited), Z_Construct_UDelegateFunction_MyFirstRTS_OnResourceDepositedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceDeposited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceDeposited_MetaData)) }; // 2765310234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSOrderTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeOrderedNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeAttacked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_AttributeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResourceDropOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ValidResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ValidResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Resources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Resources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsDepleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_TimesCanBeExploited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_RespawnTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bCanBeConstructed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_bIsJobSite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_NumJobsAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_JobType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Workers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_Workers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_ResourceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_InitResourceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderTargetComponent_Statics::NewProp_OnResourceDeposited,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSOrderTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSOrderTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSOrderTargetComponent_Statics::ClassParams = {
		&URTSOrderTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URTSOrderTargetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URTSOrderTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSOrderTargetComponent()
	{
		if (!Z_Registration_Info_UClass_URTSOrderTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSOrderTargetComponent.OuterSingleton, Z_Construct_UClass_URTSOrderTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSOrderTargetComponent.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSOrderTargetComponent>()
	{
		return URTSOrderTargetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSOrderTargetComponent);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrderTargetComponent, URTSOrderTargetComponent::StaticClass, TEXT("URTSOrderTargetComponent"), &Z_Registration_Info_UClass_URTSOrderTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrderTargetComponent), 852011303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_2704235045(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderTargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
