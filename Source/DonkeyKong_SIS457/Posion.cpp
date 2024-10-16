// Fill out your copyright notice in the Description page of Project Settings.


#include "Posion.h"

// Sets default values
APosion::APosion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APosion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

