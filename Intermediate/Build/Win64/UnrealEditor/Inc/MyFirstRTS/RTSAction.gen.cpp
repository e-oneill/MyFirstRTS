// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/UtilityAISystem/RTSAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAction() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAction_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSConsideration_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URTSAction::execExecute)
	{
		P_GET_OBJECT(APawn,Z_Param_NPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute_Implementation(Z_Param_NPC);
		P_NATIVE_END;
	}
	static FName NAME_URTSAction_Execute = FName(TEXT("Execute"));
	void URTSAction::Execute(APawn* NPC)
	{
		RTSAction_eventExecute_Parms Parms;
		Parms.NPC=NPC;
		ProcessEvent(FindFunctionChecked(NAME_URTSAction_Execute),&Parms);
	}
	void URTSAction::StaticRegisterNativesURTSAction()
	{
		UClass* Class = URTSAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &URTSAction::execExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSAction_Execute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAction_Execute_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSAction_eventExecute_Parms, NPC), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAction_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAction_Execute_Statics::NewProp_NPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSAction_Execute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAction_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAction, nullptr, "Execute", nullptr, nullptr, sizeof(RTSAction_eventExecute_Parms), Z_Construct_UFunction_URTSAction_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAction_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSAction_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAction_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSAction_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAction_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAction);
	UClass* Z_Construct_UClass_URTSAction_NoRegister()
	{
		return URTSAction::StaticClass();
	}
	struct Z_Construct_UClass_URTSAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConsiderationTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsiderationTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsiderationTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSAction_Execute, "Execute" }, // 1281073338
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UtilityAISystem/RTSAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSAction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "RTSAction" },
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSAction.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSAction, Name), METADATA_PARAMS(Z_Construct_UClass_URTSAction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSAction_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSAction_Statics::NewProp_ConsiderationTypes_Inner = { "ConsiderationTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URTSConsideration_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSAction_Statics::NewProp_ConsiderationTypes_MetaData[] = {
		{ "Category", "RTSAction" },
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSAction_Statics::NewProp_ConsiderationTypes = { "ConsiderationTypes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSAction, ConsiderationTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URTSAction_Statics::NewProp_ConsiderationTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSAction_Statics::NewProp_ConsiderationTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAction_Statics::NewProp_ConsiderationTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAction_Statics::NewProp_ConsiderationTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAction_Statics::ClassParams = {
		&URTSAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URTSAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URTSAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URTSAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSAction()
	{
		if (!Z_Registration_Info_UClass_URTSAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAction.OuterSingleton, Z_Construct_UClass_URTSAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSAction.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSAction>()
	{
		return URTSAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAction);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSAction, URTSAction::StaticClass, TEXT("URTSAction"), &Z_Registration_Info_UClass_URTSAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAction), 443327609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_673671360(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
