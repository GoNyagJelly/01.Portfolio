// Fill out your copyright notice in the Description page of Project Settings.


#include "MainViewportWidget.h"
#include "PlayerHUDWidget.h"
#include "BossHUDWidget.h"

void UMainViewportWidget::SetName(const FString& Text)
{
	UI_PlayerHUD->SetName(Text);
}

void UMainViewportWidget::SetHP(int32 HP, int32 HPMax)
{
	UI_PlayerHUD->SetHP(HP, HPMax);
}

void UMainViewportWidget::SetMP(int32 MP, int32 MPMax)
{
	UI_PlayerHUD->SetMP(MP, MPMax);
}

void UMainViewportWidget::SetBossHP(int32 HP, int32 HPMax)
{
	UI_BossHUD->SetBossHP(HP, HPMax);
}
