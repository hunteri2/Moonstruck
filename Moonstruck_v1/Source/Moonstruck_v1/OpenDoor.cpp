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

	//TriggerEvent();
	
}

void UOpenDoor::TriggerEvent()//This is a poor name, however I'm not sure what specifically it will do. So remember to change later.
{
	// Find Owner of Object
	AActor* Owner = GetOwner();

	//
	FRotator NewRotation = FRotator(0.0f, 90.0f, 0.0f);

	//Set rotation
	Owner->SetActorRotation(NewRotation);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Poll the Trigger Volume
	if (PressurePlate && PressurePlate->IsOverlappingActor(TokenItem)) 
	{
		TriggerEvent();
	}
	//If correct token is given trigger event

}

