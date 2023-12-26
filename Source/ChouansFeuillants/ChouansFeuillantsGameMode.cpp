// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChouansFeuillantsGameMode.h"
#include "Orange.h"

AChouansFeuillantsGameMode::AChouansFeuillantsGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AOrange::StaticClass();
}
