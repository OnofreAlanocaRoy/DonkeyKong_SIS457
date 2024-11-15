#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "Barril.h"
#include "BarrilAdapter.h"
#include "GameFacade.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AGameFacade : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AGameFacade();

protected:
    virtual void BeginPlay() override;

public:
    // Método para crear enemigos
    void CrearEnemigos();
    UFUNCTION()
    void CrearBarriles();
    // Método para iniciar las acciones de los enemigos (mover, atacar, patrullar)
    void IniciarAccionesDeEnemigos();
    // Método para detener las acciones de los enemigos
    void DetenerAccionesDeEnemigos();
    // Lista de barriles y adaptadores
    UPROPERTY()
    TArray<ABarril*> Barriles;
    UPROPERTY()
    TArray<ABarrilAdapter*> BarrilAdapters;
private:
    // Lista de enemigos creados
    TArray<AEnemigo*> Enemigos;
};
