// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

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

	int32	mNormalAttackIndex;

	bool	mNormalAttackEnable;

public:
	UPlayerAnimInstance();

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:
	void PlayNormalAttackMontage();

	void AnimNotify_NormalAttack();
	void AnimNotify_NormalAttackEnable();
	void AnimNotify_NormalAttackEnd();
};
