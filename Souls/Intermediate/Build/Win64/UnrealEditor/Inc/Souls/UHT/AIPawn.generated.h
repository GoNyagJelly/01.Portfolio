// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AIPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_AIPawn_generated_h
#error "AIPawn.generated.h already included, missing '#pragma once' in AIPawn.h"
#endif
#define SOULS_AIPawn_generated_h

#define FID_Souls_Source_Souls_AI_AIPawn_h_12_SPARSE_DATA
#define FID_Souls_Source_Souls_AI_AIPawn_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_AIPawn_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_AIPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Souls_Source_Souls_AI_AIPawn_h_12_ACCESSORS
#define FID_Souls_Source_Souls_AI_AIPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPawn(); \
	friend struct Z_Construct_UClass_AAIPawn_Statics; \
public: \
	DECLARE_CLASS(AAIPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(AAIPawn)


#define FID_Souls_Source_Souls_AI_AIPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPawn(AAIPawn&&); \
	NO_API AAIPawn(const AAIPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIPawn) \
	NO_API virtual ~AAIPawn();


#define FID_Souls_Source_Souls_AI_AIPawn_h_9_PROLOG
#define FID_Souls_Source_Souls_AI_AIPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_AI_AIPawn_h_12_SPARSE_DATA \
	FID_Souls_Source_Souls_AI_AIPawn_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_AIPawn_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_AIPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_AIPawn_h_12_ACCESSORS \
	FID_Souls_Source_Souls_AI_AIPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_AIPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class AAIPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_AI_AIPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
