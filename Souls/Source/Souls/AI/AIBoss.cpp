// Fill out your copyright notice in the Description page of Project Settings.


#include "AIBoss.h"
#include "DefaultAIController.h"
#include "BossAnimInstance.h"
#include "../Effect/EffectBase.h"
#include "MonsterState.h"

AAIBoss::AAIBoss()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	MeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonGrux/Characters/Heroes/Grux/Meshes/Grux.Grux'"));

	if (MeshAsset.Succeeded())
		mMesh->SetSkeletalMesh(MeshAsset.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimAsset(TEXT("/Script/Engine.AnimBlueprint'/Game/Blueprint/Main/Boss/AB_Boss.AB_Boss_C'"));

	if (AnimAsset.Succeeded())
		mMesh->SetAnimInstanceClass(AnimAsset.Class);

	mRightWeaponCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightWeapon"));
	mLeftWeaponCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftWeapon"));
	mRightWeaponCapsule->SetupAttachment(mMesh);
	mLeftWeaponCapsule->SetupAttachment(mMesh);

	mMesh->SetRelativeLocation(FVector(0.0, 0.0, - 115.0));
	mMesh->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	mCapsule->SetCapsuleHalfHeight(115.f);
	mCapsule->SetCapsuleRadius(40.f);

	mRightWeaponCapsule->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
	mRightWeaponCapsule->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
	mRightWeaponCapsule->SetCapsuleHalfHeight(70.f);

	mLeftWeaponCapsule->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
	mLeftWeaponCapsule->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
	mLeftWeaponCapsule->SetCapsuleHalfHeight(70.f);

	mRightWeaponCapsule->AttachToComponent(mMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("FX_Clang_R"));
	mLeftWeaponCapsule->AttachToComponent(mMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("FX_Clang_L"));

	mTableRowName = TEXT("Boss");
}

void AAIBoss::BeginPlay()
{
	Super::BeginPlay();
}

void AAIBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAIBoss::Attack()
{
	FCollisionQueryParams	param(NAME_None, false, this);
		
	UMonsterState* State = GetState<UMonsterState>();

	FVector StartLocation = GetActorLocation();

	FVector EndLocation = StartLocation + GetActorForwardVector() * State->mAttackDistance;
		
	FHitResult	result;
	bool IsCollision = GetWorld()->SweepSingleByChannel(result, StartLocation, EndLocation, FQuat::Identity, ECC_GameTraceChannel3, FCollisionShape::MakeSphere(100.f), param);
		
//#if ENABLE_DRAW_DEBUG
//		
//	FColor DrawColor = IsCollision ? FColor::Red : FColor::Green;
//		
//	DrawDebugCapsule(GetWorld(), (StartLocation + EndLocation) / 2.f, State->mAttackDistance / 2.f, 100.f, FRotationMatrix::MakeFromZ(GetActorForwardVector()).ToQuat(), DrawColor, false, 1.f);
//		
//#endif

	if (IsCollision)
	{
		FDamageEvent	DmgEvent;
		result.GetActor()->TakeDamage(State->mAttackPoint, DmgEvent, GetController(), this);

		FActorSpawnParameters SpawnParam;

		SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AEffectBase* Effect = GetWorld()->SpawnActor<AEffectBase>(result.ImpactPoint, result.ImpactNormal.Rotation(), SpawnParam);

		Effect->SetParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/ParagonGrux/FX/Particles/Skins/Grux_Beetle_Magma/P_Grux_Magma_Melee_Impact.P_Grux_Magma_Melee_Impact'"));
		Effect->SetSoundAsset(TEXT("/Script/Engine.SoundWave'/Game/ParagonKwang/Characters/Heroes/Kwang/Sounds/SoundWaves/Kwang_Effort_Pain_01.Kwang_Effort_Pain_01'"));
	}
}

void AAIBoss::PlayBossAttackMontage()
{
	mAnimInst->PlayBossAttackMontage();
}
