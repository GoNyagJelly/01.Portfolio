// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterPawn.h"
#include "DefaultAIController.h"
#include "BossAnimInstance.h"

AMonsterPawn::AMonsterPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = ADefaultAIController::StaticClass();
}

void AMonsterPawn::ChangeAIAnimType(uint8 AnimType)
{
	mAnimInst->ChangeAnimType((EBossAnimType)AnimType);
}

void AMonsterPawn::BeginPlay()
{
	Super::BeginPlay();

	mAnimInst = Cast<UBossAnimInstance>(mMesh->GetAnimInstance());
}

void AMonsterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMonsterPawn::Attack()
{
}

