// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterState.h"
#include "MonsterPawn.h"
#include "../Player/MainPlayerController.h"
#include "../UI/MainViewportWidget.h"

UMonsterState::UMonsterState()
{
}

void UMonsterState::BeginPlay()
{
	Super::BeginPlay();

	const FMonsterData* Data = AMonsterPawn::FindMonsterData(mDataTableRowName);

	if (Data)
	{
		mMoveSpeed = Data->mMoveSpeed;
		mInteractionDistance = Data->mTraceDistance;
		mAttackPoint = Data->mAttackPoint;
		mArmorPoint = Data->mArmorPoint;
		mHPMax = Data->mHPMax;
		mHP = Data->mHPMax;
		mAttackDistance = Data->mAttackDistance;
	}
}