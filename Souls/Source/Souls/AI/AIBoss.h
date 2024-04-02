// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BossPawn.h"
#include "AIBoss.generated.h"

/**
 * 
 */
UCLASS()
class SOULS_API AAIBoss : public ABossPawn
{
	GENERATED_BODY()
	

public:
	AAIBoss();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Attack();
};
