// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "../Input/BasicInputDataConfig.h"
#include "PlayerCharacter.h"

AMainPlayerController::AMainPlayerController()
{
	mMoveEnable = true;
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	const UMainInputDataConfig* MainInputDataConfig = GetDefault<UMainInputDataConfig>();
	Subsystem->AddMappingContext(MainInputDataConfig->DefaultContext, 0);
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	ensure(EnhancedInputComponent);

	const UMainInputDataConfig* MainInputDataConfig = GetDefault<UMainInputDataConfig>();
	EnhancedInputComponent->BindAction(MainInputDataConfig->Move, ETriggerEvent::Triggered, this, &ThisClass::OnMove);
	EnhancedInputComponent->BindAction(MainInputDataConfig->Turn, ETriggerEvent::Triggered, this, &ThisClass::OnTurn);
	EnhancedInputComponent->BindAction(MainInputDataConfig->LookUp, ETriggerEvent::Triggered, this, &ThisClass::OnLookUp);
	EnhancedInputComponent->BindAction(MainInputDataConfig->NormalAttack, ETriggerEvent::Triggered, this, &ThisClass::OnNormalAttack);
	EnhancedInputComponent->BindAction(MainInputDataConfig->PowerAttack, ETriggerEvent::Triggered, this, &ThisClass::OnPowerAttack);
	EnhancedInputComponent->BindAction(MainInputDataConfig->Jump, ETriggerEvent::Triggered, this, &ThisClass::OnJump);
}

void AMainPlayerController::OnMove(const FInputActionValue& InputActionValue)
{
	if (mMoveEnable)
	{
		APawn* ControlledPawn = GetPawn();

		const FRotator Rotation = K2_GetActorRotation();
		const FRotator YawRotation = FRotator(0.0, Rotation.Yaw, 0.0);
		const FVector ForwardVector = YawRotation.Vector();
		const FVector RightVector = FRotationMatrix(YawRotation).GetScaledAxis(EAxis::Y);

		const FVector ActionValue = InputActionValue.Get<FVector>();
		ControlledPawn->AddMovementInput(ForwardVector, ActionValue.Y);
		ControlledPawn->AddMovementInput(RightVector, ActionValue.X);

		mMoveDir = ActionValue.X * 90.f;

		if (ActionValue.Y > 0.f)
		{
			if (ActionValue.X < 0.f)
				mMoveDir = -45.f;

			else if (ActionValue.X > 0.f)
				mMoveDir = 45.f;
		}

		else if (ActionValue.Y < 0.f)
		{
			if (ActionValue.X < 0.f)
				mMoveDir = -135.f;

			else if (ActionValue.X > 0.f)
				mMoveDir = 135.f;

			else
				mMoveDir = 180.f;
		}
	}
}

void AMainPlayerController::OnTurn(const FInputActionValue& InputActionValue)
{
	const FVector ActionValue = InputActionValue.Get<FVector>();
	AddYawInput(ActionValue.X);
}

void AMainPlayerController::OnLookUp(const FInputActionValue& InputActionValue)
{
	const FVector ActionValue = InputActionValue.Get<FVector>();
	AddPitchInput(ActionValue.X);
}

void AMainPlayerController::OnNormalAttack(const FInputActionValue& InputActionValue)
{
	APlayerCharacter* ControlledPawn = GetPawn<APlayerCharacter>();

	ControlledPawn->PlayNormalAttackMontage();
}

void AMainPlayerController::OnJump(const FInputActionValue& InputActionValue)
{
	APlayerCharacter* ControlledPawn = GetPawn<APlayerCharacter>();

	ControlledPawn->PlayJump();
}

void AMainPlayerController::OnPowerAttack(const FInputActionValue& InputActionValue)
{
	APlayerCharacter* ControlledPawn = GetPawn<APlayerCharacter>();

	ControlledPawn->PlayPowerAttackMontage();
}