// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoPrototipo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AEnemigoPrototipo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	AEnemigoPrototipo();

	// Método para clonar este enemigo
	virtual AEnemigoPrototipo* Clonar();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
