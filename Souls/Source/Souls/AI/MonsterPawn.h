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

	UPROPERTY(EditAnywhere)
	float	mTraceDistance;
};

UCLASS()
class SOULS_API AMonsterPawn : public AAIPawn
{
	GENERATED_BODY()

protected:
	static UDataTable* mMonsterDataTable;

public:
	static const FMonsterData* FindMonsterData(const FString& Name);

public:
	AMonsterPawn();

protected:
	class UBossAnimInstance* mAnimInst;
	FString	mTableRowName;
	class UMonsterState* mMonsterState;
	TArray<UMaterialInstanceDynamic*> mMaterialArray;

	bool	mDissolveEnable;
	float	mDissolve;
	float	mDissolveTime;
	float	mDissolveDuration;

public:
	bool	IsDie;

public:
	virtual void ChangeAIAnimType(uint8 AnimType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void OnConstruction(const FTransform& Transform);

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

	virtual void Attack();

	void OnDissolve();
};
