// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProjectGameModeBase.h"
#include "FPSProject.h"
#include "Engine/Engine.h"

void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode"));
	}
}




