// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOULS_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UTextBlock* mNameText;
	UProgressBar* mHPBar;
	UProgressBar* mMPBar;

protected:
	virtual void NativeOnInitialized();
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeDestruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	void SetName(const FString& Text);
	void SetHP(int32 HP, int32 HPMax);
	void SetMP(int32 MP, int32 MPMax);
};
