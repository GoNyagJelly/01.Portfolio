// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "PlayerCharacter.h"
#include "MainPlayerController.h"

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

UPlayerAnimInstance::UPlayerAnimInstance()
{
	mNormalAttackIndex = 0;
	mNormalAttackEnable = true;
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (IsValid(PlayerCharacter))
	{
		UCharacterMovementComponent* Movement = PlayerCharacter->GetCharacterMovement();

		if (IsValid(Movement))
		{
			mMoveSpeed = Movement->Velocity.Length();

			mMoveSpeed /= Movement->MaxWalkSpeed;
		}

		AMainPlayerController* Controller = PlayerCharacter->GetController<AMainPlayerController>();

		if (IsValid(Controller))
		{
			mMoveDir = Controller->GetMoveDir();
		}
	}
}

void UPlayerAnimInstance::PlayNormalAttackMontage()
{
	if (!mNormalAttackEnable)
		return;

	mNormalAttackEnable = false;

	if (!Montage_IsPlaying(mNormalAttackMontageArray[mNormalAttackIndex]))
	{
		Montage_SetPosition(mNormalAttackMontageArray[mNormalAttackIndex], 0.f);

		Montage_Play(mNormalAttackMontageArray[mNormalAttackIndex]);

		mNormalAttackIndex = (mNormalAttackIndex + 1) % mNormalAttackMontageArray.Num();

	}
}

void UPlayerAnimInstance::AnimNotify_NormalAttack()
{
}

void UPlayerAnimInstance::AnimNotify_NormalAttackEnable()
{
	mNormalAttackEnable = true;
}

void UPlayerAnimInstance::AnimNotify_NormalAttackEnd()
{
	mNormalAttackEnable = true;
	mNormalAttackIndex = 0;
}
