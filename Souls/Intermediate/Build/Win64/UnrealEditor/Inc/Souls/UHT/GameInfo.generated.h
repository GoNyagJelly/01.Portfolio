// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULS_GameInfo_generated_h
#error "GameInfo.generated.h already included, missing '#pragma once' in GameInfo.h"
#endif
#define SOULS_GameInfo_generated_h

#define FID_Souls_Source_Souls_GameInfo_h_24_SPARSE_DATA
#define FID_Souls_Source_Souls_GameInfo_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_GameInfo_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Souls_Source_Souls_GameInfo_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Souls_Source_Souls_GameInfo_h_24_ACCESSORS
#define FID_Souls_Source_Souls_GameInfo_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInfo(); \
	friend struct Z_Construct_UClass_UGameInfo_Statics; \
public: \
	DECLARE_CLASS(UGameInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Souls"), NO_API) \
	DECLARE_SERIALIZER(UGameInfo)


#define FID_Souls_Source_Souls_GameInfo_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInfo(UGameInfo&&); \
	NO_API UGameInfo(const UGameInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInfo) \
	NO_API virtual ~UGameInfo();


#define FID_Souls_Source_Souls_GameInfo_h_21_PROLOG
#define FID_Souls_Source_Souls_GameInfo_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Souls_Source_Souls_GameInfo_h_24_SPARSE_DATA \
	FID_Souls_Source_Souls_GameInfo_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_GameInfo_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Souls_Source_Souls_GameInfo_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_GameInfo_h_24_ACCESSORS \
	FID_Souls_Source_Souls_GameInfo_h_24_INCLASS_NO_PURE_DECLS \
	FID_Souls_Source_Souls_GameInfo_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULS_API UClass* StaticClass<class UGameInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Souls_Source_Souls_GameInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
