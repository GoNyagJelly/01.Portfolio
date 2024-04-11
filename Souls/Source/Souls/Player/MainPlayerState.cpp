// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerState.h"
#include "MainPlayerController.h"
#include "../UI/MainViewportWidget.h"

AMainPlayerState::AMainPlayerState()
{
	static ConstructorHelpers::FObjectFinder<UDataTable>	PlayerDataAsset(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Main/DT_PlayerData.DT_PlayerData'"));

	if (PlayerDataAsset.Succeeded())
		mPlayerDataTable = PlayerDataAsset.Object;
}

void AMainPlayerState::BeginPlay()
{
	Super::BeginPlay();

	FPlayerData* Data = mPlayerDataTable->FindRow<FPlayerData>(TEXT("Player"), TEXT(""));

	if (Data)
	{
		mNormalAttackPoint = Data->mNormalAttackPoint;
		mPowerAttackPoint = Data->mPowerAttackPoint;
		mArmorPoint = Data->mArmorPoint;
		mHP = Data->mHPMax;
		mHPMax = Data->mHPMax;
		mMP = Data->mMPMax;
		mMPMax = Data->mMPMax;
		mMoveSpeed = Data->mMoveSpeed;
		mAttackDistance = Data->mAttackDistance;
	}

	AMainPlayerController* Controller = GetWorld()->GetWorld()->GetFirstPlayerController<AMainPlayerController>();

	Controller->GetMainWidget()->SetHP(mHP, mHPMax);
	Controller->GetMainWidget()->SetMP(mMP, mMPMax);
}
