// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAnimInstance.h"
#include "MonsterPawn.h"

void UBossAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	mAnimType = EBossAnimType::Idle;
}

void UBossAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UBossAnimInstance::PlayBossAttackMontage()
{
	if (!Montage_IsPlaying(mBossAttackMontageArray[mBossAttackIndex]))
	{
		mBossAttackIndex = FMath::RandRange(0, mBossAttackMontageArray.Num() - 1);

		Montage_Play(mBossAttackMontageArray[mBossAttackIndex]);
	}
}

void UBossAnimInstance::AnimNotify_BossAttack()
{
	AMonsterPawn* Pawn = Cast<AMonsterPawn>(TryGetPawnOwner());

	Pawn->Attack();
}

void UBossAnimInstance::AnimNotify_BossAttackEnd()
{
	AMonsterPawn* Pawn = Cast<AMonsterPawn>(TryGetPawnOwner());

	Pawn->SetBossAttackEnd(true);
}

void UBossAnimInstance::AnimNotify_DeathEnd()
{
	AMonsterPawn* Pawn = Cast<AMonsterPawn>(TryGetPawnOwner());

	Pawn->OnDissolve();
}
