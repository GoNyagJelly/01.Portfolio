// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIPawn.h"
#include "MonsterPawn.generated.h"

USTRUCT(BlueprintType)
struct FMonsterData :
	public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32	mAttackPoint;

	UPROPERTY(EditAnywhere)
	int32	mArmorPoint;

	UPROPERTY(EditAnywhere)
	int32	mHPMax;

	UPROPERTY(EditAnywhere)
	float	mMoveSpeed;

	UPROPERTY(EditAnywhere)
	float	mAttackDistance;
};

UCLASS()
class SOULS_API AMonsterPawn : public AAIPawn
{
	GENERATED_BODY()

protected:
	static UDataTable* mMonsterDataTable;

public:
	AMonsterPawn();

protected:
	class UBossAnimInstance* mAnimInst;
	FString	mTableRowName;

public:
	virtual void ChangeAIAnimType(uint8 AnimType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void Attack();
};
