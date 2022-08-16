// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSResource() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSResource_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSResource();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderTargetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARTSResource::execHandleResourceQuantityChanged)
	{
		P_GET_OBJECT(URTSOrderTargetComponent,Z_Param_ModifiedComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PercentDone);
		P_GET_OBJECT(AActor,Z_Param_AffectingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleResourceQuantityChanged(Z_Param_ModifiedComponent,Z_Param_NewValue,Z_Param_PercentDone,Z_Param_AffectingActor);
		P_NATIVE_END;
	}
	static FName NAME_ARTSResource_ResourceDepleted = FName(TEXT("ResourceDepleted"));
	void ARTSResource::ResourceDepleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARTSResource_ResourceDepleted),NULL);
	}
	static FName NAME_ARTSResource_ResourcedExtracted = FName(TEXT("ResourcedExtracted"));
	void ARTSResource::ResourcedExtracted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARTSResource_ResourcedExtracted),NULL);
	}
	void ARTSResource::StaticRegisterNativesARTSResource()
	{
		UClass* Class = ARTSResource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleResourceQuantityChanged", &ARTSResource::execHandleResourceQuantityChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics
	{
		struct RTSResource_eventHandleResourceQuantityChanged_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_ModifiedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_ModifiedComponent = { "ModifiedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSResource_eventHandleResourceQuantityChanged_Parms, ModifiedComponent), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_ModifiedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_ModifiedComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSResource_eventHandleResourceQuantityChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_PercentDone = { "PercentDone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSResource_eventHandleResourceQuantityChanged_Parms, PercentDone), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_AffectingActor = { "AffectingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSResource_eventHandleResourceQuantityChanged_Parms, AffectingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_ModifiedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_PercentDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::NewProp_AffectingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSResource, nullptr, "HandleResourceQuantityChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::RTSResource_eventHandleResourceQuantityChanged_Parms), Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSResource_ResourceDepleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSResource_ResourceDepleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSResource_ResourceDepleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSResource, nullptr, "ResourceDepleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSResource_ResourceDepleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSResource_ResourceDepleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSResource_ResourceDepleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSResource_ResourceDepleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSResource_ResourcedExtracted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSResource_ResourcedExtracted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSResource_ResourcedExtracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSResource, nullptr, "ResourcedExtracted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSResource_ResourcedExtracted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSResource_ResourcedExtracted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSResource_ResourcedExtracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSResource_ResourcedExtracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSResource);
	UClass* Z_Construct_UClass_ARTSResource_NoRegister()
	{
		return ARTSResource::StaticClass();
	}
	struct Z_Construct_UClass_ARTSResource_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSResource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSResource_HandleResourceQuantityChanged, "HandleResourceQuantityChanged" }, // 3495091470
		{ &Z_Construct_UFunction_ARTSResource_ResourceDepleted, "ResourceDepleted" }, // 2437951146
		{ &Z_Construct_UFunction_ARTSResource_ResourcedExtracted, "ResourcedExtracted" }, // 772578573
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSResource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RTSResource.h" },
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSResource_Statics::NewProp_OrderTargetComponent_MetaData[] = {
		{ "Category", "RTSResource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSResource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSResource_Statics::NewProp_OrderTargetComponent = { "OrderTargetComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSResource, OrderTargetComponent), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSResource_Statics::NewProp_OrderTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::NewProp_OrderTargetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSResource_Statics::NewProp_OrderTargetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSResource_Statics::ClassParams = {
		&ARTSResource::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSResource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSResource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSResource()
	{
		if (!Z_Registration_Info_UClass_ARTSResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSResource.OuterSingleton, Z_Construct_UClass_ARTSResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSResource.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSResource>()
	{
		return ARTSResource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSResource);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSResource, ARTSResource::StaticClass, TEXT("ARTSResource"), &Z_Registration_Info_UClass_ARTSResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSResource), 2751236189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_1664273880(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSResource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
