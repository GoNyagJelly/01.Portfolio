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

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);
};
