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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(IRTSOrderable::execGetOrderPreviewMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UStaticMeshComponent> *)Z_Param__Result=P_THIS->GetOrderPreviewMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSOrderable::execCancelOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelOrder_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSOrderable::execHandleOrderToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOrderToActor_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSOrderable::execHandleOrderToLocationAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOrderToLocationAndRotation_Implementation(Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IRTSOrderable::execHandleOrderToLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOrderToLocation_Implementation(Z_Param_Location);
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
	TSubclassOf<UStaticMeshComponent>  IRTSOrderable::GetOrderPreviewMesh()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOrderPreviewMesh instead.");
		RTSOrderable_eventGetOrderPreviewMesh_Parms Parms;
		return Parms.ReturnValue;
	}
	void IRTSOrderable::HandleOrderToActor(AActor* Actor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleOrderToActor instead.");
	}
	void IRTSOrderable::HandleOrderToLocation(FVector Location)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleOrderToLocation instead.");
	}
	void IRTSOrderable::HandleOrderToLocationAndRotation(FVector Location, FRotator Rotation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleOrderToLocationAndRotation instead.");
	}
	void URTSOrderable::StaticRegisterNativesURTSOrderable()
	{
		UClass* Class = URTSOrderable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelOrder", &IRTSOrderable::execCancelOrder },
			{ "ExecuteOrder", &IRTSOrderable::execExecuteOrder },
			{ "GetOrderPreviewMesh", &IRTSOrderable::execGetOrderPreviewMesh },
			{ "HandleOrderToActor", &IRTSOrderable::execHandleOrderToActor },
			{ "HandleOrderToLocation", &IRTSOrderable::execHandleOrderToLocation },
			{ "HandleOrderToLocationAndRotation", &IRTSOrderable::execHandleOrderToLocationAndRotation },
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
		{ "Category", "Orderable Interface" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "CancelOrder", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_CancelOrder_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Player Interaction" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "ExecuteOrder", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderable_ExecuteOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderable_ExecuteOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderable_eventGetOrderPreviewMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orderable Interface" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "GetOrderPreviewMesh", nullptr, nullptr, sizeof(RTSOrderable_eventGetOrderPreviewMesh_Parms), Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderable_eventHandleOrderToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orderable Interface" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "HandleOrderToActor", nullptr, nullptr, sizeof(RTSOrderable_eventHandleOrderToActor_Parms), Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderable_HandleOrderToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderable_HandleOrderToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderable_eventHandleOrderToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orderable Interface" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "HandleOrderToLocation", nullptr, nullptr, sizeof(RTSOrderable_eventHandleOrderToLocation_Parms), Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderable_eventHandleOrderToLocationAndRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSOrderable_eventHandleOrderToLocationAndRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orderable Interface" },
		{ "ModuleRelativePath", "Public/RTSOrderable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderable, nullptr, "HandleOrderToLocationAndRotation", nullptr, nullptr, sizeof(RTSOrderable_eventHandleOrderToLocationAndRotation_Parms), Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_URTSOrderable_CancelOrder, "CancelOrder" }, // 1250149129
		{ &Z_Construct_UFunction_URTSOrderable_ExecuteOrder, "ExecuteOrder" }, // 4075606427
		{ &Z_Construct_UFunction_URTSOrderable_GetOrderPreviewMesh, "GetOrderPreviewMesh" }, // 1072227782
		{ &Z_Construct_UFunction_URTSOrderable_HandleOrderToActor, "HandleOrderToActor" }, // 753504215
		{ &Z_Construct_UFunction_URTSOrderable_HandleOrderToLocation, "HandleOrderToLocation" }, // 1860544871
		{ &Z_Construct_UFunction_URTSOrderable_HandleOrderToLocationAndRotation, "HandleOrderToLocationAndRotation" }, // 1883292446
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSOrderable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
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
	static FName NAME_URTSOrderable_GetOrderPreviewMesh = FName(TEXT("GetOrderPreviewMesh"));
	TSubclassOf<UStaticMeshComponent>  IRTSOrderable::Execute_GetOrderPreviewMesh(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSOrderable::StaticClass()));
		RTSOrderable_eventGetOrderPreviewMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URTSOrderable_GetOrderPreviewMesh);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IRTSOrderable*)(O->GetNativeInterfaceAddress(URTSOrderable::StaticClass())))
		{
			Parms.ReturnValue = I->GetOrderPreviewMesh_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_URTSOrderable_HandleOrderToActor = FName(TEXT("HandleOrderToActor"));
	void IRTSOrderable::Execute_HandleOrderToActor(UObject* O, AActor* Actor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSOrderable::StaticClass()));
		RTSOrderable_eventHandleOrderToActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URTSOrderable_HandleOrderToActor);
		if (Func)
		{
			Parms.Actor=Actor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IRTSOrderable*)(O->GetNativeInterfaceAddress(URTSOrderable::StaticClass())))
		{
			I->HandleOrderToActor_Implementation(Actor);
		}
	}
	static FName NAME_URTSOrderable_HandleOrderToLocation = FName(TEXT("HandleOrderToLocation"));
	void IRTSOrderable::Execute_HandleOrderToLocation(UObject* O, FVector Location)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSOrderable::StaticClass()));
		RTSOrderable_eventHandleOrderToLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URTSOrderable_HandleOrderToLocation);
		if (Func)
		{
			Parms.Location=Location;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IRTSOrderable*)(O->GetNativeInterfaceAddress(URTSOrderable::StaticClass())))
		{
			I->HandleOrderToLocation_Implementation(Location);
		}
	}
	static FName NAME_URTSOrderable_HandleOrderToLocationAndRotation = FName(TEXT("HandleOrderToLocationAndRotation"));
	void IRTSOrderable::Execute_HandleOrderToLocationAndRotation(UObject* O, FVector Location, FRotator Rotation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URTSOrderable::StaticClass()));
		RTSOrderable_eventHandleOrderToLocationAndRotation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URTSOrderable_HandleOrderToLocationAndRotation);
		if (Func)
		{
			Parms.Location=Location;
			Parms.Rotation=Rotation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IRTSOrderable*)(O->GetNativeInterfaceAddress(URTSOrderable::StaticClass())))
		{
			I->HandleOrderToLocationAndRotation_Implementation(Location,Rotation);
		}
	}
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrderable, URTSOrderable::StaticClass, TEXT("URTSOrderable"), &Z_Registration_Info_UClass_URTSOrderable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrderable), 456066481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_1176835548(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSOrderable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
