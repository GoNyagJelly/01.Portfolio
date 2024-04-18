// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "MainPlayerController.h"
#include "PlayerAnimInstance.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimType : uint8
{
	Default,
	Jump,
	Fall,
	Death,
	PowerAttack,
	Roll
};

/**
 *
 */
UCLASS()
class SOULS_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()


protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float		mMoveSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float		mMoveDir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UAnimMontage>>	mNormalAttackMontageArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UAnimMontage>>	mPowerAttackMontageArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UAnimMontage>>	mRollMontageArray;

	int32	mNormalAttackIndex;
	int32	mPowerAttackIndex;
	int32	mRollIndex;

	bool	mNormalAttackEnable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EPlayerAnimType	mAnimType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool	mOnGround;

	bool	mCanJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* mJumpRecoveryAdditiveMontage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float	mAdditiveAlpha;

	class AMainPlayerState* mState;
public:
	UPlayerAnimInstance();

public:
	void SetAnimType(EPlayerAnimType Type)
	{
		mAnimType = Type;
	}

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:
	void PlayNormalAttackMontage();
	void PlayPowerAttackMontage();
	void PlayJump();
	void PlayRollMontage();
	void PlayDeathMontage();

	UFUNCTION()
	void AnimNotify_NormalAttack();
	
	UFUNCTION()
	void AnimNotify_NormalAttackEnable();
	
	UFUNCTION()
	void AnimNotify_NormalAttackEnd();

	UFUNCTION()
	void AnimNotify_PowerAttackStart();

	UFUNCTION()
	void AnimNotify_PowerAttack();

	UFUNCTION()
	void AnimNotify_PowerAttackEnd();

	UFUNCTION()
	void AnimNotify_TransitionFall();

	UFUNCTION()
	void AnimNotify_FallEnd();

	UFUNCTION()
	void AnimNotify_JumpRecoveryEnd();

	UFUNCTION()
	void AnimNotify_RollStart();

	UFUNCTION()
	void AnimNotify_RollEnd();
};
