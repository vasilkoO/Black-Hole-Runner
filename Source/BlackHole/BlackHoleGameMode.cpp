// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlackHoleGameMode.h"
#include "BlackHoleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlackHoleGameMode::ABlackHoleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
