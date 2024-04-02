// Fill out your copyright notice in the Description page of Project Settings.


#include "AIBoss.h"
#include "DefaultAIController.h"
#include "BossAnimInstance.h"

AAIBoss::AAIBoss()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	MeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonGrux/Characters/Heroes/Grux/Meshes/Grux.Grux'"));

	if (MeshAsset.Succeeded())
		mMesh->SetSkeletalMesh(MeshAsset.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimAsset(TEXT("/Script/Engine.AnimBlueprint'/Game/Blueprint/Main/Boss/AB_Boss.AB_Boss_C'"));

	if (AnimAsset.Succeeded())
		mMesh->SetAnimInstanceClass(AnimAsset.Class);

	mMesh->SetRelativeLocation(FVector(0.0, 0.0, - 115.0));
	mMesh->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	mCapsule->SetCapsuleHalfHeight(115.f);
	mCapsule->SetCapsuleRadius(40.f);
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
}
