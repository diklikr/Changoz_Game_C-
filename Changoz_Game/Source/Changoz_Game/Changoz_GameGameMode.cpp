// Copyright Epic Games, Inc. All Rights Reserved.

#include "Changoz_GameGameMode.h"
#include "Changoz_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChangoz_GameGameMode::AChangoz_GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
