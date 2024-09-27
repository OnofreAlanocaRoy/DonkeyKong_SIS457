// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_SIS457_API ACapsula : public AActor
{
	GENERATED_BODY()

public:
	// Establece valores predeterminados para las propiedades de este actor
	ACapsula();

protected:
	// Se llama cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;
	//es un puntero encontrar un componente
	//QUE ES VISIBLE EN LA PANTALLA
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* capsulaMesh;

public:
	// Llama a cada fotograma
	virtual void Tick(float DeltaTime) override;

};
