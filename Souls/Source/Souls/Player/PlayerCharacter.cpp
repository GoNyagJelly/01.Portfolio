// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnimInstance.h"
#include "MainPlayerController.h"
#include "../Effect/EffectBase.h"
#include "MainPlayerState.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	mCameraArm->SetupAttachment(GetCapsuleComponent());
	mCamera->SetupAttachment(mCameraArm);

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));

	mCameraArm->bUsePawnControlRotation = true;
	mCamera->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = true;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 360.f, 0.f);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	mAnimInst = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());

	mState = GetPlayerState<AMainPlayerState>();
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Dmg:%.2f"), DamageAmount));

	int32 Dmg = DamageAmount - mState->mArmorPoint;

	Dmg = Dmg < 1 ? 1 : Dmg;

	mState->mHP -= DamageAmount;

	if (mState->mHP <= 0)
	{
		mState->mHP = 0;
	}

	return DamageAmount;
}

void APlayerCharacter::PlayNormalAttackMontage()
{
	mAnimInst->PlayNormalAttackMontage();
}

void APlayerCharacter::PlayPowerAttackMontage()
{
	mAnimInst->PlayPowerAttackMontage();
}

void APlayerCharacter::PlayJump()
{
	if (CanJump())
	{
		Jump();
		mAnimInst->PlayJump();
	}
}

void APlayerCharacter::PlayRollMontage()
{
	mAnimInst->PlayRollMontage();
}

void APlayerCharacter::NormalAttack()
{
	FCollisionQueryParams	param(NAME_None, false, this);

	AMainPlayerState* State = GetPlayerState<AMainPlayerState>();

	FVector StartLocation = GetActorLocation();

	FVector EndLocation = StartLocation + GetActorForwardVector() * State->mAttackDistance;

	TArray<FHitResult>	resultArray;
	bool IsCollision = GetWorld()->SweepMultiByChannel(resultArray, StartLocation, EndLocation, FQuat::Identity, ECollisionChannel::ECC_EngineTraceChannel4, FCollisionShape::MakeSphere(50.f), param);

#if ENABLE_DRAW_DEBUG

	FColor DrawColor = IsCollision ? FColor::Red : FColor::Green;

	DrawDebugCapsule(GetWorld(), (StartLocation + EndLocation) / 2.f, State->mAttackDistance / 2.f, 50.f, FRotationMatrix::MakeFromZ(GetActorForwardVector()).ToQuat(), DrawColor, false, 1.f);

#endif

	if (IsCollision)
	{
		for (int32 i = 0; i < resultArray.Num(); ++i)
		{
			FDamageEvent	DmgEvent;

			resultArray[i].GetActor()->TakeDamage(State->mNormalAttackPoint, DmgEvent, GetController(), this);

			FActorSpawnParameters SpawnParam;

			SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AEffectBase* Effect = GetWorld()->SpawnActor<AEffectBase>(resultArray[i].ImpactPoint, resultArray[i].ImpactNormal.Rotation(), SpawnParam);

			Effect->SetParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/ParagonGrux/FX/Particles/Skins/Grux_Beetle_Magma/P_Grux_Magma_Melee_Impact.P_Grux_Magma_Melee_Impact'"));
			Effect->SetSoundAsset(TEXT("/Script/Engine.SoundWave'/Game/ParagonGrux/Characters/Heroes/Grux/Sounds/SoundWaves/Grux_Effort_Pain_01.Grux_Effort_Pain_01'"));
		}
	}
}

void APlayerCharacter::PowerAttack()
{
	FCollisionQueryParams	param(NAME_None, false, this);

	AMainPlayerState* State = GetPlayerState<AMainPlayerState>();

	FVector StartLocation = GetActorLocation();

	FVector EndLocation = StartLocation + GetActorForwardVector() * State->mAttackDistance;

	TArray<FHitResult>	resultArray;
	bool IsCollision = GetWorld()->SweepMultiByChannel(resultArray, StartLocation, EndLocation, FQuat::Identity, ECollisionChannel::ECC_EngineTraceChannel4, FCollisionShape::MakeSphere(50.f), param);

#if ENABLE_DRAW_DEBUG

	FColor DrawColor = IsCollision ? FColor::Red : FColor::Green;

	DrawDebugCapsule(GetWorld(), (StartLocation + EndLocation) / 2.f, State->mAttackDistance / 2.f, 50.f, FRotationMatrix::MakeFromZ(GetActorForwardVector()).ToQuat(), DrawColor, false, 1.f);

#endif

	if (IsCollision)
	{
		for (int32 i = 0; i < resultArray.Num(); ++i)
		{
			FDamageEvent	DmgEvent;

			resultArray[i].GetActor()->TakeDamage(State->mPowerAttackPoint, DmgEvent, GetController(), this);

			FActorSpawnParameters SpawnParam;

			SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AEffectBase* Effect = GetWorld()->SpawnActor<AEffectBase>(resultArray[i].ImpactPoint, resultArray[i].ImpactNormal.Rotation(), SpawnParam);

			Effect->SetParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/ParagonGrux/FX/Particles/Skins/Grux_Beetle_Magma/P_Grux_Magma_Melee_Impact.P_Grux_Magma_Melee_Impact'"));
			Effect->SetSoundAsset(TEXT("/Script/Engine.SoundWave'/Game/ParagonGrux/Characters/Heroes/Grux/Sounds/SoundWaves/Grux_Effort_Pain_01.Grux_Effort_Pain_01'"));
		}
	}
}

