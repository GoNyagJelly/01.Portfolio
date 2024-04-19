// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/MonsterPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterPawn() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SOULS_API UClass* Z_Construct_UClass_AAIPawn();
	SOULS_API UClass* Z_Construct_UClass_AMonsterPawn();
	SOULS_API UClass* Z_Construct_UClass_AMonsterPawn_NoRegister();
	SOULS_API UScriptStruct* Z_Construct_UScriptStruct_FMonsterData();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References

static_assert(std::is_polymorphic<FMonsterData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMonsterData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MonsterData;
class UScriptStruct* FMonsterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MonsterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMonsterData, (UObject*)Z_Construct_UPackage__Script_Souls(), TEXT("MonsterData"));
	}
	return Z_Registration_Info_UScriptStruct_MonsterData.OuterSingleton;
}
template<> SOULS_API UScriptStruct* StaticStruct<FMonsterData>()
{
	return FMonsterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMonsterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAttackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mAttackDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mTraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mTraceDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMonsterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMonsterData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackPoint_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackPoint = { "mAttackPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, mAttackPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackPoint_MetaData), Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mArmorPoint_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mArmorPoint = { "mArmorPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, mArmorPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mArmorPoint_MetaData), Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mArmorPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mHPMax_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mHPMax = { "mHPMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, mHPMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mHPMax_MetaData), Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mHPMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mMoveSpeed_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mMoveSpeed = { "mMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, mMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mMoveSpeed_MetaData), Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mMoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackDistance_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackDistance = { "mAttackDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, mAttackDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackDistance_MetaData), Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mTraceDistance_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mTraceDistance = { "mTraceDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, mTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mTraceDistance_MetaData), Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mTraceDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mArmorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mHPMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mAttackDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_mTraceDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMonsterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MonsterData",
		Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers),
		sizeof(FMonsterData),
		alignof(FMonsterData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMonsterData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMonsterData()
	{
		if (!Z_Registration_Info_UScriptStruct_MonsterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MonsterData.InnerSingleton, Z_Construct_UScriptStruct_FMonsterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MonsterData.InnerSingleton;
	}
	void AMonsterPawn::StaticRegisterNativesAMonsterPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterPawn);
	UClass* Z_Construct_UClass_AMonsterPawn_NoRegister()
	{
		return AMonsterPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/MonsterPawn.h" },
		{ "ModuleRelativePath", "AI/MonsterPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterPawn_Statics::ClassParams = {
		&AMonsterPawn::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMonsterPawn()
	{
		if (!Z_Registration_Info_UClass_AMonsterPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterPawn.OuterSingleton, Z_Construct_UClass_AMonsterPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMonsterPawn.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<AMonsterPawn>()
	{
		return AMonsterPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterPawn);
	AMonsterPawn::~AMonsterPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_Statics::ScriptStructInfo[] = {
		{ FMonsterData::StaticStruct, Z_Construct_UScriptStruct_FMonsterData_Statics::NewStructOps, TEXT("MonsterData"), &Z_Registration_Info_UScriptStruct_MonsterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMonsterData), 1231218209U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterPawn, AMonsterPawn::StaticClass, TEXT("AMonsterPawn"), &Z_Registration_Info_UClass_AMonsterPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterPawn), 3804733612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_2804851032(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_MonsterPawn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
