// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MOONSTRUCK_V1_API UPickup : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPickup();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float Reach = 200.0f;
	float mouseX;
	float mouseY;
	bool holding = false;
	bool inspect = false;
	FRotator DefaultRotation;
	UPrimitiveComponent* CompToGrab;
	AActor* ActorHit;
	UPhysicsHandleComponent* PhysicsHandle = nullptr;
	
	

	UInputComponent* InputController = nullptr;



	void Pickup();
	void Release();
	void Rotate();
	void RotateRelease();
	void FindInputController();
	void FindPhysicsComponent();
	const FHitResult GetFirstPhysicsBodyInReach() ;
};
