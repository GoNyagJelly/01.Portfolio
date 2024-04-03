// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_TraceTarget.h"
#include "../DefaultAIController.h"
#include "../AIPawn.h"
#include "../BossAnimInstance.h"

UBTTask_TraceTarget::UBTTask_TraceTarget()
{
	NodeName = TEXT("TraceTarget");

	bNotifyTick = true;

	bNotifyTaskFinished = true;
}

EBTNodeResult::Type UBTTask_TraceTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

	UAIBlueprintHelperLibrary::SimpleMoveToActor(Controller, Target);

	Pawn->ChangeAIAnimType((uint8)EBossAnimType::Run);
	
	return EBTNodeResult::InProgress;
}

void UBTTask_TraceTarget::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* Controller = OwnerComp.GetAIOwner();

	AAIPawn* Pawn = Cast<AAIPawn>(Controller->GetPawn());

	if (!IsValid(Pawn))
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

		Controller->StopMovement();

		Pawn->ChangeAIAnimType((uint8)EBossAnimType::Idle);

		return;
	}

	AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (!IsValid(Target))
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

		Controller->StopMovement();

		return;
	}

	FVector Dir = Pawn->GetMovementComponent()->Velocity;
	Dir.Z = 0.f;

	Dir.Normalize();

	Pawn->SetActorRotation(FRotator(0.0, Dir.Rotation().Yaw, 0.0));

	FVector AILocation = Pawn->GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();

	AILocation.Z -= Pawn->GetHalfHeight();

	UCapsuleComponent* TargetCapsule = Cast<UCapsuleComponent>(Target->GetRootComponent());

	if (IsValid(TargetCapsule))
	{
		TargetLocation.Z -= TargetCapsule->GetScaledCapsuleHalfHeight();
	}

	float Distance = FVector::Distance(AILocation, TargetLocation);

	Distance -= Pawn->GetCapsuleRadius();

	if (IsValid(TargetCapsule))
	{
		Distance -= TargetCapsule->GetScaledCapsuleRadius();
	}

	if (Distance <= 200.f)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

		Controller->StopMovement();

		Pawn->ChangeAIAnimType((uint8)EBossAnimType::Idle);
	}
}

void UBTTask_TraceTarget::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
}
