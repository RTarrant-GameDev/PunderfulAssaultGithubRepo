// Copyright Epic Games, Inc. All Rights Reserved.

#include "PunderfulAssaultGameMode.h"
#include "PunderfulAssaultCharacter.h"
#include "UObject/ConstructorHelpers.h"

APunderfulAssaultGameMode::APunderfulAssaultGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
