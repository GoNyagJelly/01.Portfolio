// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "BossAnimInstance.generated.h"

UENUM(BlueprintType)
enum class EBossAnimType :uint8
{
	Idle,
	Walk,
	Run,
	Attack,
	Death
};

UCLASS()
class SOULS_API UBossAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EBossAnimType	mAnimType;

public:
	void ChangeAnimType(EBossAnimType Type)
	{
		mAnimType = Type;
	}

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);
};
