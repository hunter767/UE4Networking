// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NetExpCppGameMode.h"
#include "NetExpCppHUD.h"
#include "NetExpCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetExpCppGameMode::ANetExpCppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANetExpCppHUD::StaticClass();
}
