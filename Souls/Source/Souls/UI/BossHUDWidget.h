// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ProgressBar.h"
#include "Blueprint/UserWidget.h"
#include "BossHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOULS_API UBossHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UProgressBar* mBossHPBar;

protected:
	virtual void NativeOnInitialized();
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeDestruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	void SetBossHP(int32 HP, int32 HPMax);
};
