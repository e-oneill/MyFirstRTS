// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSOrderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderable() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderable_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	DEFINE_FUNCTION(IRTSOrderable::execCancelOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelOrder_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSOrderable::execExecuteOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteOrder_Implementation();
		P_NATIVE_END;
	}
	void IRTSOrderable::CancelOrder()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CancelOrder instead.");
	}
	void IRTSOrderable::ExecuteOrder()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteOrder instead.");
	}
	void URTSOrderable::StaticRegisterNativesURTSOrderable()
	{
		UClass* Class = URTSOrderable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelOrder", &IRTSOrderable::execCancelOrder },
			{ "ExecuteOrder", &IRTSOrderable::execExecuteOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interaction" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "CancelOrder", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderable_CancelOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interaction" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "ExecuteOrder", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderable_ExecuteOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSOrderable);
	UClass* Z_Construct_UClass_URTSOrderable_NoRegister()
	{
		return URTSOrderable::StaticClass();
	}
	struct Z_Construct_UClass_URTSOrderable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSOrderable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSOrderable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSOrderable_CancelOrder, "CancelOrder" }, // 1396650911
		{ &Z_Construct_UFunction_URTSOrderable_ExecuteOrder, "ExecuteOrder" }, // 1911435775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSOrderable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRTSOrderable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSOrderable_Statics::ClassParams = {
		&URTSOrderable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_URTSOrderable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSOrderable()
	{
		if (!Z_Registration_Info_UClass_URTSOrderable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSOrderable.OuterSingleton, Z_Construct_UClass_URTSOrderable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSOrderable.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSOrderable>()
	{
		return URTSOrderable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSOrderable);
	static FName NAME_URTSOrderable_CancelOrder = FName(TEXT("CancelOrder"));
	void IRTSOrderable::Execute_CancelOrder(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSOrderable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URTSOrderable_CancelOrder);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IRTSOrderable*)(O->GetNativeInterfaceAddress(URTSOrderable::StaticClass())))
		{
			I->CancelOrder_Implementation();
		}
	}
	static FName NAME_URTSOrderable_ExecuteOrder = FName(TEXT("ExecuteOrder"));
	void IRTSOrderable::Execute_ExecuteOrder(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSOrderable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URTSOrderable_ExecuteOrder);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IRTSOrderable*)(O->GetNativeInterfaceAddress(URTSOrderable::StaticClass())))
		{
			I->ExecuteOrder_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrderable, URTSOrderable::StaticClass, TEXT("URTSOrderable"), &Z_Registration_Info_UClass_URTSOrderable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrderable), 2507338803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_527716608(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
