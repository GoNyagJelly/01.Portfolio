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
	SOULS_API UEnum* Z_Construct_UEnum_Souls_EPlayerAnimType();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAnimType;
	static UEnum* EPlayerAnimType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Souls_EPlayerAnimType, (UObject*)Z_Construct_UPackage__Script_Souls(), TEXT("EPlayerAnimType"));
		}
		return Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton;
	}
	template<> SOULS_API UEnum* StaticEnum<EPlayerAnimType>()
	{
		return EPlayerAnimType_StaticEnum();
	}
	struct Z_Construct_UEnum_Souls_EPlayerAnimType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::Enumerators[] = {
		{ "EPlayerAnimType::Default", (int64)EPlayerAnimType::Default },
		{ "EPlayerAnimType::Jump", (int64)EPlayerAnimType::Jump },
		{ "EPlayerAnimType::Fall", (int64)EPlayerAnimType::Fall },
		{ "EPlayerAnimType::Death", (int64)EPlayerAnimType::Death },
		{ "EPlayerAnimType::PowerAttack", (int64)EPlayerAnimType::PowerAttack },
		{ "EPlayerAnimType::Roll", (int64)EPlayerAnimType::Roll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Death.Name", "EPlayerAnimType::Death" },
		{ "Default.Name", "EPlayerAnimType::Default" },
		{ "Fall.Name", "EPlayerAnimType::Fall" },
		{ "Jump.Name", "EPlayerAnimType::Jump" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
		{ "PowerAttack.Name", "EPlayerAnimType::PowerAttack" },
		{ "Roll.Name", "EPlayerAnimType::Roll" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Souls,
		nullptr,
		"EPlayerAnimType",
		"EPlayerAnimType",
		Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Souls_EPlayerAnimType()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton, Z_Construct_UEnum_Souls_EPlayerAnimType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_JumpRecoveryEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_JumpRecoveryEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_FallEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_FallEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_TransitionFall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_TransitionFall();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_PowerAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_PowerAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_PowerAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_PowerAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_PowerAttackStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_PowerAttackStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_NormalAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NormalAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_NormalAttackEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NormalAttackEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execAnimNotify_NormalAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NormalAttack();
		P_NATIVE_END;
	}
	void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
	{
		UClass* Class = UPlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_FallEnd", &UPlayerAnimInstance::execAnimNotify_FallEnd },
			{ "AnimNotify_JumpRecoveryEnd", &UPlayerAnimInstance::execAnimNotify_JumpRecoveryEnd },
			{ "AnimNotify_NormalAttack", &UPlayerAnimInstance::execAnimNotify_NormalAttack },
			{ "AnimNotify_NormalAttackEnable", &UPlayerAnimInstance::execAnimNotify_NormalAttackEnable },
			{ "AnimNotify_NormalAttackEnd", &UPlayerAnimInstance::execAnimNotify_NormalAttackEnd },
			{ "AnimNotify_PowerAttack", &UPlayerAnimInstance::execAnimNotify_PowerAttack },
			{ "AnimNotify_PowerAttackEnd", &UPlayerAnimInstance::execAnimNotify_PowerAttackEnd },
			{ "AnimNotify_PowerAttackStart", &UPlayerAnimInstance::execAnimNotify_PowerAttackStart },
			{ "AnimNotify_TransitionFall", &UPlayerAnimInstance::execAnimNotify_TransitionFall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_FallEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_JumpRecoveryEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_NormalAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_NormalAttackEnable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_NormalAttackEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_PowerAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_PowerAttackEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_PowerAttackStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "AnimNotify_TransitionFall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
	UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_mRollMontageArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mRollMontageArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mRollMontageArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mAnimType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAnimType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mAnimType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mOnGround_MetaData[];
#endif
		static void NewProp_mOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mJumpRecoveryAdditiveMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mJumpRecoveryAdditiveMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAdditiveAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mAdditiveAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_FallEnd, "AnimNotify_FallEnd" }, // 1991637975
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_JumpRecoveryEnd, "AnimNotify_JumpRecoveryEnd" }, // 665652283
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttack, "AnimNotify_NormalAttack" }, // 2958216380
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnable, "AnimNotify_NormalAttackEnable" }, // 512411190
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_NormalAttackEnd, "AnimNotify_NormalAttackEnd" }, // 2117490160
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttack, "AnimNotify_PowerAttack" }, // 1173555985
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackEnd, "AnimNotify_PowerAttackEnd" }, // 143241588
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_PowerAttackStart, "AnimNotify_PowerAttackStart" }, // 2186711288
		{ &Z_Construct_UFunction_UPlayerAnimInstance_AnimNotify_TransitionFall, "AnimNotify_TransitionFall" }, // 3010938648
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::FuncInfo) < 2048);
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
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mRollMontageArray_Inner = { "mRollMontageArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mRollMontageArray_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mRollMontageArray = { "mRollMontageArray", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mRollMontageArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mRollMontageArray_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mRollMontageArray_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAnimType_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAnimType = { "mAnimType", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mAnimType), Z_Construct_UEnum_Souls_EPlayerAnimType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAnimType_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAnimType_MetaData) }; // 1165080499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mOnGround_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mOnGround_SetBit(void* Obj)
	{
		((UPlayerAnimInstance*)Obj)->mOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mOnGround = { "mOnGround", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mOnGround_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mOnGround_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mJumpRecoveryAdditiveMontage_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mJumpRecoveryAdditiveMontage = { "mJumpRecoveryAdditiveMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mJumpRecoveryAdditiveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mJumpRecoveryAdditiveMontage_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mJumpRecoveryAdditiveMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAdditiveAlpha_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAdditiveAlpha = { "mAdditiveAlpha", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, mAdditiveAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAdditiveAlpha_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAdditiveAlpha_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mMoveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mNormalAttackMontageArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mPowerAttackMontageArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mRollMontageArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mRollMontageArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAnimType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAnimType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mJumpRecoveryAdditiveMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_mAdditiveAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
		&UPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::EnumInfo[] = {
		{ EPlayerAnimType_StaticEnum, TEXT("EPlayerAnimType"), &Z_Registration_Info_UEnum_EPlayerAnimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1165080499U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 1568505602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_2220147815(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
