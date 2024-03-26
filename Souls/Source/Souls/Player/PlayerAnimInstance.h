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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool	mMoveEnable;

	int32	mNormalAttackIndex;
	int32	mPowerAttackIndex;

	bool	mNormalAttackEnable;

public:
	UPlayerAnimInstance();

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:
	void PlayNormalAttackMontage();
	void PlayPowerAttackMontage();

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
