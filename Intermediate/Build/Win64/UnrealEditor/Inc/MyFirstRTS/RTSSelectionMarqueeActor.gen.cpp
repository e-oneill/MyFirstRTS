// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSSelectionMarqueeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSSelectionMarqueeActor() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSSelectionMarqueeActor_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSSelectionMarqueeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARTSSelectionMarqueeActor::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSSelectionMarqueeActor::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ARTSSelectionMarqueeActor::StaticRegisterNativesARTSSelectionMarqueeActor()
	{
		UClass* Class = ARTSSelectionMarqueeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &ARTSSelectionMarqueeActor::execOnBeginOverlap },
			{ "OnEndOverlap", &ARTSSelectionMarqueeActor::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics
	{
		struct RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSSelectionMarqueeActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSSelectionMarqueeActor, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::RTSSelectionMarqueeActor_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics
	{
		struct RTSSelectionMarqueeActor_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSelectionMarqueeActor_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSSelectionMarqueeActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSSelectionMarqueeActor, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::RTSSelectionMarqueeActor_eventOnEndOverlap_Parms), Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSSelectionMarqueeActor);
	UClass* Z_Construct_UClass_ARTSSelectionMarqueeActor_NoRegister()
	{
		return ARTSSelectionMarqueeActor::StaticClass();
	}
	struct Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnBeginOverlap, "OnBeginOverlap" }, // 2651232887
		{ &Z_Construct_UFunction_ARTSSelectionMarqueeActor_OnEndOverlap, "OnEndOverlap" }, // 614870922
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RTSSelectionMarqueeActor.h" },
		{ "ModuleRelativePath", "Public/RTSSelectionMarqueeActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "Category", "RTSSelectionMarqueeActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSSelectionMarqueeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSSelectionMarqueeActor, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::NewProp_BoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::NewProp_BoxCollider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::NewProp_BoxCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSSelectionMarqueeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::ClassParams = {
		&ARTSSelectionMarqueeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSSelectionMarqueeActor()
	{
		if (!Z_Registration_Info_UClass_ARTSSelectionMarqueeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSSelectionMarqueeActor.OuterSingleton, Z_Construct_UClass_ARTSSelectionMarqueeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSSelectionMarqueeActor.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSSelectionMarqueeActor>()
	{
		return ARTSSelectionMarqueeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSSelectionMarqueeActor);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectionMarqueeActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectionMarqueeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSSelectionMarqueeActor, ARTSSelectionMarqueeActor::StaticClass, TEXT("ARTSSelectionMarqueeActor"), &Z_Registration_Info_UClass_ARTSSelectionMarqueeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSSelectionMarqueeActor), 936098758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectionMarqueeActor_h_3484729209(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectionMarqueeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectionMarqueeActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
