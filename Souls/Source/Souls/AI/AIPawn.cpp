// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPawn.h"
#include "DefaultAIController.h"
#include "AISpawnPoint.h"
//#include "MonsterState.h"
//#include "BossAnimInstance.h"
//#include "../Player/MainPlayerController.h"
//#include "../UI/MainViewportWidget.h"

// Sets default values
AAIPawn::AAIPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mBossAttackEnd = false;

	mCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Body"));
	
	mMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));

	mMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

	mMovement->SetUpdatedComponent(mCapsule);

	SetRootComponent(mCapsule);

	mMesh->SetupAttachment(mCapsule);

	AdjustScale();

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	static ConstructorHelpers::FClassFinder<AAIController>	AIClass(TEXT("/Script/Engine.Blueprint'/Game/Blueprint/Main/AI/BP_DefaultAIController.BP_DefaultAIController_C'"));

	if (AIClass.Succeeded())
		AIControllerClass = AIClass.Class;
}

void AAIPawn::AdjustScale()
{
	FVector CurrentScale = GetActorScale3D();

	FVector NewScale = CurrentScale * 1.5f;

	SetActorScale3D(NewScale);
}

void AAIPawn::ChangeAIAnimType(uint8 AnimType)
{
}

// Called when the game starts or when spawned
void AAIPawn::BeginPlay()
{
	Super::BeginPlay();
}

void AAIPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

}

void AAIPawn::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
}

// Called every frame
void AAIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AAIPawn::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	return DamageAmount;
}