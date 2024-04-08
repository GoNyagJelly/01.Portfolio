// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterPawn.h"
#include "DefaultAIController.h"
#include "BossAnimInstance.h"

UDataTable* AMonsterPawn::mMonsterDataTable = nullptr;

AMonsterPawn::AMonsterPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = ADefaultAIController::StaticClass();

	static ConstructorHelpers::FObjectFinder<UDataTable>	MonsterTable(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Main/Boss/DT_MonsterData.DT_MonsterData'"));

	if (!IsValid(mMonsterDataTable) && MonsterTable.Succeeded())
		mMonsterDataTable = MonsterTable.Object;
}

void AMonsterPawn::ChangeAIAnimType(uint8 AnimType)
{
	mAnimInst->ChangeAnimType((EBossAnimType)AnimType);
}

void AMonsterPawn::BeginPlay()
{
	Super::BeginPlay();

	mAnimInst = Cast<UBossAnimInstance>(mMesh->GetAnimInstance());

	FMonsterData* MonsterData = mMonsterDataTable->FindRow<FMonsterData>(*mTableRowName, TEXT(""));

	if (MonsterData)
	{

	}
}

void AMonsterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMonsterPawn::Attack()
{
}

