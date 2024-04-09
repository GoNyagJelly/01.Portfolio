// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/Pawn.h"
#include "AIPawn.generated.h"

UCLASS()
class SOULS_API AAIPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAIPawn();

public:
	void AdjustScale();
protected:
	UPROPERTY(EditAnywhere)
	UCapsuleComponent* mCapsule;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* mMesh;

	UPROPERTY(EditAnywhere)
	UFloatingPawnMovement* mMovement;

	UPROPERTY(EditAnywhere)
	class UAIState* mState;

	bool	mBossAttackEnd;

public:
	void SetBossAttackEnd(bool End)
	{
		mBossAttackEnd = End;
	}

	bool IsBossAttackEnd()
	{
		return mBossAttackEnd;
	}

public:
	float GetHalfHeight()	const
	{
		return mCapsule->GetScaledCapsuleHalfHeight();
	}

	float GetCapsuleRadius()
	{
		return mCapsule->GetScaledCapsuleRadius();
	}

public:
	virtual void ChangeAIAnimType(uint8 AnimType);

public:
	template <typename T>
	T* GetState()
	{
		return Cast<T>(mState);
	}


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void OnConstruction(const FTransform& Transform);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);
};
