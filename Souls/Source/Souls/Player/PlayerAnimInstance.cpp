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

	mPowerAttackIndex = 0;

	mCanJump = true;

	mAnimType = EPlayerAnimType::Default;

	mAdditiveAlpha = 0.f;
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

			mOnGround = Movement->IsMovingOnGround();

			if (!mOnGround && mAnimType != EPlayerAnimType::Jump &&
				mAnimType != EPlayerAnimType::Fall)
			{
				mAnimType = EPlayerAnimType::Fall;
			}

			// 만약 기본 상태가 아니라면 공격 상태를 비활성화 한다.
			if (mAnimType != EPlayerAnimType::Default)
			{
				mAttackEnable = false;
			}

			// 땅을 밟았는데 상태가 Fall 상태일 경우 다 떨어졌다는 것이다.
			if (mOnGround && mAnimType == EPlayerAnimType::Fall)
			{
				mAttackEnable = true;
			}
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

void UPlayerAnimInstance::PlayPowerAttackMontage()
{
	Montage_Play(mPowerAttackMontageArray[mPowerAttackIndex]);
}

void UPlayerAnimInstance::PlayJump()
{
	mCanJump = false;

	mAnimType = EPlayerAnimType::Jump;

	// 점프 리커버리 몽타주가 재생되고 있다면 재생을 중지한다.
	if (Montage_IsPlaying(mJumpRecoveryAdditiveMontage))
	{
		Montage_Stop(0.1f, mJumpRecoveryAdditiveMontage);
		mAdditiveAlpha = 0.f;
	}
}

void UPlayerAnimInstance::AnimNotify_PowerAttack()
{
}

void UPlayerAnimInstance::AnimNotify_PowerAttackStart()
{
	mNormalAttackEnable = false;
	//AMainPlayerController* Controller = Cast<AMainPlayerController>(TryGetPawnOwner());
	//if (IsValid(Controller))
	//{
	//	mMoveEnable = Controller->GetMoveEnable();
	//}
}

void UPlayerAnimInstance::AnimNotify_PowerAttackEnd()
{
	mNormalAttackIndex = 0;
	mNormalAttackEnable = true;
}
