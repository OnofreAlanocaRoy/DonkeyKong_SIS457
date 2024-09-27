// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponentePlataforma.generated.h"


class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_SIS457_API AComponentePlataforma : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AComponentePlataforma();
	void DestruirPlataforma(); // Método para destruir la plataforma
	void StartOscillation(float OscillationRange, float OscillationSpeed);
	void StartVerticalOscillation(float OscillationRange, float OscillationSpeed);
	void StartDualOscillation(float HorizontalRange, float VerticalRange, float OscillationSpeed); // Nuevo método
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* meshPlataforma;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	int32 PlataformaID;
private:
	FVector InitialPosition;
	FVector OscillationDirection;
	float OscillationRange;
	float OscillationSpeed;
	float OscillationTime;
	// para la fina 3 suba y baje 2 y 4
	float VerticalOscillationRange;
	float VerticalOscillationSpeed;
	bool bIsVerticalOscillation;
	// Para el movimiento dual
	float HorizontalOscillationRange; // Añadir esta línea 
	bool bIsDualOscillation;
};
