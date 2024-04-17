// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AIState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_AIState_generated_h
#error "AIState.generated.h already included, missing '#pragma once' in AIState.h"
#endif
#define SOULS_AIState_generated_h

#define FID_Souls_Source_Souls_AI_AIState_h_13_SPARSE_DATA
#define FID_Souls_Source_Souls_AI_AIState_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_AIState_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_AI_AIState_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Souls_Source_Souls_AI_AIState_h_13_ACCESSORS
#define FID_Souls_Source_Souls_AI_AIState_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIState(); \
	friend struct Z_Construct_UClass_UAIState_Statics; \
public: \
	DECLARE_CLASS(UAIState, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(UAIState)


#define FID_Souls_Source_Souls_AI_AIState_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIState(UAIState&&); \
	NO_API UAIState(const UAIState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIState) \
	NO_API virtual ~UAIState();


#define FID_Souls_Source_Souls_AI_AIState_h_10_PROLOG
#define FID_Souls_Source_Souls_AI_AIState_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_AI_AIState_h_13_SPARSE_DATA \
	FID_Souls_Source_Souls_AI_AIState_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_AIState_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_AI_AIState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_AIState_h_13_ACCESSORS \
	FID_Souls_Source_Souls_AI_AIState_h_13_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_AI_AIState_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class UAIState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_AI_AIState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
