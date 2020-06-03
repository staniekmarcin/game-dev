// Copyright Epic Games, Inc. All Rights Reserved.

#include "TL_StealthGameGameMode.h"
#include "TL_StealthGameHUD.h"
#include "TL_StealthGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATL_StealthGameGameMode::ATL_StealthGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATL_StealthGameHUD::StaticClass();
}
