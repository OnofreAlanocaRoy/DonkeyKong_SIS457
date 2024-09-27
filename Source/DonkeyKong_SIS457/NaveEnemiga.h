#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

// Declaración adelantada de clases
class AProyectil; // Asumimos que tendrás una clase de proyectil
class UStaticMeshComponent;

UCLASS()
class ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	// Constructor
	ANaveEnemiga();

protected:
	// Llamada al iniciar el juego o cuando el actor es spawn
	virtual void BeginPlay() override;

	// Componente de la malla estática
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* NaveMesh;

	// Método para manejar el disparo de proyectiles
	void DispararProyectil();

	// Timer para disparo
	FTimerHandle DisparoTimerHandle;

	// Método para mover la nave aleatoriamente en el eje Y
	void MoverAleatoriamente();

	// Timer para movimiento
	FTimerHandle MovimientoTimerHandle;

	// Rango de movimiento en el eje Y
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float RangoMovimientoY = 500.0f;

	// Velocidad del movimiento
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float VelocidadMovimiento = 300.0f;

	// Método para spawnear proyectiles

public:
	// Llamado cada frame
	virtual void Tick(float DeltaTime) override;
};
