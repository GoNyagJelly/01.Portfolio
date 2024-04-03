// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/BossAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	SOULS_API UClass* Z_Construct_UClass_UBossAnimInstance();
	SOULS_API UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister();
	SOULS_API UEnum* Z_Construct_UEnum_Souls_EBossAnimType();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBossAnimType;
	static UEnum* EBossAnimType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBossAnimType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBossAnimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Souls_EBossAnimType, (UObject*)Z_Construct_UPackage__Script_Souls(), TEXT("EBossAnimType"));
		}
		return Z_Registration_Info_UEnum_EBossAnimType.OuterSingleton;
	}
	template<> SOULS_API UEnum* StaticEnum<EBossAnimType>()
	{
		return EBossAnimType_StaticEnum();
	}
	struct Z_Construct_UEnum_Souls_EBossAnimType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Souls_EBossAnimType_Statics::Enumerators[] = {
		{ "EBossAnimType::Idle", (int64)EBossAnimType::Idle },
		{ "EBossAnimType::Walk", (int64)EBossAnimType::Walk },
		{ "EBossAnimType::Run", (int64)EBossAnimType::Run },
		{ "EBossAnimType::Attack", (int64)EBossAnimType::Attack },
		{ "EBossAnimType::Death", (int64)EBossAnimType::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Souls_EBossAnimType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EBossAnimType::Attack" },
		{ "BlueprintType", "true" },
		{ "Death.Name", "EBossAnimType::Death" },
		{ "Idle.Name", "EBossAnimType::Idle" },
		{ "ModuleRelativePath", "AI/BossAnimInstance.h" },
		{ "Run.Name", "EBossAnimType::Run" },
		{ "Walk.Name", "EBossAnimType::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Souls_EBossAnimType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Souls,
		nullptr,
		"EBossAnimType",
		"EBossAnimType",
		Z_Construct_UEnum_Souls_EBossAnimType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Souls_EBossAnimType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Souls_EBossAnimType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Souls_EBossAnimType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Souls_EBossAnimType()
	{
		if (!Z_Registration_Info_UEnum_EBossAnimType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBossAnimType.InnerSingleton, Z_Construct_UEnum_Souls_EBossAnimType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBossAnimType.InnerSingleton;
	}
	DEFINE_FUNCTION(UBossAnimInstance::execAnimNotify_BossAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_BossAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBossAnimInstance::execAnimNotify_BossAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_BossAttack();
		P_NATIVE_END;
	}
	void UBossAnimInstance::StaticRegisterNativesUBossAnimInstance()
	{
		UClass* Class = UBossAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_BossAttack", &UBossAnimInstance::execAnimNotify_BossAttack },
			{ "AnimNotify_BossAttackEnd", &UBossAnimInstance::execAnimNotify_BossAttackEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/BossAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance, nullptr, "AnimNotify_BossAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/BossAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance, nullptr, "AnimNotify_BossAttackEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossAnimInstance);
	UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister()
	{
		return UBossAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBossAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_mAnimType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAnimType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mAnimType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBossAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBossAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttack, "AnimNotify_BossAttack" }, // 3550956475
		{ &Z_Construct_UFunction_UBossAnimInstance_AnimNotify_BossAttackEnd, "AnimNotify_BossAttackEnd" }, // 3231095016
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AI/BossAnimInstance.h" },
		{ "ModuleRelativePath", "AI/BossAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_mAnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_mAnimType_MetaData[] = {
		{ "Category", "BossAnimInstance" },
		{ "ModuleRelativePath", "AI/BossAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_mAnimType = { "mAnimType", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBossAnimInstance, mAnimType), Z_Construct_UEnum_Souls_EBossAnimType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_mAnimType_MetaData), Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_mAnimType_MetaData) }; // 1656526928
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_mAnimType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_mAnimType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBossAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams = {
		&UBossAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBossAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton, Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UBossAnimInstance>()
	{
		return UBossAnimInstance::StaticClass();
	}
	UBossAnimInstance::UBossAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBossAnimInstance);
	UBossAnimInstance::~UBossAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_Statics::EnumInfo[] = {
		{ EBossAnimType_StaticEnum, TEXT("EBossAnimType"), &Z_Registration_Info_UEnum_EBossAnimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1656526928U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBossAnimInstance, UBossAnimInstance::StaticClass, TEXT("UBossAnimInstance"), &Z_Registration_Info_UClass_UBossAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossAnimInstance), 2285512799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_371786094(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_BossAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
