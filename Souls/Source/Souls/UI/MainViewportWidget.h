// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "MainViewportWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOULS_API UMainViewportWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta=(BindWidget))
	class UPlayerHUDWidget* UI_PlayerHUD;

	UPROPERTY(meta = (BindWidget))
	class UBossHUDWidget* UI_BossHUD;

public:
	void SetName(const FString& Text);
	void SetHP(int32 HP, int32 HPMax);
	void SetMP(int32 MP, int32 MPMax);
	void SetBossHP(int32 HP, int32 HPMax);
};
