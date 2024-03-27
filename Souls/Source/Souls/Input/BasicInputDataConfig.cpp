#include "BasicInputDataConfig.h"

UMainInputDataConfig::UMainInputDataConfig()
{
	{
		static ConstructorHelpers::FObjectFinder<UInputMappingContext> Asset
		{ TEXT("/Script/EnhancedInput.InputMappingContext'/Game/Blueprint/Main/Input/IMC_MainDefault.IMC_MainDefault'") };
		if (Asset.Succeeded())
		{
			DefaultContext = Asset.Object;
		}
	}

	{
		static ConstructorHelpers::FObjectFinder<UInputAction> Asset
		{ TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Main/Input/IA_Move.IA_Move'") };
		if (Asset.Succeeded())
		{
			Move = Asset.Object;
		}
	}

	{
		static ConstructorHelpers::FObjectFinder<UInputAction> Asset
		{ TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Main/Input/IA_Turn.IA_Turn'") };
		if (Asset.Succeeded())
		{
			Turn = Asset.Object;
		}
	}

	{
		static ConstructorHelpers::FObjectFinder<UInputAction> Asset
		{ TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Main/Input/IA_LookUp.IA_LookUp'") };
		if (Asset.Succeeded())
		{
			LookUp = Asset.Object;
		}
	}

	{
		static ConstructorHelpers::FObjectFinder<UInputAction> Asset
		{ TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Main/Input/IA_NormalAttack.IA_NormalAttack'") };
		if (Asset.Succeeded())
		{
			NormalAttack = Asset.Object;
		}
	}

	{
		static ConstructorHelpers::FObjectFinder<UInputAction> Asset
		{ TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Main/Input/IA_PowerAttack.IA_PowerAttack'") };
		if (Asset.Succeeded())
		{
			PowerAttack = Asset.Object;
		}
	}

	{
		static ConstructorHelpers::FObjectFinder<UInputAction> Asset
		{ TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Main/Input/IA_Jump.IA_Jump'") };
		if (Asset.Succeeded())
		{
			Jump = Asset.Object;
		}
	}
}
