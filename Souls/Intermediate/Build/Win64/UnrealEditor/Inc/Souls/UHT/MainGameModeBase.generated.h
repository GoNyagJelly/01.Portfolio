// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/MainGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_MainGameModeBase_generated_h
#error "MainGameModeBase.generated.h already included, missing '#pragma once' in MainGameModeBase.h"
#endif
#define SOULS_MainGameModeBase_generated_h

#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_SPARSE_DATA
#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_ACCESSORS
#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameModeBase(); \
	friend struct Z_Construct_UClass_AMainGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMainGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(AMainGameModeBase)


#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameModeBase(AMainGameModeBase&&); \
	NO_API AMainGameModeBase(const AMainGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameModeBase) \
	NO_API virtual ~AMainGameModeBase();


#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_12_PROLOG
#define FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_SPARSE_DATA \
	FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_ACCESSORS \
	FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_GameMode_MainGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class AMainGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_GameMode_MainGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
