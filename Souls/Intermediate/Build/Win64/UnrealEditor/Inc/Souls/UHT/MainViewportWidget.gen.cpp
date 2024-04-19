// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Souls/UI/MainViewportWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainViewportWidget() {}
// Cross Module References
	SOULS_API UClass* Z_Construct_UClass_UBossHUDWidget_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_UMainViewportWidget();
	SOULS_API UClass* Z_Construct_UClass_UMainViewportWidget_NoRegister();
	SOULS_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Souls();
// End Cross Module References
	void UMainViewportWidget::StaticRegisterNativesUMainViewportWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainViewportWidget);
	UClass* Z_Construct_UClass_UMainViewportWidget_NoRegister()
	{
		return UMainViewportWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainViewportWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UI_PlayerHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UI_PlayerHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UI_BossHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UI_BossHUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainViewportWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Souls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainViewportWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainViewportWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/MainViewportWidget.h" },
		{ "ModuleRelativePath", "UI/MainViewportWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_PlayerHUD_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainViewportWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_PlayerHUD = { "UI_PlayerHUD", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainViewportWidget, UI_PlayerHUD), Z_Construct_UClass_UPlayerHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_PlayerHUD_MetaData), Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_PlayerHUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_BossHUD_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainViewportWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_BossHUD = { "UI_BossHUD", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainViewportWidget, UI_BossHUD), Z_Construct_UClass_UBossHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_BossHUD_MetaData), Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_BossHUD_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainViewportWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_PlayerHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainViewportWidget_Statics::NewProp_UI_BossHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainViewportWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainViewportWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainViewportWidget_Statics::ClassParams = {
		&UMainViewportWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainViewportWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainViewportWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainViewportWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainViewportWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainViewportWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainViewportWidget()
	{
		if (!Z_Registration_Info_UClass_UMainViewportWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainViewportWidget.OuterSingleton, Z_Construct_UClass_UMainViewportWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainViewportWidget.OuterSingleton;
	}
	template<> SOULS_API UClass* StaticClass<UMainViewportWidget>()
	{
		return UMainViewportWidget::StaticClass();
	}
	UMainViewportWidget::UMainViewportWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainViewportWidget);
	UMainViewportWidget::~UMainViewportWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_MainViewportWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_MainViewportWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainViewportWidget, UMainViewportWidget::StaticClass, TEXT("UMainViewportWidget"), &Z_Registration_Info_UClass_UMainViewportWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainViewportWidget), 1770430943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_MainViewportWidget_h_3829854245(TEXT("/Script/Souls"),
		Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_MainViewportWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kwon_Desktop_Portfolio_Souls_Source_Souls_UI_MainViewportWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
