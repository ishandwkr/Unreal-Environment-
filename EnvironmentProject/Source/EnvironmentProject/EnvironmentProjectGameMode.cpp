// Copyright Epic Games, Inc. All Rights Reserved.

#include "EnvironmentProjectGameMode.h"
#include "EnvironmentProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEnvironmentProjectGameMode::AEnvironmentProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
