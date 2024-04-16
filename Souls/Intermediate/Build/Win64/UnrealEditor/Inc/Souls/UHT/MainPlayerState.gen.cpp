// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/Player/MainPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SOULS_API UClass* Z_Construct_UClass_AMainPlayerState();
	SOULS_API UClass* Z_Construct_UClass_AMainPlayerState_NoRegister();
	SOULS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerData;
class UScriptStruct* FPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerData, (UObject*)Z_Construct_UPackage__Script_Souls(), TEXT("PlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton;
}
template<> SOULS_API UScriptStruct* StaticStruct<FPlayerData>()
{
	return FPlayerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mNormalAttackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mNormalAttackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPowerAttackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mPowerAttackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mArmorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mArmorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHPMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mHPMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMPMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mMPMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAttackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mAttackDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mNormalAttackPoint_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mNormalAttackPoint = { "mNormalAttackPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, mNormalAttackPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mNormalAttackPoint_MetaData), Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mNormalAttackPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mPowerAttackPoint_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mPowerAttackPoint = { "mPowerAttackPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, mPowerAttackPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mPowerAttackPoint_MetaData), Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mPowerAttackPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mArmorPoint_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mArmorPoint = { "mArmorPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, mArmorPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mArmorPoint_MetaData), Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mArmorPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mHPMax_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mHPMax = { "mHPMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, mHPMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mHPMax_MetaData), Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mHPMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMPMax_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMPMax = { "mMPMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, mMPMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMPMax_MetaData), Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMPMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMoveSpeed_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMoveSpeed = { "mMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, mMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMoveSpeed_MetaData), Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mAttackDistance_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mAttackDistance = { "mAttackDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, mAttackDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mAttackDistance_MetaData), Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mAttackDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mNormalAttackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mPowerAttackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mArmorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mHPMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMPMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_mAttackDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerData",
		Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers),
		sizeof(FPlayerData),
		alignof(FPlayerData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton;
	}
	void AMainPlayerState::StaticRegisterNativesAMainPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayerState);
	UClass* Z_Construct_UClass_AMainPlayerState_NoRegister()
	{
		return AMainPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/MainPlayerState.h" },
		{ "ModuleRelativePath", "Player/MainPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerState_Statics::ClassParams = {
		&AMainPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMainPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMainPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayerState.OuterSingleton, Z_Construct_UClass_AMainPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainPlayerState.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<AMainPlayerState>()
	{
		return AMainPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerState);
	AMainPlayerState::~AMainPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_Statics::ScriptStructInfo[] = {
		{ FPlayerData::StaticStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps, TEXT("PlayerData"), &Z_Registration_Info_UScriptStruct_PlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerData), 2243530467U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayerState, AMainPlayerState::StaticClass, TEXT("AMainPlayerState"), &Z_Registration_Info_UClass_AMainPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayerState), 2835377519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_4253268566(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_MainPlayerState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
