// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/UI/BossHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossHUDWidget() {}
// Cross Module References
	SOULS_API UClass* Z_Construct_UClass_UBossHUDWidget();
	SOULS_API UClass* Z_Construct_UClass_UBossHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UBossHUDWidget::StaticRegisterNativesUBossHUDWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossHUDWidget);
	UClass* Z_Construct_UClass_UBossHUDWidget_NoRegister()
	{
		return UBossHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBossHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBossHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossHUDWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossHUDWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/BossHUDWidget.h" },
		{ "ModuleRelativePath", "UI/BossHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBossHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossHUDWidget_Statics::ClassParams = {
		&UBossHUDWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBossHUDWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBossHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UBossHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossHUDWidget.OuterSingleton, Z_Construct_UClass_UBossHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBossHUDWidget.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UBossHUDWidget>()
	{
		return UBossHUDWidget::StaticClass();
	}
	UBossHUDWidget::UBossHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBossHUDWidget);
	UBossHUDWidget::~UBossHUDWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_BossHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_BossHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBossHUDWidget, UBossHUDWidget::StaticClass, TEXT("UBossHUDWidget"), &Z_Registration_Info_UClass_UBossHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossHUDWidget), 1038620625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_BossHUDWidget_h_3240273999(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_BossHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_BossHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
