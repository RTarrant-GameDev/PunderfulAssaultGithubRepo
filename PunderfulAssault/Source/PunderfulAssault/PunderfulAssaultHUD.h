// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PunderfulAssaultHUD.generated.h"

/**
 * 
 */
UCLASS()
class PUNDERFULASSAULT_API APunderfulAssaultHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	// Primary draw call for the HUD.
	virtual void DrawHUD() override;
};
