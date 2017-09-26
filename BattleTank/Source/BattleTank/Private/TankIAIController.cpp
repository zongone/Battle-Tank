// Fill out your copyright notice in the Description page of Project Settings.

#include "TankIAIController.h"

ATank*  ATankIAIController::GetAITank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankIAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* AITank = GetAITank();

	if (!AITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController possesing: %s"), *(AITank->GetName()));
	}
}
