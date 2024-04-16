// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/Effect/EffectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_AEffectBase();
	SOULS_API UClass* Z_Construct_UClass_AEffectBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	DEFINE_FUNCTION(AEffectBase::execOnParticleFinish)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParticleFinish(Z_Param_Particle);
		P_NATIVE_END;
	}
	void AEffectBase::StaticRegisterNativesAEffectBase()
	{
		UClass* Class = AEffectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnParticleFinish", &AEffectBase::execOnParticleFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics
	{
		struct EffectBase_eventOnParticleFinish_Parms
		{
			UParticleSystemComponent* Particle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::NewProp_Particle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EffectBase_eventOnParticleFinish_Parms, Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::NewProp_Particle_MetaData), Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::NewProp_Particle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect/EffectBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectBase, nullptr, "OnParticleFinish", nullptr, nullptr, Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::EffectBase_eventOnParticleFinish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::EffectBase_eventOnParticleFinish_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEffectBase_OnParticleFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEffectBase_OnParticleFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffectBase);
	UClass* Z_Construct_UClass_AEffectBase_NoRegister()
	{
		return AEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_AEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mAudio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEffectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEffectBase_OnParticleFinish, "OnParticleFinish" }, // 2737018503
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effect/EffectBase.h" },
		{ "ModuleRelativePath", "Effect/EffectBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectBase_Statics::NewProp_mParticle_MetaData[] = {
		{ "Category", "EffectBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/EffectBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_mParticle = { "mParticle", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, mParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::NewProp_mParticle_MetaData), Z_Construct_UClass_AEffectBase_Statics::NewProp_mParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectBase_Statics::NewProp_mAudio_MetaData[] = {
		{ "Category", "EffectBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/EffectBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_mAudio = { "mAudio", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, mAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::NewProp_mAudio_MetaData), Z_Construct_UClass_AEffectBase_Statics::NewProp_mAudio_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_mParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_mAudio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffectBase_Statics::ClassParams = {
		&AEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEffectBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEffectBase()
	{
		if (!Z_Registration_Info_UClass_AEffectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffectBase.OuterSingleton, Z_Construct_UClass_AEffectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEffectBase.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<AEffectBase>()
	{
		return AEffectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectBase);
	AEffectBase::~AEffectBase() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Effect_EffectBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Effect_EffectBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEffectBase, AEffectBase::StaticClass, TEXT("AEffectBase"), &Z_Registration_Info_UClass_AEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffectBase), 3573822496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Effect_EffectBase_h_3550061901(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Effect_EffectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_Effect_EffectBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
