// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MonsterPawn.h"
#include "AIBoss.generated.h"

/**
 * 
 */
UCLASS()
class SOULS_API AAIBoss : public AMonsterPawn
{
	GENERATED_BODY()
	

public:
	AAIBoss();

protected:
	UPROPERTY(EditAnywhere)
	UCapsuleComponent* mRightWeaponCapsule;

	UPROPERTY(EditAnywhere)
	UCapsuleComponent* mLeftWeaponCapsule;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Attack();

public:
	void PlayBossAttackMontage();
};
