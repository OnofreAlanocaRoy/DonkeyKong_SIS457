// Fill out your copyright notice in the Description page of Project Settings.


#include "Pocion.h"

// Sets default values
APocion::APocion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void APocion::BeginPlay()
{
	Super::BeginPlay();
	
}

void APocion::hervir()
{
}

void APocion::burbujear()
{
}

void APocion::preparar()
{
}

void APocion::embotellar()
{
}

FString APocion::getNombrePocion()
{
	return FString();
}

// Called every frame
void APocion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

