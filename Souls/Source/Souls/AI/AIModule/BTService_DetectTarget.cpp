// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_DetectTarget.h"
#include "../DefaultAIController.h"
#include "../AIPawn.h"

UBTService_DetectTarget::UBTService_DetectTarget()
{
	NodeName = TEXT("DetectTarget");
	Interval = 0.5f;
	RandomDeviation = 0.1f;
}

void UBTService_DetectTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* Controller = OwnerComp.GetAIOwner();

	AAIPawn* Pawn = Cast<AAIPawn>(Controller->GetPawn());

	if (!IsValid(Pawn))
		return;

	FVector AILocation = Pawn->GetActorLocation();

	AILocation.Z -= Pawn->GetHalfHeight();

	FCollisionQueryParams	param(NAME_None, false, Pawn);

	FHitResult	result;
	bool IsCollision = GetWorld()->SweepSingleByChannel(result, AILocation, AILocation, FQuat::Identity, ECC_GameTraceChannel2, FCollisionShape::MakeSphere(1500.f), param);

#if ENABLE_DRAW_DEBUG

	FColor DrawColor = IsCollision ? FColor::Red : FColor::Green;

	DrawDebugSphere(GetWorld(), AILocation, 1500.f, 20, DrawColor, false, 0.35f);
#endif
}