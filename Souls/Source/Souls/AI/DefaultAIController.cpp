// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultAIController.h"

ADefaultAIController::ADefaultAIController()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree>	AITree(TEXT("/Script/AIModule.BehaviorTree'/Game/Blueprint/Main/AI/BT_Default.BT_Default'"));

	if (AITree.Succeeded())
		mBehaviorTree = AITree.Object;

	static ConstructorHelpers::FObjectFinder<UBlackboardData>	Data(TEXT("/Script/AIModule.BlackboardData'/Game/Blueprint/Main/AI/BB_Default.BB_Default'"));

	if (Data.Succeeded())
		mBlackBoard = Data.Object;
}

void ADefaultAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (mBlackBoard)
	{
		UBlackboardComponent* BlackboardRef = Blackboard;

		if (UseBlackboard(mBlackBoard, BlackboardRef))
		{
			RunBehaviorTree(mBehaviorTree);
		}
	}
}

void ADefaultAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
