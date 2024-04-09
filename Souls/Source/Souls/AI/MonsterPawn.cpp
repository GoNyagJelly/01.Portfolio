// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterPawn.h"
#include "DefaultAIController.h"
#include "BossAnimInstance.h"
#include "MonsterState.h"

UDataTable* AMonsterPawn::mMonsterDataTable = nullptr;

const FMonsterData* AMonsterPawn::FindMonsterData(const FString& Name)
{
	return mMonsterDataTable->FindRow<FMonsterData>(*Name, TEXT(""));
}

AMonsterPawn::AMonsterPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	mState = CreateDefaultSubobject<UMonsterState>(TEXT("MonsterState"));

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

void AMonsterPawn::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	mState->mDataTableRowName = mTableRowName;
}

void AMonsterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMonsterPawn::Attack()
{
}

