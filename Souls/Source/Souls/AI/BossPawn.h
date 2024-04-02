// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIPawn.h"
#include "BossPawn.generated.h"

/**
 * 
 */
UCLASS()
class SOULS_API ABossPawn : public AAIPawn
{
	GENERATED_BODY()


public:
	ABossPawn();

protected:
	class UBossAnimInstance* mAnimInst;

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
