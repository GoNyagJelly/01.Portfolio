// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameModeBase.h"
#include "../Player/MainPlayerState.h"

AMainGameModeBase::AMainGameModeBase()
{
	PlayerStateClass = AMainPlayerState::StaticClass();
}
