#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BarrilAdapter.generated.h"

// Forward declaration de ABarril
class ABarril;

UCLASS()
class DONKEYKONG_SIS457_API ABarrilAdapter : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    ABarrilAdapter();

protected:
    virtual void BeginPlay() override;

public:
    // Llamado cada cuadro
    virtual void Tick(float DeltaTime) override;

    // Método para mover el barril hacia el jugador
    void MoverHaciaJugador(float DeltaTime);

    // Establecer el barril específico para adaptar su comportamiento
    void EstablecerBarril(ABarril* NuevoBarril);

private:
    // Referencia al barril que será controlado por el adaptador
    ABarril* Barril;

    FVector DireccionMovimiento;   // Dirección en la que el barril se moverá
    FVector Objetivo;              // Objetivo del movimiento (jugador)
    float VelocidadMovimiento;     // Velocidad de movimiento del barril
    float DistanciaMaxima;         // Distancia máxima que el barril puede recorrer
    float DistanciaRecorrida;      // Distancia recorrida por el barril
    bool bMoviendoHaciaJugador;    // Indica si el barril se mueve hacia el jugador
};
