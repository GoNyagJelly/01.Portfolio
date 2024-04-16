// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/MonsterState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterState() {}
// Cross Module References
	SOULS_API UClass* Z_Construct_UClass_UAIState();
	SOULS_API UClass* Z_Construct_UClass_UMonsterState();
	SOULS_API UClass* Z_Construct_UClass_UMonsterState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UMonsterState::StaticRegisterNativesUMonsterState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMonsterState);
	UClass* Z_Construct_UClass_UMonsterState_NoRegister()
	{
		return UMonsterState::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAttackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mAttackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mArmorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mArmorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHPMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mHPMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAttackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mAttackDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIState,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AI/MonsterState.h" },
		{ "ModuleRelativePath", "AI/MonsterState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackPoint_MetaData[] = {
		{ "Category", "MonsterState" },
		{ "ModuleRelativePath", "AI/MonsterState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackPoint = { "mAttackPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonsterState, mAttackPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackPoint_MetaData), Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterState_Statics::NewProp_mArmorPoint_MetaData[] = {
		{ "Category", "MonsterState" },
		{ "ModuleRelativePath", "AI/MonsterState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMonsterState_Statics::NewProp_mArmorPoint = { "mArmorPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonsterState, mArmorPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::NewProp_mArmorPoint_MetaData), Z_Construct_UClass_UMonsterState_Statics::NewProp_mArmorPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterState_Statics::NewProp_mHPMax_MetaData[] = {
		{ "Category", "MonsterState" },
		{ "ModuleRelativePath", "AI/MonsterState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMonsterState_Statics::NewProp_mHPMax = { "mHPMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonsterState, mHPMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::NewProp_mHPMax_MetaData), Z_Construct_UClass_UMonsterState_Statics::NewProp_mHPMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterState_Statics::NewProp_mHP_MetaData[] = {
		{ "Category", "MonsterState" },
		{ "ModuleRelativePath", "AI/MonsterState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMonsterState_Statics::NewProp_mHP = { "mHP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonsterState, mHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::NewProp_mHP_MetaData), Z_Construct_UClass_UMonsterState_Statics::NewProp_mHP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackDistance_MetaData[] = {
		{ "Category", "MonsterState" },
		{ "ModuleRelativePath", "AI/MonsterState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackDistance = { "mAttackDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonsterState, mAttackDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackDistance_MetaData), Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterState_Statics::NewProp_mArmorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterState_Statics::NewProp_mHPMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterState_Statics::NewProp_mHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterState_Statics::NewProp_mAttackDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMonsterState_Statics::ClassParams = {
		&UMonsterState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMonsterState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams), Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMonsterState()
	{
		if (!Z_Registration_Info_UClass_UMonsterState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMonsterState.OuterSingleton, Z_Construct_UClass_UMonsterState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMonsterState.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UMonsterState>()
	{
		return UMonsterState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterState);
	UMonsterState::~UMonsterState() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMonsterState, UMonsterState::StaticClass, TEXT("UMonsterState"), &Z_Registration_Info_UClass_UMonsterState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMonsterState), 2301750314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterState_h_134124584(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
