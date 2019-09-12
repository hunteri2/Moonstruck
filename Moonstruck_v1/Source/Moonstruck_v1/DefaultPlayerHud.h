// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "DefaultPlayerHud.generated.h"

/**
 * 
 */
UCLASS()
class MOONSTRUCK_V1_API ADefaultPlayerHud : public AHUD
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere)
		UTexture2D* CrosshairPNG;
public:
	virtual void DrawHUD() override;



};
