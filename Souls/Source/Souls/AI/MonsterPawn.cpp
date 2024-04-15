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
	/*UMonsterState* State = GetState<UMonsterState>();

	int32 Dmg = DamageAmount - State->mArmorPoint;

	Dmg = Dmg < 1 ? 1 : Dmg;

	State->mHP -= Dmg;

	if (State->mHP <= 0)
	{
		State->mHP = 0;

		mAnimInst->PlayDeathMontage();
	}

	GetController<AMainPlayerController>()->GetMainWidget()->SetBossHP(State->mHP, State->mHPMax);*/

	mMonsterState->mHP -= DamageAmount;

	if (mMonsterState->mHP <= 0)
	{
		mMonsterState->mHP = 0;

		mAnimInst->ChangeAnimType(EBossAnimType::Death);
	}

	return DamageAmount;
}

void AMonsterPawn::Attack()
{
}
