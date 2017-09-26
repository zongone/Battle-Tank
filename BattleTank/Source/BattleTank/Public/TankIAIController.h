// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankIAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankIAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank* GetAITank() const;

	virtual void BeginPlay() override;
	
	
};
