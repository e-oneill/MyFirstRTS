// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSUnitComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSUnitComponent() {}
// Cross Module References
	MYFIRSTRTS_API UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUnitComponent_NoRegister();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FMission();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSUnitComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderTargetComponent_NoRegister();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EJobType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics
	{
		struct _Script_MyFirstRTS_eventOnMissionChangedSignature_Parms
		{
			URTSUnitComponent* UnitComp;
			FMission NewMission;
			FMission OldMission;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewMission;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMission;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_UnitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_UnitComp = { "UnitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnMissionChangedSignature_Parms, UnitComp), Z_Construct_UClass_URTSUnitComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_UnitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_UnitComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_NewMission = { "NewMission", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnMissionChangedSignature_Parms, NewMission), Z_Construct_UScriptStruct_FMission, METADATA_PARAMS(nullptr, 0) }; // 295345503
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_OldMission = { "OldMission", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnMissionChangedSignature_Parms, OldMission), Z_Construct_UScriptStruct_FMission, METADATA_PARAMS(nullptr, 0) }; // 295345503
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_UnitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_NewMission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::NewProp_OldMission,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS, nullptr, "OnMissionChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::_Script_MyFirstRTS_eventOnMissionChangedSignature_Parms), Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URTSUnitComponent::execWorkAtJobSite)
	{
		P_GET_OBJECT(URTSOrderTargetComponent,Z_Param_CalledJobSite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WorkAtJobSite_Implementation(Z_Param_CalledJobSite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSUnitComponent::execPickUpResource)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Resource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUpResource(EResourceType(Z_Param_Resource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSUnitComponent::execDepositResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DepositResource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSUnitComponent::execExploitResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExploitResource();
		P_NATIVE_END;
	}
	static FName NAME_URTSUnitComponent_WorkAtJobSite = FName(TEXT("WorkAtJobSite"));
	void URTSUnitComponent::WorkAtJobSite(URTSOrderTargetComponent* CalledJobSite)
	{
		RTSUnitComponent_eventWorkAtJobSite_Parms Parms;
		Parms.CalledJobSite=CalledJobSite;
		ProcessEvent(FindFunctionChecked(NAME_URTSUnitComponent_WorkAtJobSite),&Parms);
	}
	void URTSUnitComponent::StaticRegisterNativesURTSUnitComponent()
	{
		UClass* Class = URTSUnitComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DepositResource", &URTSUnitComponent::execDepositResource },
			{ "ExploitResource", &URTSUnitComponent::execExploitResource },
			{ "PickUpResource", &URTSUnitComponent::execPickUpResource },
			{ "WorkAtJobSite", &URTSUnitComponent::execWorkAtJobSite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSUnitComponent_DepositResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSUnitComponent_DepositResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSUnitComponent_DepositResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSUnitComponent, nullptr, "DepositResource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSUnitComponent_DepositResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSUnitComponent_DepositResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSUnitComponent_DepositResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSUnitComponent_DepositResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSUnitComponent_ExploitResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSUnitComponent_ExploitResource_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//EXTRACT OR STORE RESOURCES\n" },
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
		{ "ToolTip", "EXTRACT OR STORE RESOURCES" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSUnitComponent_ExploitResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSUnitComponent, nullptr, "ExploitResource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSUnitComponent_ExploitResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSUnitComponent_ExploitResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSUnitComponent_ExploitResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSUnitComponent_ExploitResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics
	{
		struct RTSUnitComponent_eventPickUpResource_Parms
		{
			TEnumAsByte<EResourceType> Resource;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Resource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSUnitComponent_eventPickUpResource_Parms, Resource), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 2352757931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::NewProp_Resource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSUnitComponent, nullptr, "PickUpResource", nullptr, nullptr, sizeof(Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::RTSUnitComponent_eventPickUpResource_Parms), Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSUnitComponent_PickUpResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSUnitComponent_PickUpResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalledJobSite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CalledJobSite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::NewProp_CalledJobSite_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::NewProp_CalledJobSite = { "CalledJobSite", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSUnitComponent_eventWorkAtJobSite_Parms, CalledJobSite), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::NewProp_CalledJobSite_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::NewProp_CalledJobSite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::NewProp_CalledJobSite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSUnitComponent, nullptr, "WorkAtJobSite", nullptr, nullptr, sizeof(RTSUnitComponent_eventWorkAtJobSite_Parms), Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSUnitComponent);
	UClass* Z_Construct_UClass_URTSUnitComponent_NoRegister()
	{
		return URTSUnitComponent::StaticClass();
	}
	struct Z_Construct_UClass_URTSUnitComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OwningPlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyJob_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyJob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMissionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMissionChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSUnitComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSUnitComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSUnitComponent_DepositResource, "DepositResource" }, // 2234845357
		{ &Z_Construct_UFunction_URTSUnitComponent_ExploitResource, "ExploitResource" }, // 2344625186
		{ &Z_Construct_UFunction_URTSUnitComponent_PickUpResource, "PickUpResource" }, // 3130679787
		{ &Z_Construct_UFunction_URTSUnitComponent_WorkAtJobSite, "WorkAtJobSite" }, // 4031869532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUnitComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RTSUnitComponent.h" },
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OwningPlayerId_MetaData[] = {
		{ "Category", "RTSUnitComponent" },
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OwningPlayerId = { "OwningPlayerId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSUnitComponent, OwningPlayerId), METADATA_PARAMS(Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OwningPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OwningPlayerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_MyJob_MetaData[] = {
		{ "Category", "RTSUnitComponent" },
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_MyJob = { "MyJob", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSUnitComponent, MyJob), Z_Construct_UEnum_MyFirstRTS_EJobType, METADATA_PARAMS(Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_MyJob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_MyJob_MetaData)) }; // 796507167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OnMissionChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTSUnitComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OnMissionChanged = { "OnMissionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSUnitComponent, OnMissionChanged), Z_Construct_UDelegateFunction_MyFirstRTS_OnMissionChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OnMissionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OnMissionChanged_MetaData)) }; // 700164177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSUnitComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OwningPlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_MyJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSUnitComponent_Statics::NewProp_OnMissionChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSUnitComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSUnitComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSUnitComponent_Statics::ClassParams = {
		&URTSUnitComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URTSUnitComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URTSUnitComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URTSUnitComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSUnitComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSUnitComponent()
	{
		if (!Z_Registration_Info_UClass_URTSUnitComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSUnitComponent.OuterSingleton, Z_Construct_UClass_URTSUnitComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSUnitComponent.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSUnitComponent>()
	{
		return URTSUnitComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSUnitComponent);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSUnitComponent, URTSUnitComponent::StaticClass, TEXT("URTSUnitComponent"), &Z_Registration_Info_UClass_URTSUnitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSUnitComponent), 4124402850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_1152463320(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSUnitComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
