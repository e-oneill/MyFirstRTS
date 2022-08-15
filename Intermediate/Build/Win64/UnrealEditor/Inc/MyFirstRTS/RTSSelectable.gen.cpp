// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSSelectable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSSelectable() {}
// Cross Module References
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSSelectable_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSSelectable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
// End Cross Module References
	DEFINE_FUNCTION(IRTSSelectable::execEndPreviewSelect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPreviewSelect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSSelectable::execPreviewSelect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewSelect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSSelectable::execDeselect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deselect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSSelectable::execSelect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Select_Implementation();
		P_NATIVE_END;
	}
	void IRTSSelectable::Deselect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deselect instead.");
	}
	void IRTSSelectable::EndPreviewSelect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndPreviewSelect instead.");
	}
	void IRTSSelectable::PreviewSelect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PreviewSelect instead.");
	}
	void IRTSSelectable::Select()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Select instead.");
	}
	void URTSSelectable::StaticRegisterNativesURTSSelectable()
	{
		UClass* Class = URTSSelectable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deselect", &IRTSSelectable::execDeselect },
			{ "EndPreviewSelect", &IRTSSelectable::execEndPreviewSelect },
			{ "PreviewSelect", &IRTSSelectable::execPreviewSelect },
			{ "Select", &IRTSSelectable::execSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSSelectable_Deselect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSelectable_Deselect_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interaction" },
		{ "ModuleRelativePath", "Public/RTSSelectable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSelectable_Deselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSelectable, nullptr, "Deselect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSelectable_Deselect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSelectable_Deselect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSelectable_Deselect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSSelectable_Deselect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSelectable_EndPreviewSelect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSelectable_EndPreviewSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interaction" },
		{ "ModuleRelativePath", "Public/RTSSelectable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSelectable_EndPreviewSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSelectable, nullptr, "EndPreviewSelect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSelectable_EndPreviewSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSelectable_EndPreviewSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSelectable_EndPreviewSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSSelectable_EndPreviewSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSelectable_PreviewSelect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSelectable_PreviewSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interaction" },
		{ "ModuleRelativePath", "Public/RTSSelectable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSelectable_PreviewSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSelectable, nullptr, "PreviewSelect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSelectable_PreviewSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSelectable_PreviewSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSelectable_PreviewSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSSelectable_PreviewSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSelectable_Select_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSelectable_Select_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interaction" },
		{ "Comment", "//UFUNCTION(BlueprintNativeEvent)\n" },
		{ "ModuleRelativePath", "Public/RTSSelectable.h" },
		{ "ToolTip", "UFUNCTION(BlueprintNativeEvent)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSelectable_Select_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSelectable, nullptr, "Select", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSelectable_Select_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSelectable_Select_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSelectable_Select()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSSelectable_Select_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSSelectable);
	UClass* Z_Construct_UClass_URTSSelectable_NoRegister()
	{
		return URTSSelectable::StaticClass();
	}
	struct Z_Construct_UClass_URTSSelectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSSelectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSSelectable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSSelectable_Deselect, "Deselect" }, // 2753214147
		{ &Z_Construct_UFunction_URTSSelectable_EndPreviewSelect, "EndPreviewSelect" }, // 1313571266
		{ &Z_Construct_UFunction_URTSSelectable_PreviewSelect, "PreviewSelect" }, // 1258294401
		{ &Z_Construct_UFunction_URTSSelectable_Select, "Select" }, // 2183387538
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSelectable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RTSSelectable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSSelectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRTSSelectable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSSelectable_Statics::ClassParams = {
		&URTSSelectable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URTSSelectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSelectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSSelectable()
	{
		if (!Z_Registration_Info_UClass_URTSSelectable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSSelectable.OuterSingleton, Z_Construct_UClass_URTSSelectable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URTSSelectable.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<URTSSelectable>()
	{
		return URTSSelectable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSSelectable);
	static FName NAME_URTSSelectable_Deselect = FName(TEXT("Deselect"));
	void IRTSSelectable::Execute_Deselect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSSelectable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URTSSelectable_Deselect);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IRTSSelectable*)(O->GetNativeInterfaceAddress(URTSSelectable::StaticClass())))
		{
			I->Deselect_Implementation();
		}
	}
	static FName NAME_URTSSelectable_EndPreviewSelect = FName(TEXT("EndPreviewSelect"));
	void IRTSSelectable::Execute_EndPreviewSelect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSSelectable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URTSSelectable_EndPreviewSelect);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IRTSSelectable*)(O->GetNativeInterfaceAddress(URTSSelectable::StaticClass())))
		{
			I->EndPreviewSelect_Implementation();
		}
	}
	static FName NAME_URTSSelectable_PreviewSelect = FName(TEXT("PreviewSelect"));
	void IRTSSelectable::Execute_PreviewSelect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSSelectable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URTSSelectable_PreviewSelect);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IRTSSelectable*)(O->GetNativeInterfaceAddress(URTSSelectable::StaticClass())))
		{
			I->PreviewSelect_Implementation();
		}
	}
	static FName NAME_URTSSelectable_Select = FName(TEXT("Select"));
	void IRTSSelectable::Execute_Select(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSSelectable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URTSSelectable_Select);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IRTSSelectable*)(O->GetNativeInterfaceAddress(URTSSelectable::StaticClass())))
		{
			I->Select_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSSelectable, URTSSelectable::StaticClass, TEXT("URTSSelectable"), &Z_Registration_Info_UClass_URTSSelectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSSelectable), 3114470803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_310603812(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSSelectable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
