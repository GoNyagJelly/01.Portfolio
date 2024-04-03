// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAnimInstance.h"
#include "BossPawn.h"

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
	ABossPawn* Pawn = Cast<ABossPawn>(TryGetPawnOwner());

	Pawn->Attack();
}
