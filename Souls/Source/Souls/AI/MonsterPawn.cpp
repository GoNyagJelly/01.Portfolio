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

	mDissolveEnable = false;
	mDissolve = 1.5f;

	mDissolveDuration = 1.f;
	mDissolveTime = 0.f;

	IsDie = false;
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

	int32	ElementCount = mMesh->GetNumMaterials();

	for (int32 i = 0; i < ElementCount; ++i)
	{
		UMaterialInstanceDynamic* Mtrl = mMesh->CreateDynamicMaterialInstance(i);

		mMaterialArray.Add(Mtrl);
	}
}

void AMonsterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mDissolveEnable)
	{
		mDissolveTime += DeltaTime;

		float Ratio = mDissolveTime / mDissolveDuration;

		mDissolve = 1.5f - 2.5f * Ratio;

		for (auto Mtrl : mMaterialArray)
		{
			Mtrl->SetScalarParameterValue(TEXT("Dissolve"), mDissolve);
		}

		if (mDissolve <= -1.f)
			Destroy();
	}
}

float AMonsterPawn::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
	GetWorld()->GetFirstPlayerController<AMainPlayerController>()->GetMainWidget()->ShowBossHP();

	int32 Dmg = DamageAmount - mMonsterState->mArmorPoint;

	Dmg = Dmg < 1 ? 1 : Dmg;

	mMonsterState->mHP -= Dmg;

	if (mMonsterState->mHP <= 0)
	{
		mMonsterState->mHP = 0;
		
		IsDie = true;

		mAnimInst->ChangeAnimType(EBossAnimType::Death);
	}

	GetWorld()->GetFirstPlayerController<AMainPlayerController>()->GetMainWidget()->SetBossHP(mMonsterState->mHP, mMonsterState->mHPMax);

	return DamageAmount;
}

void AMonsterPawn::Attack()
{
}

void AMonsterPawn::OnDissolve()
{
	mDissolveEnable = true;

	for (auto Mtrl : mMaterialArray)
	{
		Mtrl->SetScalarParameterValue(TEXT("DissolveEnable"), 1.f);
	}
}
