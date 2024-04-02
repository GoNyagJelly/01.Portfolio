// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/BossAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_BossAnimInstance_generated_h
#error "BossAnimInstance.generated.h already included, missing '#pragma once' in BossAnimInstance.h"
#endif
#define SOULS_BossAnimInstance_generated_h

#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_SPARSE_DATA
#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_BossAttack);


#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_ACCESSORS
#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBossAnimInstance(); \
	friend struct Z_Construct_UClass_UBossAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBossAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(UBossAnimInstance)


#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBossAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBossAnimInstance(UBossAnimInstance&&); \
	NO_API UBossAnimInstance(const UBossAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBossAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossAnimInstance) \
	NO_API virtual ~UBossAnimInstance();


#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_19_PROLOG
#define FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_SPARSE_DATA \
	FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_ACCESSORS \
	FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_BossAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class UBossAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_AI_BossAnimInstance_h


#define FOREACH_ENUM_EBOSSANIMTYPE(op) \
	op(EBossAnimType::Idle) \
	op(EBossAnimType::Walk) \
	op(EBossAnimType::Run) \
	op(EBossAnimType::Attack) \
	op(EBossAnimType::Death) 

enum class EBossAnimType : uint8;
template<> struct TIsUEnumClass<EBossAnimType> { enum { Value = true }; };
template<> SOULS_API UEnum* StaticEnum<EBossAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
