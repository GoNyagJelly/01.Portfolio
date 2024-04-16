// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/AIModule/BTService_DetectTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_DetectTarget() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	SOULS_API UClass* Z_Construct_UClass_UBTService_DetectTarget();
	SOULS_API UClass* Z_Construct_UClass_UBTService_DetectTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UBTService_DetectTarget::StaticRegisterNativesUBTService_DetectTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_DetectTarget);
	UClass* Z_Construct_UClass_UBTService_DetectTarget_NoRegister()
	{
		return UBTService_DetectTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_DetectTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_DetectTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_DetectTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_DetectTarget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/AIModule/BTService_DetectTarget.h" },
		{ "ModuleRelativePath", "AI/AIModule/BTService_DetectTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_DetectTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_DetectTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_DetectTarget_Statics::ClassParams = {
		&UBTService_DetectTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_DetectTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_DetectTarget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTService_DetectTarget()
	{
		if (!Z_Registration_Info_UClass_UBTService_DetectTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_DetectTarget.OuterSingleton, Z_Construct_UClass_UBTService_DetectTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_DetectTarget.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UBTService_DetectTarget>()
	{
		return UBTService_DetectTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_DetectTarget);
	UBTService_DetectTarget::~UBTService_DetectTarget() {}
	struct Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTService_DetectTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTService_DetectTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_DetectTarget, UBTService_DetectTarget::StaticClass, TEXT("UBTService_DetectTarget"), &Z_Registration_Info_UClass_UBTService_DetectTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_DetectTarget), 2952271979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTService_DetectTarget_h_1017288895(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTService_DetectTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTService_DetectTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
