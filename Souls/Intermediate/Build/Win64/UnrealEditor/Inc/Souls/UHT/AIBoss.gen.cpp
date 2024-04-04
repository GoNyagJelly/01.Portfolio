// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/AIBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBoss() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_AAIBoss();
	SOULS_API UClass* Z_Construct_UClass_AAIBoss_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_AMonsterPawn();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void AAIBoss::StaticRegisterNativesAAIBoss()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIBoss);
	UClass* Z_Construct_UClass_AAIBoss_NoRegister()
	{
		return AAIBoss::StaticClass();
	}
	struct Z_Construct_UClass_AAIBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mRightWeaponCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mRightWeaponCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mLeftWeaponCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mLeftWeaponCapsule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMonsterPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBoss_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBoss_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AIBoss.h" },
		{ "ModuleRelativePath", "AI/AIBoss.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBoss_Statics::NewProp_mRightWeaponCapsule_MetaData[] = {
		{ "Category", "AIBoss" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIBoss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIBoss_Statics::NewProp_mRightWeaponCapsule = { "mRightWeaponCapsule", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIBoss, mRightWeaponCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBoss_Statics::NewProp_mRightWeaponCapsule_MetaData), Z_Construct_UClass_AAIBoss_Statics::NewProp_mRightWeaponCapsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBoss_Statics::NewProp_mLeftWeaponCapsule_MetaData[] = {
		{ "Category", "AIBoss" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIBoss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIBoss_Statics::NewProp_mLeftWeaponCapsule = { "mLeftWeaponCapsule", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIBoss, mLeftWeaponCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBoss_Statics::NewProp_mLeftWeaponCapsule_MetaData), Z_Construct_UClass_AAIBoss_Statics::NewProp_mLeftWeaponCapsule_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIBoss_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBoss_Statics::NewProp_mRightWeaponCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBoss_Statics::NewProp_mLeftWeaponCapsule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIBoss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIBoss_Statics::ClassParams = {
		&AAIBoss::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIBoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIBoss_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIBoss_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBoss_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIBoss()
	{
		if (!Z_Registration_Info_UClass_AAIBoss.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIBoss.OuterSingleton, Z_Construct_UClass_AAIBoss_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIBoss.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<AAIBoss>()
	{
		return AAIBoss::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIBoss);
	AAIBoss::~AAIBoss() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIBoss_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIBoss_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIBoss, AAIBoss::StaticClass, TEXT("AAIBoss"), &Z_Registration_Info_UClass_AAIBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIBoss), 1246358480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIBoss_h_1794602134(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIBoss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
