// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimType : uint8
{
	Default,
	Jump,
	Fall,
	Death,
	Skill
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

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool	mMoveEnable;*/

	int32	mNormalAttackIndex;
	int32	mPowerAttackIndex;

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
};
