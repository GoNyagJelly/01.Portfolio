// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/BossPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossPawn() {}
// Cross Module References
	SOULS_API UClass* Z_Construct_UClass_AAIPawn();
	SOULS_API UClass* Z_Construct_UClass_ABossPawn();
	SOULS_API UClass* Z_Construct_UClass_ABossPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void ABossPawn::StaticRegisterNativesABossPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABossPawn);
	UClass* Z_Construct_UClass_ABossPawn_NoRegister()
	{
		return ABossPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABossPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABossPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/BossPawn.h" },
		{ "ModuleRelativePath", "AI/BossPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABossPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABossPawn_Statics::ClassParams = {
		&ABossPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABossPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABossPawn()
	{
		if (!Z_Registration_Info_UClass_ABossPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABossPawn.OuterSingleton, Z_Construct_UClass_ABossPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABossPawn.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<ABossPawn>()
	{
		return ABossPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABossPawn);
	ABossPawn::~ABossPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_BossPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_BossPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABossPawn, ABossPawn::StaticClass, TEXT("ABossPawn"), &Z_Registration_Info_UClass_ABossPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossPawn), 1183173068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_BossPawn_h_1924893204(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_BossPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_BossPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
