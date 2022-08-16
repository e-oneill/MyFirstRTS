// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstRTS_init() {}
	MYFIRSTRTS_API UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnAttributeChangedSignature__DelegateSignature();
	MYFIRSTRTS_API UFunction* Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyFirstRTS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyFirstRTS()
	{
		if (!Z_Registration_Info_UPackage__Script_MyFirstRTS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyFirstRTS_OnAttributeChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MyFirstRTS_OnConstructionSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyFirstRTS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB5558784,
				0xA151F3AA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyFirstRTS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyFirstRTS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyFirstRTS(Z_Construct_UPackage__Script_MyFirstRTS, TEXT("/Script/MyFirstRTS"), Z_Registration_Info_UPackage__Script_MyFirstRTS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB5558784, 0xA151F3AA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
