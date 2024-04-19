// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/AIPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_AAIPawn();
	SOULS_API UClass* Z_Construct_UClass_AAIPawn_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_UMonsterState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void AAIPawn::StaticRegisterNativesAAIPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIPawn);
	UClass* Z_Construct_UClass_AAIPawn_NoRegister()
	{
		return AAIPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAIPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AIPawn.h" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_mCapsule_MetaData[] = {
		{ "Category", "AIPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_mCapsule = { "mCapsule", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPawn, mCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_mCapsule_MetaData), Z_Construct_UClass_AAIPawn_Statics::NewProp_mCapsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_mMesh_MetaData[] = {
		{ "Category", "AIPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_mMesh = { "mMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPawn, mMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_mMesh_MetaData), Z_Construct_UClass_AAIPawn_Statics::NewProp_mMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_mMovement_MetaData[] = {
		{ "Category", "AIPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_mMovement = { "mMovement", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPawn, mMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_mMovement_MetaData), Z_Construct_UClass_AAIPawn_Statics::NewProp_mMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_mState_MetaData[] = {
		{ "Category", "AIPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_mState = { "mState", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPawn, mState), Z_Construct_UClass_UMonsterState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_mState_MetaData), Z_Construct_UClass_AAIPawn_Statics::NewProp_mState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_mCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_mMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_mMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_mState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPawn_Statics::ClassParams = {
		&AAIPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIPawn()
	{
		if (!Z_Registration_Info_UClass_AAIPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPawn.OuterSingleton, Z_Construct_UClass_AAIPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIPawn.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<AAIPawn>()
	{
		return AAIPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPawn);
	AAIPawn::~AAIPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIPawn, AAIPawn::StaticClass, TEXT("AAIPawn"), &Z_Registration_Info_UClass_AAIPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPawn), 348243491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIPawn_h_3914134194(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_AI_AIPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
