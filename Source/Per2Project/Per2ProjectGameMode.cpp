// Copyright Epic Games, Inc. All Rights Reserved.

#include "Per2ProjectGameMode.h"
#include "Per2ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APer2ProjectGameMode::APer2ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
