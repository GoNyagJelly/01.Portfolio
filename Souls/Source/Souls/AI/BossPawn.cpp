// Fill out your copyright notice in the Description page of Project Settings.


#include "BossPawn.h"
#include "DefaultAIController.h"
#include "BossAnimInstance.h"

ABossPawn::ABossPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = ADefaultAIController::StaticClass();
}

void ABossPawn::ChangeAIAnimType(uint8 AnimType)
{
	mAnimInst->ChangeAnimType((EBossAnimType)AnimType);
}

void ABossPawn::BeginPlay()
{
	Super::BeginPlay();

	mAnimInst = Cast<UBossAnimInstance>(mMesh->GetAnimInstance());
}

void ABossPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABossPawn::Attack()
{
}

