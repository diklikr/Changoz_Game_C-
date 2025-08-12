// Copyright Epic Games, Inc. All Rights Reserved.

#include "Changoz_GamePickUpComponent.h"

UChangoz_GamePickUpComponent::UChangoz_GamePickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UChangoz_GamePickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UChangoz_GamePickUpComponent::OnSphereBeginOverlap);
}

void UChangoz_GamePickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AChangoz_GameCharacter* Character = Cast<AChangoz_GameCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
