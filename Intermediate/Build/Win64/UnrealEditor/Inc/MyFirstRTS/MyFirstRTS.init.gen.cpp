// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstRTS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyFirstRTS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyFirstRTS()
	{
		if (!Z_Registration_Info_UPackage__Script_MyFirstRTS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyFirstRTS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8B68BEFA,
				0x8445DDC2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyFirstRTS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyFirstRTS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyFirstRTS(Z_Construct_UPackage__Script_MyFirstRTS, TEXT("/Script/MyFirstRTS"), Z_Registration_Info_UPackage__Script_MyFirstRTS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8B68BEFA, 0x8445DDC2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
