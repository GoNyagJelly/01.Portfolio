// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "PlayerCharacter.h"
#include "MainPlayerController.h"
#include "MainPlayerState.h"
#include "../UI/MainViewportWidget.h"

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

			if (mAnimType != EPlayerAnimType::Default)
			{
				mNormalAttackEnable = false;
			}

			if (mOnGround && mAnimType == EPlayerAnimType::Fall)
			{
				mNormalAttackEnable = true;
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
	APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());

	PlayerCharacter->NormalAttack();
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
	if (!Montage_IsPlaying(mPowerAttackMontageArray[mPowerAttackIndex]))
	{
		Montage_SetPosition(mPowerAttackMontageArray[mPowerAttackIndex], 0.f);

		Montage_Play(mPowerAttackMontageArray[mPowerAttackIndex]);

		mAnimType = EPlayerAnimType::PowerAttack;

		mNormalAttackEnable = true;
	}
}

void UPlayerAnimInstance::PlayJump()
{
	mCanJump = false;

	mAnimType = EPlayerAnimType::Jump;

	if (Montage_IsPlaying(mJumpRecoveryAdditiveMontage))
	{
		Montage_Stop(0.1f, mJumpRecoveryAdditiveMontage);
		mAdditiveAlpha = 0.f;
	}
}

void UPlayerAnimInstance::PlayRollMontage()
{
	if (!Montage_IsPlaying(mRollMontageArray[mRollIndex]))
	{
		Montage_SetPosition(mRollMontageArray[mRollIndex], 0.f);

		Montage_Play(mRollMontageArray[mRollIndex]);

		mAnimType = EPlayerAnimType::Roll;
	}
}

void UPlayerAnimInstance::PlayDeathMontage()
{
	mAnimType = EPlayerAnimType::Death;

	APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());

	PlayerCharacter->Death();

	mNormalAttackEnable = false;
	mCanJump = false;

	AMainPlayerController* PlayerController = TryGetPawnOwner()->GetController<AMainPlayerController>();
	if (IsValid(PlayerController))
	{
		PlayerController->mMoveEnable = false;
	}
}

void UPlayerAnimInstance::AnimNotify_PowerAttack()
{
	APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());

	PlayerCharacter->PowerAttack();
}

void UPlayerAnimInstance::AnimNotify_PowerAttackStart()
{
	AMainPlayerController* PlayerController = TryGetPawnOwner()->GetController<AMainPlayerController>();
	if (IsValid(PlayerController))
	{
		PlayerController->mMoveEnable = false;
	}
}

void UPlayerAnimInstance::AnimNotify_PowerAttackEnd()
{
	mAnimType = EPlayerAnimType::Default;

	mNormalAttackEnable = true;
	mNormalAttackIndex = 0;

	AMainPlayerController* PlayerController = TryGetPawnOwner()->GetController<AMainPlayerController>();
	if (IsValid(PlayerController))
	{
		PlayerController->mMoveEnable = true;
	}


}

void UPlayerAnimInstance::AnimNotify_TransitionFall()
{
	mAnimType = EPlayerAnimType::Fall;
}

void UPlayerAnimInstance::AnimNotify_FallEnd()
{
	mAnimType = EPlayerAnimType::Default;

	mAdditiveAlpha = 1.f;

	if (!Montage_IsPlaying(mJumpRecoveryAdditiveMontage))
	{
		Montage_SetPosition(mJumpRecoveryAdditiveMontage, 0.f);

		Montage_Play(mJumpRecoveryAdditiveMontage);
	}

	mCanJump = true;

	AMainPlayerController* PlayerController = TryGetPawnOwner()->GetController<AMainPlayerController>();
	if (IsValid(PlayerController))
	{
		PlayerController->mMoveEnable = true;
	}
}

void UPlayerAnimInstance::AnimNotify_JumpRecoveryEnd()
{
	mAdditiveAlpha = 0.f;
}

void UPlayerAnimInstance::AnimNotify_RollStart()
{
	mNormalAttackEnable = false;

	AMainPlayerController* PlayerController = TryGetPawnOwner()->GetController<AMainPlayerController>();
	if (IsValid(PlayerController))
	{
		PlayerController->mMoveEnable = false;
		PlayerController->mJumpEnable = false;
		PlayerController->mPowerAttackEnable = false;
	}

	mState = Cast<AMainPlayerState>(TryGetPawnOwner()->GetPlayerState());

	mState->mMP -= 10;

	if (mState->mMP <= 0)
	{
		mState->mMP = 0;
	}

	GetWorld()->GetFirstPlayerController<AMainPlayerController>()->GetMainWidget()->SetMP(mState->mMP, mState->mMPMax);
}

void UPlayerAnimInstance::AnimNotify_RollEnd()
{
	mAnimType = EPlayerAnimType::Default;

	mNormalAttackEnable = true;
	mNormalAttackIndex = 0;

	AMainPlayerController* PlayerController = TryGetPawnOwner()->GetController<AMainPlayerController>();
	if (IsValid(PlayerController))
	{
		PlayerController->mMoveEnable = true;
		PlayerController->mJumpEnable = true;
		PlayerController->mPowerAttackEnable = true;
	}
}
