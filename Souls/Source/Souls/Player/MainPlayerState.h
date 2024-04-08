// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/PlayerState.h"
#include "MainPlayerState.generated.h"

USTRUCT(BlueprintType)
struct FPlayerData :
	public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32	mNormalAttackPoint;

	UPROPERTY(EditAnywhere)
	int32	mPowerAttackPoint;

	UPROPERTY(EditAnywhere)
	int32	mArmorPoint;

	UPROPERTY(EditAnywhere)
	int32	mHPMax;

	UPROPERTY(EditAnywhere)
	int32	mMPMax;

	UPROPERTY(EditAnywhere)
	float	mMoveSpeed;

	UPROPERTY(EditAnywhere)
	float	mAttackDistance;
};

UCLASS()
class SOULS_API AMainPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AMainPlayerState();

private:
	UDataTable* mPlayerDataTable;

public:
	FString	mName;
	int32	mNormalAttackPoint;
	int32	mPowerAttackPoint;
	int32	mArmorPoint;
	int32	mHP;
	int32	mHPMax;
	int32	mMP;
	int32	mMPMax;
	float	mMoveSpeed;
	float	mAttackDistance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
