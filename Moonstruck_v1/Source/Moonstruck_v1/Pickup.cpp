// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "Public/DrawDebugHelpers.h"
#include "Public/CollisionQueryParams.h"
#include "Engine/Classes/Components/PrimitiveComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


#define OUT

// Sets default values for this component's properties
UPickup::UPickup()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPickup::BeginPlay()
{
	Super::BeginPlay();
	FindPhysicsComponent();
	FindInputController();
}

///Look for inputController
void UPickup::FindInputController()
{
	
	InputController = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputController)
	{
		//bind the keys
		InputController->BindAction("Pickup", IE_Pressed, this, &UPickup::Pickup);
		InputController->BindAction("Pickup", IE_Released, this, &UPickup::Release);
	}
	else
	{
		//Log the issue
		UE_LOG(LogTemp, Error, TEXT("%s missingInput componet"), *GetOwner()->GetName())
	}
}

///Look for physic handle
void UPickup::FindPhysicsComponent()
{

	
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle)
	{

	}
	else
	{
		//Log the issue
		UE_LOG(LogTemp, Error, TEXT("%s missing physics handle componet"), *GetOwner()->GetName())
	}
}


void UPickup::Pickup() 
{
	UE_LOG(LogTemp, Warning, TEXT("Grab Pickup"))

		//Try and reach any available actors
		auto HitResult = GetFirstPhysicsBodyInReach();
		auto ComponentToGrab = HitResult.GetComponent();
		auto ActorHit = HitResult.GetActor();

		//If we can attach the physics handle
		if (ActorHit)
		{
			PhysicsHandle->GrabComponent(
				ComponentToGrab,
				NAME_None,
				ComponentToGrab->GetOwner()->GetActorLocation(),true);

		}
	
}

void UPickup::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("Grab Released"))

		//releases physics handles
		PhysicsHandle->ReleaseComponent();
}


// Called every frame TICK!
void UPickup::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);

	//Draw a trace to visualize
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;

	if (PhysicsHandle->GrabbedComponent)
	{
		//need to move componet
		PhysicsHandle->SetTargetLocation(LineTraceEnd);
	}

}


const FHitResult UPickup:: GetFirstPhysicsBodyInReach()
{
	
	//Get player viewpoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);

	//Draw a trace to visualize
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;
	DrawDebugLine(GetWorld(), PlayerViewPointLocation, LineTraceEnd, FColor(255, 0, 0), false, 0.0f, 0, 10.f);

	//Set up parameters
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	//Ray-cast out to reach distance
	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(OUT Hit, PlayerViewPointLocation, LineTraceEnd, FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), TraceParameters);

	//see what is hit
	AActor* ActorHit = Hit.GetActor();
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Line trace hit: %s"), *(ActorHit->GetName()))
	}
	return Hit;
}
