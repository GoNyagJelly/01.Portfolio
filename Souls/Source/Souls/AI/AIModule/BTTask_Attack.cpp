// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Attack.h"
#include "../DefaultAIController.h"
#include "../AIPawn.h"
#include "../BossAnimInstance.h"

UBTTask_Attack::UBTTask_Attack()
{
	NodeName = TEXT("Attack");

	bNotifyTick = true;

	bNotifyTaskFinished = true;
}

EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* Controller = OwnerComp.GetAIOwner();

	AAIPawn* Pawn = Cast<AAIPawn>(Controller->GetPawn());

	if (!IsValid(Pawn))
		return EBTNodeResult::Failed;

	AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (!IsValid(Target))
	{
		Controller->StopMovement();

		Pawn->ChangeAIAnimType((uint8)EBossAnimType::Idle);

		return EBTNodeResult::Failed;
	}

	Pawn->ChangeAIAnimType((uint8)EBossAnimType::Attack);

	return EBTNodeResult::InProgress;
}

void UBTTask_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* Controller = OwnerComp.GetAIOwner();

	AAIPawn* Pawn = Cast<AAIPawn>(Controller->GetPawn());

	if (!IsValid(Pawn))
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

		return;
	}

	AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (!IsValid(Target))
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

		Pawn->ChangeAIAnimType((uint8)EBossAnimType::Idle);

		return;
	}

	if (Pawn->IsBossAttackEnd())
	{
		Pawn->SetBossAttackEnd(false);

		FVector AILocation = Pawn->GetActorLocation();
		FVector TargetLocation = Target->GetActorLocation();

		FVector Dir = TargetLocation - AILocation;
		Dir.Z = 0.0;

		AILocation.Z -= Pawn->GetHalfHeight();

		UCapsuleComponent* TargetCapsule = Cast<UCapsuleComponent>(Target->GetRootComponent());

		if (IsValid(TargetCapsule))
		{
			TargetLocation.Z -= TargetCapsule->GetScaledCapsuleHalfHeight();
		}

		float Distance = FVector::Distance(AILocation, TargetLocation);

		if (Distance > 300.f)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

			Pawn->ChangeAIAnimType((uint8)EBossAnimType::Idle);
		}

		else
		{
			FRotator Rot = FRotationMatrix::MakeFromX(Dir).Rotator();
			Rot.Pitch = 0.0;
			Rot.Roll = 0.0;

			Pawn->SetActorRotation(Rot);
		}
	}
}
