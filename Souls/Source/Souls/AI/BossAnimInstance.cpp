// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAnimInstance.h"
#include "BossPawn.h"

void UBossAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	mAnimType = EBossAnimType::Idle;
}

void UBossAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UBossAnimInstance::AnimNotify_BossAttack()
{
	ABossPawn* Pawn = Cast<ABossPawn>(TryGetPawnOwner());

	Pawn->Attack();

	FCollisionQueryParams	param(NAME_None, false, Pawn);

	FVector StartLocation = Pawn->GetActorLocation() + Pawn->GetActorForwardVector() * 100.f;
	FVector EndLocation = StartLocation + Pawn->GetActorForwardVector() * 300.f;

	FHitResult	result;
	bool IsCollision = GetWorld()->SweepSingleByChannel(result, StartLocation, EndLocation, FQuat::Identity, ECC_GameTraceChannel3, FCollisionShape::MakeSphere(50.f), param);

#if ENABLE_DRAW_DEBUG

	FColor DrawColor = IsCollision ? FColor::Red : FColor::Green;

	DrawDebugCapsule(GetWorld(), (StartLocation + EndLocation) / 2.f, 150.f, 100.f, FRotationMatrix::MakeFromZ(Pawn->GetActorForwardVector()).ToQuat(), DrawColor, false, 1.f);

#endif
}
