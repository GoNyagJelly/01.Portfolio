#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "BasicInputDataConfig.generated.h"

UCLASS()
class UMainInputDataConfig : public UObject
{
	GENERATED_BODY()
public:
	UMainInputDataConfig();

public:
	UInputMappingContext* DefaultContext = nullptr;

public:
	UInputAction* Move = nullptr;
	UInputAction* Turn = nullptr;
	UInputAction* LookUp = nullptr;
};