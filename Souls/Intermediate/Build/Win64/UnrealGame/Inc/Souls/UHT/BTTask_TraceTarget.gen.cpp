// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/AIModule/BTTask_TraceTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_TraceTarget() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	SOULS_API UClass* Z_Construct_UClass_UBTTask_TraceTarget();
	SOULS_API UClass* Z_Construct_UClass_UBTTask_TraceTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UBTTask_TraceTarget::StaticRegisterNativesUBTTask_TraceTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_TraceTarget);
	UClass* Z_Construct_UClass_UBTTask_TraceTarget_NoRegister()
	{
		return UBTTask_TraceTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_TraceTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_TraceTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_TraceTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_TraceTarget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/AIModule/BTTask_TraceTarget.h" },
		{ "ModuleRelativePath", "AI/AIModule/BTTask_TraceTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_TraceTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_TraceTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_TraceTarget_Statics::ClassParams = {
		&UBTTask_TraceTarget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_TraceTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_TraceTarget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTTask_TraceTarget()
	{
		if (!Z_Registration_Info_UClass_UBTTask_TraceTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_TraceTarget.OuterSingleton, Z_Construct_UClass_UBTTask_TraceTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_TraceTarget.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UBTTask_TraceTarget>()
	{
		return UBTTask_TraceTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_TraceTarget);
	UBTTask_TraceTarget::~UBTTask_TraceTarget() {}
	struct Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTTask_TraceTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTTask_TraceTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_TraceTarget, UBTTask_TraceTarget::StaticClass, TEXT("UBTTask_TraceTarget"), &Z_Registration_Info_UClass_UBTTask_TraceTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_TraceTarget), 439245788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTTask_TraceTarget_h_2648914970(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTTask_TraceTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIModule_BTTask_TraceTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
