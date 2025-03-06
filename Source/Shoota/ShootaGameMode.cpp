// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootaGameMode.h"
#include "ShootaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootaGameMode::AShootaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
