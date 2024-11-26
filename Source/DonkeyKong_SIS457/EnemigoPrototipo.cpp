// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoPrototipo.h"

// Sets default values
AEnemigoPrototipo::AEnemigoPrototipo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AEnemigoPrototipo* AEnemigoPrototipo::Clonar()
{
	// Implementación vacía para ser sobreescrita por las subclases
	return nullptr;
}
// Called when the game starts or when spawned
void AEnemigoPrototipo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoPrototipo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

