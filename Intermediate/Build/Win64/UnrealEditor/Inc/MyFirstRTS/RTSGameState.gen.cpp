// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSGameState() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSGameState_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecord();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
// End Cross Module References
	DEFINE_FUNCTION(ARTSGameState::execGetPlayerResourceQuantity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_ResourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerResourceQuantity(Z_Param_PlayerIndex,EResourceType(Z_Param_ResourceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSGameState::execGetPlayerRecordForBlueprint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerRecord*)Z_Param__Result=P_THIS->GetPlayerRecordForBlueprint(Z_Param_index);
		P_NATIVE_END;
	}
	void ARTSGameState::StaticRegisterNativesARTSGameState()
	{
		UClass* Class = ARTSGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerRecordForBlueprint", &ARTSGameState::execGetPlayerRecordForBlueprint },
			{ "GetPlayerResourceQuantity", &ARTSGameState::execGetPlayerResourceQuantity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics
	{
		struct RTSGameState_eventGetPlayerRecordForBlueprint_Parms
		{
			int32 index;
			FPlayerRecord ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSGameState_eventGetPlayerRecordForBlueprint_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSGameState_eventGetPlayerRecordForBlueprint_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerRecord, METADATA_PARAMS(nullptr, 0) }; // 3161735594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function for getting a de-pointered version of the player record for blueprint. Will return a player numbered -1 if an invalid index is provided\n" },
		{ "ModuleRelativePath", "Public/RTSGameState.h" },
		{ "ToolTip", "Function for getting a de-pointered version of the player record for blueprint. Will return a player numbered -1 if an invalid index is provided" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSGameState, nullptr, "GetPlayerRecordForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::RTSGameState_eventGetPlayerRecordForBlueprint_Parms), Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics
	{
		struct RTSGameState_eventGetPlayerResourceQuantity_Parms
		{
			int32 PlayerIndex;
			TEnumAsByte<EResourceType> ResourceType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSGameState_eventGetPlayerResourceQuantity_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSGameState_eventGetPlayerResourceQuantity_Parms, ResourceType), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 2352757931
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSGameState_eventGetPlayerResourceQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSGameState, nullptr, "GetPlayerResourceQuantity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::RTSGameState_eventGetPlayerResourceQuantity_Parms), Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSGameState);
	UClass* Z_Construct_UClass_ARTSGameState_NoRegister()
	{
		return ARTSGameState::StaticClass();
	}
	struct Z_Construct_UClass_ARTSGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSGameState_GetPlayerRecordForBlueprint, "GetPlayerRecordForBlueprint" }, // 624579100
		{ &Z_Construct_UFunction_ARTSGameState_GetPlayerResourceQuantity, "GetPlayerResourceQuantity" }, // 3651918767
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTSGameState.h" },
		{ "ModuleRelativePath", "Public/RTSGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSGameState_Statics::ClassParams = {
		&ARTSGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSGameState()
	{
		if (!Z_Registration_Info_UClass_ARTSGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSGameState.OuterSingleton, Z_Construct_UClass_ARTSGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSGameState.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSGameState>()
	{
		return ARTSGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSGameState);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSGameState, ARTSGameState::StaticClass, TEXT("ARTSGameState"), &Z_Registration_Info_UClass_ARTSGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSGameState), 3957125259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_2811379091(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
