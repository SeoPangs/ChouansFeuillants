// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChouansFeuillantsGameMode.h"
#include "ChouansFeuillantsBall.h"

AChouansFeuillantsGameMode::AChouansFeuillantsGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AChouansFeuillantsBall::StaticClass();
}
