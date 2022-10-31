// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonExplorerGameMode.h"
#include "DungeonExplorerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonExplorerGameMode::ADungeonExplorerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
