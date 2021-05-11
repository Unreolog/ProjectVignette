// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestJoyWayGameMode.h"
#include "TestJoyWayCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestJoyWayGameMode::ATestJoyWayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
