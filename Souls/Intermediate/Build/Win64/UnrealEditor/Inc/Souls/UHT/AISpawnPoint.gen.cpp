// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/AISpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnPoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SOULS_API UClass* Z_Construct_UClass_AAIPawn_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_AAISpawnPoint();
	SOULS_API UClass* Z_Construct_UClass_AAISpawnPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void AAISpawnPoint::StaticRegisterNativesAAISpawnPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAISpawnPoint);
	UClass* Z_Construct_UClass_AAISpawnPoint_NoRegister()
	{
		return AAISpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AAISpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mSpawnClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAISpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AISpawnPoint.h" },
		{ "ModuleRelativePath", "AI/AISpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPoint_Statics::NewProp_mSpawnClass_MetaData[] = {
		{ "Category", "AISpawnPoint" },
		{ "ModuleRelativePath", "AI/AISpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAISpawnPoint_Statics::NewProp_mSpawnClass = { "mSpawnClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAISpawnPoint, mSpawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAIPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPoint_Statics::NewProp_mSpawnClass_MetaData), Z_Construct_UClass_AAISpawnPoint_Statics::NewProp_mSpawnClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAISpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPoint_Statics::NewProp_mSpawnClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAISpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAISpawnPoint_Statics::ClassParams = {
		&AAISpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAISpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AAISpawnPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAISpawnPoint()
	{
		if (!Z_Registration_Info_UClass_AAISpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAISpawnPoint.OuterSingleton, Z_Construct_UClass_AAISpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAISpawnPoint.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<AAISpawnPoint>()
	{
		return AAISpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAISpawnPoint);
	AAISpawnPoint::~AAISpawnPoint() {}
	struct Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AISpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AISpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAISpawnPoint, AAISpawnPoint::StaticClass, TEXT("AAISpawnPoint"), &Z_Registration_Info_UClass_AAISpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAISpawnPoint), 3869310781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AISpawnPoint_h_3843688769(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AISpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AISpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
