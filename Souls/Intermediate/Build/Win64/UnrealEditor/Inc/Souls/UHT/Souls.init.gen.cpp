// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSouls_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Souls;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Souls()
	{
		if (!Z_Registration_Info_UPackage__Script_Souls.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Souls",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x07CD8937,
				0x91467EE7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Souls.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Souls.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Souls(Z_Construct_UPackage__Script_Souls, TEXT("/Script/Souls"), Z_Registration_Info_UPackage__Script_Souls, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x07CD8937, 0x91467EE7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
