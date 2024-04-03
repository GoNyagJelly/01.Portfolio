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
