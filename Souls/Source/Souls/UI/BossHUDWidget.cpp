// Fill out your copyright notice in the Description page of Project Settings.


#include "BossHUDWidget.h"

void UBossHUDWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UBossHUDWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void UBossHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	mBossHPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("BossHPBar")));
}

void UBossHUDWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UBossHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UBossHUDWidget::SetHP(int32 HP, int32 HPMax)
{
	mBossHPBar->SetPercent(HP / (float)HPMax);
}
