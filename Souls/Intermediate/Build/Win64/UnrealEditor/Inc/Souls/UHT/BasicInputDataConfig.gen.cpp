// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/Input/BasicInputDataConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicInputDataConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOULS_API UClass* Z_Construct_UClass_UMainInputDataConfig();
	SOULS_API UClass* Z_Construct_UClass_UMainInputDataConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UMainInputDataConfig::StaticRegisterNativesUMainInputDataConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainInputDataConfig);
	UClass* Z_Construct_UClass_UMainInputDataConfig_NoRegister()
	{
		return UMainInputDataConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMainInputDataConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainInputDataConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainInputDataConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainInputDataConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Input/BasicInputDataConfig.h" },
		{ "ModuleRelativePath", "Input/BasicInputDataConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainInputDataConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainInputDataConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainInputDataConfig_Statics::ClassParams = {
		&UMainInputDataConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainInputDataConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainInputDataConfig_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMainInputDataConfig()
	{
		if (!Z_Registration_Info_UClass_UMainInputDataConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainInputDataConfig.OuterSingleton, Z_Construct_UClass_UMainInputDataConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainInputDataConfig.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UMainInputDataConfig>()
	{
		return UMainInputDataConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainInputDataConfig);
	UMainInputDataConfig::~UMainInputDataConfig() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Input_BasicInputDataConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Input_BasicInputDataConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainInputDataConfig, UMainInputDataConfig::StaticClass, TEXT("UMainInputDataConfig"), &Z_Registration_Info_UClass_UMainInputDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainInputDataConfig), 2657038521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Input_BasicInputDataConfig_h_1250967476(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Input_BasicInputDataConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Input_BasicInputDataConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
