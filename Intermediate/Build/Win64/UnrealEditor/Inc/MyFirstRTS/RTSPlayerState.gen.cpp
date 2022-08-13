// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPlayerState() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerState_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStateResource();
// End Cross Module References
	DEFINE_FUNCTION(ARTSPlayerState::execModifyResourceCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArrayIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ModifyResourceCount(Z_Param_ArrayIndex,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerState::execRemoveFromResource)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ResourceType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveFromResource(EResourceType(Z_Param_ResourceType),Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerState::execAddToResource)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ResourceType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddToResource(EResourceType(Z_Param_ResourceType),Z_Param_Quantity);
		P_NATIVE_END;
	}
	void ARTSPlayerState::StaticRegisterNativesARTSPlayerState()
	{
		UClass* Class = ARTSPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToResource", &ARTSPlayerState::execAddToResource },
			{ "ModifyResourceCount", &ARTSPlayerState::execModifyResourceCount },
			{ "RemoveFromResource", &ARTSPlayerState::execRemoveFromResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics
	{
		struct RTSPlayerState_eventAddToResource_Parms
		{
			TEnumAsByte<EResourceType> ResourceType;
			int32 Quantity;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventAddToResource_Parms, ResourceType), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 4157312209
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventAddToResource_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventAddToResource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerState, nullptr, "AddToResource", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::RTSPlayerState_eventAddToResource_Parms), Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerState_AddToResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPlayerState_AddToResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics
	{
		struct RTSPlayerState_eventModifyResourceCount_Parms
		{
			int32 ArrayIndex;
			int32 Quantity;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ArrayIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventModifyResourceCount_Parms, ArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventModifyResourceCount_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventModifyResourceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerState, nullptr, "ModifyResourceCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::RTSPlayerState_eventModifyResourceCount_Parms), Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics
	{
		struct RTSPlayerState_eventRemoveFromResource_Parms
		{
			TEnumAsByte<EResourceType> ResourceType;
			int32 Quantity;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventRemoveFromResource_Parms, ResourceType), Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 4157312209
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventRemoveFromResource_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerState_eventRemoveFromResource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerState, nullptr, "RemoveFromResource", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::RTSPlayerState_eventRemoveFromResource_Parms), Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSPlayerState);
	UClass* Z_Construct_UClass_ARTSPlayerState_NoRegister()
	{
		return ARTSPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerResourceCounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerResourceCounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerResourceCounts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSPlayerState_AddToResource, "AddToResource" }, // 175753038
		{ &Z_Construct_UFunction_ARTSPlayerState_ModifyResourceCount, "ModifyResourceCount" }, // 347680727
		{ &Z_Construct_UFunction_ARTSPlayerState_RemoveFromResource, "RemoveFromResource" }, // 350420818
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTSPlayerState.h" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_PlayerResourceCounts_Inner = { "PlayerResourceCounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerStateResource, METADATA_PARAMS(nullptr, 0) }; // 217924941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_PlayerResourceCounts_MetaData[] = {
		{ "Category", "RTSPlayerState" },
		{ "ModuleRelativePath", "Public/RTSPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_PlayerResourceCounts = { "PlayerResourceCounts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerState, PlayerResourceCounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_PlayerResourceCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_PlayerResourceCounts_MetaData)) }; // 217924941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_PlayerResourceCounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerState_Statics::NewProp_PlayerResourceCounts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerState_Statics::ClassParams = {
		&ARTSPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPlayerState()
	{
		if (!Z_Registration_Info_UClass_ARTSPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSPlayerState.OuterSingleton, Z_Construct_UClass_ARTSPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSPlayerState.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSPlayerState>()
	{
		return ARTSPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPlayerState);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSPlayerState, ARTSPlayerState::StaticClass, TEXT("ARTSPlayerState"), &Z_Registration_Info_UClass_ARTSPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSPlayerState), 2904246544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_2473408519(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
