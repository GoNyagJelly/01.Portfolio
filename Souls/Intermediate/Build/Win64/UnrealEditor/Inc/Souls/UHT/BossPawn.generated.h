// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/BossPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_BossPawn_generated_h
#error "BossPawn.generated.h already included, missing '#pragma once' in BossPawn.h"
#endif
#define SOULS_BossPawn_generated_h

#define FID_Souls_Source_Souls_AI_BossPawn_h_14_SPARSE_DATA
#define FID_Souls_Source_Souls_AI_BossPawn_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_BossPawn_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_BossPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Souls_Source_Souls_AI_BossPawn_h_14_ACCESSORS
#define FID_Souls_Source_Souls_AI_BossPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossPawn(); \
	friend struct Z_Construct_UClass_ABossPawn_Statics; \
public: \
	DECLARE_CLASS(ABossPawn, AAIPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(ABossPawn)


#define FID_Souls_Source_Souls_AI_BossPawn_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABossPawn(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABossPawn(ABossPawn&&); \
	NO_API ABossPawn(const ABossPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossPawn) \
	NO_API virtual ~ABossPawn();


#define FID_Souls_Source_Souls_AI_BossPawn_h_11_PROLOG
#define FID_Souls_Source_Souls_AI_BossPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_AI_BossPawn_h_14_SPARSE_DATA \
	FID_Souls_Source_Souls_AI_BossPawn_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_BossPawn_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_BossPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_BossPawn_h_14_ACCESSORS \
	FID_Souls_Source_Souls_AI_BossPawn_h_14_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_BossPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class ABossPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_AI_BossPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
