// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterPawn.h"
#include "DefaultAIController.h"
#include "../Player/MainPlayerController.h"
#include "BossAnimInstance.h"
#include "MonsterState.h"
#include "../Player/MainPlayerController.h"
#include "../UI/MainViewportWidget.h"

UDataTable* AMonsterPawn::mMonsterDataTable = nullptr;

const FMonsterData* AMonsterPawn::FindMonsterData(const FString& Name)
{
	return mMonsterDataTable->FindRow<FMonsterData>(*Name, TEXT(""));
}

AMonsterPawn::AMonsterPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	mState = CreateDefaultSubobject<UMonsterState>(TEXT("MonsterState"));

	mMonsterState = Cast<UMonsterState>(mState);

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

	const FMonsterData* Data = AMonsterPawn::FindMonsterData(mTableRowName);

	mMovement->MaxSpeed = Data->mMoveSpeed;

	mAnimInst = Cast<UBossAnimInstance>(mMesh->GetAnimInstance());
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

float AMonsterPawn::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent,
		EventInstigator, DamageCauser);

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Dmg:%.2f"), DamageAmount));
	
	mMonsterState->mHP -= DamageAmount;

	if (mMonsterState->mHP <= 0)
	{
		mAnimInst->ChangeAnimType(EBossAnimType::Death);
	}

	//GetController<AMainPlayerController>()->GetMainWidget()->SetBossHP(mMonsterState->mHP, mMonsterState->mHPMax);

	return DamageAmount;
}

void AMonsterPawn::Attack()
{
}
