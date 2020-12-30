// Copyright Epic Games, Inc. All Rights Reserved.

#include "GrandHeistGameMode.h"
#include "GrandHeistCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrandHeistGameMode::AGrandHeistGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
