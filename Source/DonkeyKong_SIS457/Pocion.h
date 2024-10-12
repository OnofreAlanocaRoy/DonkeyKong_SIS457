// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pocion.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API APocion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APocion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FString tipoPocion;
	FString nombrePocion;
	FString viscosidad;
	FString sangre;
	TArray<FString*> hierbas;

public:	
	virtual void hervir();
	virtual void burbujear();
	virtual void preparar();
	virtual void embotellar();

	FString getNombrePocion();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
