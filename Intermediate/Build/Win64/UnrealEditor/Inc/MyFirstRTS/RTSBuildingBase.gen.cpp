// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstRTS/Public/RTSBuildingBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBuildingBase() {}
// Cross Module References
	MYFIRSTRTS_API UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyFirstRTS();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_ARTSBuildingBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSOrderTargetComponent_NoRegister();
	MYFIRSTRTS_API UEnum* Z_Construct_UEnum_MyFirstRTS_EResourceType();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSAttributeComponent_NoRegister();
	MYFIRSTRTS_API UClass* Z_Construct_UClass_URTSSelectable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics
	{
		struct _Script_MyFirstRTS_eventOnConstructionSignature_Parms
		{
			ARTSBuildingBase* ConstructedBuilding;
			float PercentDone;
			AActor* Builder;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructedBuilding;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentDone;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::NewProp_ConstructedBuilding = { "ConstructedBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnConstructionSignature_Parms, ConstructedBuilding), Z_Construct_UClass_ARTSBuildingBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::NewProp_PercentDone = { "PercentDone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnConstructionSignature_Parms, PercentDone), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyFirstRTS_eventOnConstructionSignature_Parms, Builder), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::NewProp_ConstructedBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::NewProp_PercentDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::NewProp_Builder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyFirstRTS, nullptr, "OnConstructionSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::_Script_MyFirstRTS_eventOnConstructionSignature_Parms), Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARTSBuildingBase::execGetIsConstructed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsConstructed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSBuildingBase::execGetBuildingMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetBuildingMesh_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ARTSBuildingBase_GetBuildingMesh = FName(TEXT("GetBuildingMesh"));
	UMeshComponent* ARTSBuildingBase::GetBuildingMesh()
	{
		RTSBuildingBase_eventGetBuildingMesh_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ARTSBuildingBase_GetBuildingMesh),&Parms);
		return Parms.ReturnValue;
	}
	void ARTSBuildingBase::StaticRegisterNativesARTSBuildingBase()
	{
		UClass* Class = ARTSBuildingBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuildingMesh", &ARTSBuildingBase::execGetBuildingMesh },
			{ "GetIsConstructed", &ARTSBuildingBase::execGetIsConstructed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSBuildingBase_eventGetBuildingMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function that must be implemented in blueprint, as buildings can have either a static or skeletal mesh, this lets the C++ code work with this mesh\n" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
		{ "ToolTip", "Function that must be implemented in blueprint, as buildings can have either a static or skeletal mesh, this lets the C++ code work with this mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSBuildingBase, nullptr, "GetBuildingMesh", nullptr, nullptr, sizeof(RTSBuildingBase_eventGetBuildingMesh_Parms), Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics
	{
		struct RTSBuildingBase_eventGetIsConstructed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RTSBuildingBase_eventGetIsConstructed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RTSBuildingBase_eventGetIsConstructed_Parms), &Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSBuildingBase, nullptr, "GetIsConstructed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::RTSBuildingBase_eventGetIsConstructed_Parms), Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSBuildingBase);
	UClass* Z_Construct_UClass_ARTSBuildingBase_NoRegister()
	{
		return ARTSBuildingBase::StaticClass();
	}
	struct Z_Construct_UClass_ARTSBuildingBase_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OwningPlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConstructed_MetaData[];
#endif
		static void NewProp_bIsConstructed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstructed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsResourceDropOff_MetaData[];
#endif
		static void NewProp_bIsResourceDropOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsResourceDropOff;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValidResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConstruction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstruction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSBuildingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSBuildingBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSBuildingBase_GetBuildingMesh, "GetBuildingMesh" }, // 2551419149
		{ &Z_Construct_UFunction_ARTSBuildingBase_GetIsConstructed, "GetIsConstructed" }, // 2544312321
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RTSBuildingBase.h" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OrderTargetComponent_MetaData[] = {
		{ "Category", "RTSBuildingBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OrderTargetComponent = { "OrderTargetComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingBase, OrderTargetComponent), Z_Construct_UClass_URTSOrderTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OrderTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OrderTargetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OwningPlayerId_MetaData[] = {
		{ "Category", "RTSBuildingBase" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OwningPlayerId = { "OwningPlayerId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingBase, OwningPlayerId), METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OwningPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OwningPlayerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsConstructed_MetaData[] = {
		{ "Category", "RTSBuildingBase" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsConstructed_SetBit(void* Obj)
	{
		((ARTSBuildingBase*)Obj)->bIsConstructed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsConstructed = { "bIsConstructed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSBuildingBase), &Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsConstructed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsConstructed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsConstructed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_MetaData[] = {
		{ "Category", "Building Functions" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	void Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_SetBit(void* Obj)
	{
		((ARTSBuildingBase*)Obj)->bIsResourceDropOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff = { "bIsResourceDropOff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSBuildingBase), &Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_Inner = { "ValidResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MyFirstRTS_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_MetaData[] = {
		{ "Category", "Building Functions" },
		{ "EditCondition", "bIsResourceDropOff" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources = { "ValidResources", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingBase, ValidResources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_MetaData)) }; // 2352757931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_AttributeComponent_MetaData[] = {
		{ "Category", "RTSBuildingBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_AttributeComponent = { "AttributeComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingBase, AttributeComponent), Z_Construct_UClass_URTSAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_AttributeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_AttributeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OnConstruction_MetaData[] = {
		{ "Category", "RTS Building Events" },
		{ "ModuleRelativePath", "Public/RTSBuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OnConstruction = { "OnConstruction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSBuildingBase, OnConstruction), Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OnConstruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OnConstruction_MetaData)) }; // 2753657097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSBuildingBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OrderTargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OwningPlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsConstructed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_bIsResourceDropOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_ValidResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_AttributeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBuildingBase_Statics::NewProp_OnConstruction,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARTSBuildingBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URTSSelectable_NoRegister, (int32)VTABLE_OFFSET(ARTSBuildingBase, IRTSSelectable), false },  // 3114470803
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSBuildingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSBuildingBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSBuildingBase_Statics::ClassParams = {
		&ARTSBuildingBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSBuildingBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSBuildingBase()
	{
		if (!Z_Registration_Info_UClass_ARTSBuildingBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSBuildingBase.OuterSingleton, Z_Construct_UClass_ARTSBuildingBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSBuildingBase.OuterSingleton;
	}
	template<> MYFIRSTRTS_API UClass* StaticClass<ARTSBuildingBase>()
	{
		return ARTSBuildingBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSBuildingBase);
	struct Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSBuildingBase, ARTSBuildingBase::StaticClass, TEXT("ARTSBuildingBase"), &Z_Registration_Info_UClass_ARTSBuildingBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSBuildingBase), 2392677596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_2604390708(TEXT("/Script/MyFirstRTS"),
		Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyFirstRTS_Source_MyFirstRTS_Public_RTSBuildingBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
