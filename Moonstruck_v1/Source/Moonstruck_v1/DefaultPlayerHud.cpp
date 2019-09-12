// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPlayerHud.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"

void ADefaultPlayerHud::DrawHUD()
{

	Super::DrawHUD();

	if (CrosshairPNG)
	{
		// Find the center of our canvas.
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

		// Offset by half of the texture's dimensions so that the center of the texture aligns with the center of the Canvas.
		FVector2D CrossHairDrawPosition(Center.X - (CrosshairPNG->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairPNG->GetSurfaceHeight() * 0.5f));

		// Draw the crosshair at the centerpoint.
		FCanvasTileItem TileItem(CrossHairDrawPosition, CrosshairPNG->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}

}
