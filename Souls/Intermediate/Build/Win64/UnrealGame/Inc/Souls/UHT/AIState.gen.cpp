// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/AI/AIState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULS_API UClass* Z_Construct_UClass_UAIState();
	SOULS_API UClass* Z_Construct_UClass_UAIState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UAIState::StaticRegisterNativesUAIState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIState);
	UClass* Z_Construct_UClass_UAIState_NoRegister()
	{
		return UAIState::StaticClass();
	}
	struct Z_Construct_UClass_UAIState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mInteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mInteractionDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AI/AIState.h" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_mMoveSpeed_MetaData[] = {
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_mMoveSpeed = { "mMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIState, mMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_mMoveSpeed_MetaData), Z_Construct_UClass_UAIState_Statics::NewProp_mMoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_mInteractionDistance_MetaData[] = {
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_mInteractionDistance = { "mInteractionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIState, mInteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_mInteractionDistance_MetaData), Z_Construct_UClass_UAIState_Statics::NewProp_mInteractionDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_mMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_mInteractionDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIState_Statics::ClassParams = {
		&UAIState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAIState()
	{
		if (!Z_Registration_Info_UClass_UAIState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIState.OuterSingleton, Z_Construct_UClass_UAIState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIState.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UAIState>()
	{
		return UAIState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIState);
	UAIState::~UAIState() {}
	struct Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIState, UAIState::StaticClass, TEXT("UAIState"), &Z_Registration_Info_UClass_UAIState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIState), 28422611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIState_h_2667726738(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Souls_Source_Souls_AI_AIState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
