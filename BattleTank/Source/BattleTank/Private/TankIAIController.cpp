// Fill out your copyright notice in the Description page of Project Settings.

#include "TankIAIController.h"
#include "Engine/World.h"

ATank*  ATankIAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankIAIController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankIAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* AITank = GetControlledTank();
	ATank* PlayerTank = GetPlayerTank();

	if (!AITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController possesing: %s"), *(AITank->GetName()));
	}
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController can't find player tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController found player: %s"), *(PlayerTank->GetName()));
	}
}
