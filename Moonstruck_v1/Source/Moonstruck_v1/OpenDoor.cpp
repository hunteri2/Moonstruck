// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	//Set the token item to the correct object. SN: This works, but intellisense doesn't realize this. IGNORE
	TokenItem = GetWorld()->GetFirstPlayerController()->GetPawn();
	//Set Owner AKA the object that's being efected by the users interaction with the trigger plate
	Owner = GetOwner();
	
}

void UOpenDoor::TriggerEvent()//This is a poor name, however I'm not sure what specifically it will do. So remember to change later.
{
	//Set rotation
	Owner->SetActorRotation(FRotator(0.0f, DoorAngle, 0.0f));
}

void UOpenDoor::CloseDoor()
{
	//Set rotation
	Owner->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Poll the Trigger Volume
	if (PressurePlate && PressurePlate->IsOverlappingActor(TokenItem)) 
	{
		TriggerEvent();
		LastDoorOpen = GetWorld()->GetTimeSeconds();
	}
	
	//Check if it's time to close the door
	if (GetWorld()->GetTimeSeconds() >= LastDoorOpen + DoorCloseDelay) 
	{
		CloseDoor();
	}
}

