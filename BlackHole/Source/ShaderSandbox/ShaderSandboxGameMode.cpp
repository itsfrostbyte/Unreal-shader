// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderSandboxGameMode.h"
#include "ShaderSandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderSandboxGameMode::AShaderSandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
