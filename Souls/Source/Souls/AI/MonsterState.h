// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIState.h"
#include "MonsterState.generated.h"

/**
 * 
 */
UCLASS( ClassGroup = (Custom), meta = (BlueprintSpawnableComponent) )
class SOULS_API UMonsterState : public UAIState
{
	GENERATED_BODY()
	
public:
	UMonsterState();

public:
	UPROPERTY(EditAnywhere)
	int32	mAttackPoint;

	UPROPERTY(EditAnywhere)
	int32	mArmorPoint;

	UPROPERTY(EditAnywhere)
	int32	mHPMax;

	UPROPERTY(EditAnywhere)
	float	mAttackDistance;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
