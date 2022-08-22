// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/UtilityAISystem/RTSConsideration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSConsideration() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSConsideration_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSConsideration();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	DEFINE_FUNCTION(URTSConsideration::execScoreConsideration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ScoreConsideration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSConsideration::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSConsideration::execSetScore)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScore(Z_Param_NewScore);
		P_NATIVE_END;
	}
	static FName NAME_URTSConsideration_ScoreConsideration = FName(TEXT("ScoreConsideration"));
	float URTSConsideration::ScoreConsideration()
	{
		RTSConsideration_eventScoreConsideration_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_URTSConsideration_ScoreConsideration),&Parms);
		return Parms.ReturnValue;
	}
	void URTSConsideration::StaticRegisterNativesURTSConsideration()
	{
		UClass* Class = URTSConsideration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScore", &URTSConsideration::execGetScore },
			{ "ScoreConsideration", &URTSConsideration::execScoreConsideration },
			{ "SetScore", &URTSConsideration::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSConsideration_GetScore_Statics
	{
		struct RTSConsideration_eventGetScore_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSConsideration_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSConsideration_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSConsideration_GetScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSConsideration_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSConsideration_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSConsideration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSConsideration_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSConsideration, nullptr, "GetScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_URTSConsideration_GetScore_Statics::RTSConsideration_eventGetScore_Parms), Z_Construct_UFunction_URTSConsideration_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSConsideration_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSConsideration_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSConsideration_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSConsideration_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSConsideration_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSConsideration_eventScoreConsideration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSConsideration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSConsideration, nullptr, "ScoreConsideration", nullptr, nullptr, sizeof(RTSConsideration_eventScoreConsideration_Parms), Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSConsideration_ScoreConsideration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSConsideration_ScoreConsideration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSConsideration_SetScore_Statics
	{
		struct RTSConsideration_eventSetScore_Parms
		{
			float NewScore;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSConsideration_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSConsideration_eventSetScore_Parms, NewScore), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSConsideration_SetScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSConsideration_SetScore_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSConsideration_SetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSConsideration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSConsideration_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSConsideration, nullptr, "SetScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_URTSConsideration_SetScore_Statics::RTSConsideration_eventSetScore_Parms), Z_Construct_UFunction_URTSConsideration_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSConsideration_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSConsideration_SetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSConsideration_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSConsideration_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSConsideration_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSConsideration);
	UClass* Z_Construct_UClass_URTSConsideration_NoRegister()
	{
		return URTSConsideration::StaticClass();
	}
	struct Z_Construct_UClass_URTSConsideration_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSConsideration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSConsideration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSConsideration_GetScore, "GetScore" }, // 2518068412
		{ &Z_Construct_UFunction_URTSConsideration_ScoreConsideration, "ScoreConsideration" }, // 1101959640
		{ &Z_Construct_UFunction_URTSConsideration_SetScore, "SetScore" }, // 2113184664
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSConsideration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UtilityAISystem/RTSConsideration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSConsideration.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSConsideration_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "RTSConsideration" },
		{ "ModuleRelativePath", "Public/UtilityAISystem/RTSConsideration.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSConsideration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSConsideration, Name), METADATA_PARAMS(Z_Construct_UClass_URTSConsideration_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSConsideration_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSConsideration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSConsideration_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSConsideration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSConsideration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSConsideration_Statics::ClassParams = {
		&URTSConsideration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URTSConsideration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URTSConsideration_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URTSConsideration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSConsideration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSConsideration()
	{
		if (!Z_Registration_Info_UClass_URTSConsideration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSConsideration.OuterSingleton, Z_Construct_UClass_URTSConsideration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSConsideration.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSConsideration>()
	{
		return URTSConsideration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSConsideration);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSConsideration, URTSConsideration::StaticClass, TEXT("URTSConsideration"), &Z_Registration_Info_UClass_URTSConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSConsideration), 358193713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_251313819(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_UtilityAISystem_RTSConsideration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
