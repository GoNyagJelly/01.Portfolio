// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_PlayerAnimInstance_generated_h
#error "PlayerAnimInstance.generated.h already included, missing '#pragma once' in PlayerAnimInstance.h"
#endif
#define SOULS_PlayerAnimInstance_generated_h

#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_SPARSE_DATA
#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_JumpRecoveryEnd); \
	DECLARE_FUNCTION(execAnimNotify_FallEnd); \
	DECLARE_FUNCTION(execAnimNotify_TransitionFall); \
	DECLARE_FUNCTION(execAnimNotify_PowerAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_PowerAttack); \
	DECLARE_FUNCTION(execAnimNotify_PowerAttackStart); \
	DECLARE_FUNCTION(execAnimNotify_NormalAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_NormalAttackEnable); \
	DECLARE_FUNCTION(execAnimNotify_NormalAttack);


#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_ACCESSORS
#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInstance(UPlayerAnimInstance&&); \
	NO_API UPlayerAnimInstance(const UPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAnimInstance) \
	NO_API virtual ~UPlayerAnimInstance();


#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_23_PROLOG
#define FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_SPARSE_DATA \
	FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_ACCESSORS \
	FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_Player_PlayerAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class UPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_Player_PlayerAnimInstance_h


#define FOREACH_ENUM_EPLAYERANIMTYPE(op) \
	op(EPlayerAnimType::Default) \
	op(EPlayerAnimType::Jump) \
	op(EPlayerAnimType::Fall) \
	op(EPlayerAnimType::Death) \
	op(EPlayerAnimType::PowerAttack) 

enum class EPlayerAnimType : uint8;
template<> struct TIsUEnumClass<EPlayerAnimType> { enum { Value = true }; };
template<> SOULS_API UEnum* StaticEnum<EPlayerAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
