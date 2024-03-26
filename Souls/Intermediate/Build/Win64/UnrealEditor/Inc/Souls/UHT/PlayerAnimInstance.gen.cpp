// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/Player/PlayerAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	SOULS_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
	UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMoveDir_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMoveDir;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_mNormalAttackMontageArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mNormalAttackMontageArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mNormalAttackMontageArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_mPowerAttackMontageArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPowerAttackMontageArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mPowerAttackMontageArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveSpeed_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveSpeed = { "mMoveSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveSpeed_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveDir_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveDir = { "mMoveDir", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mMoveDir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveDir_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveDir_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray_Inner = { "mNormalAttackMontageArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray = { "mNormalAttackMontageArray", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mNormalAttackMontageArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray_Inner = { "mPowerAttackMontageArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray = { "mPowerAttackMontageArray", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mPowerAttackMontageArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
		&UPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UPlayerAnimInstance>()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
	UPlayerAnimInstance::~UPlayerAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 1634815698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_4266246539(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
