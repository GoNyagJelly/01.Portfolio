// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/MonsterPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_MonsterPawn_generated_h
#error "MonsterPawn.generated.h already included, missing '#pragma once' in MonsterPawn.h"
#endif
#define SOULS_MonsterPawn_generated_h

#define FID_Souls_Source_Souls_AI_MonsterPawn_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMonsterData_Statics; \
	SOULS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SOULS_API UScriptStruct* StaticStruct<struct FMonsterData>();

#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_SPARSE_DATA
#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_ACCESSORS
#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterPawn(); \
	friend struct Z_Construct_UClass_AMonsterPawn_Statics; \
public: \
	DECLARE_CLASS(AMonsterPawn, AAIPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(AMonsterPawn)


#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterPawn(AMonsterPawn&&); \
	NO_API AMonsterPawn(const AMonsterPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterPawn) \
	NO_API virtual ~AMonsterPawn();


#define FID_Souls_Source_Souls_AI_MonsterPawn_h_34_PROLOG
#define FID_Souls_Source_Souls_AI_MonsterPawn_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_AI_MonsterPawn_h_37_SPARSE_DATA \
	FID_Souls_Source_Souls_AI_MonsterPawn_h_37_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_MonsterPawn_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_MonsterPawn_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_MonsterPawn_h_37_ACCESSORS \
	FID_Souls_Source_Souls_AI_MonsterPawn_h_37_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_MonsterPawn_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class AMonsterPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_AI_MonsterPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
