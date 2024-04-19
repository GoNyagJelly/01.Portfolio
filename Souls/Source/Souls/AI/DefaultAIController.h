// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "AIController.h"
#include "DefaultAIController.generated.h"

/**
 * 
 */
UCLASS()
class SOULS_API ADefaultAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ADefaultAIController();

protected:
	UBehaviorTree* mBehaviorTree;
	UBlackboardData* mBlackBoard;

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

public:
	virtual void Tick(float DeltaTime) override;
};
