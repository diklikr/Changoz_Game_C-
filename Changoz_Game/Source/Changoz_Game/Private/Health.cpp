#pragma once
#include "Health.h"



UHealth::UHealth()
{

	PrimaryComponentTick.bCanEverTick = true;


}


// Called when the game starts
void UHealth::BeginPlay()
{
	Super::BeginPlay();

	
}


// Called every frame
void UHealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UHealth::TakeDamage(float damageAmount)
{
	if (currentHealth <= 0.0f)
	{
		return; // Ya esta muerto
	}

	currentHealth -= damageAmount;
	UE_LOG(LogTemp, Warning, TEXT("Se ha recibido %f de daño. Vida restante: %f"), damageAmount, currentHealth);

	if (currentHealth <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("El actor ha muerto"));
	}
}

void UHealth::Heal(float Heal)
{
	currentHealth += Heal;

	if (currentHealth >= 100.0f)
	{
		currentHealth = 100.0f;
	}
}

