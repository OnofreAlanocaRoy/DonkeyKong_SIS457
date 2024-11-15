#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

class IMovimientoStrategy;


UCLASS()
class DONKEYKONG_SIS457_API AEnemigo : public AActor
{
    GENERATED_BODY()

public:
    AEnemigo();
	// Función para establecer la estrategia de movimiento
    void SetMovimientoStrategy(TScriptInterface<IMovimientoStrategy> NuevaEstrategia);
    // Función que recibe la notificación del reloj
    void RecibirNotificacion();
protected:
    virtual void BeginPlay() override;

    UStaticMeshComponent* EnemigoMesh; // Debería estar inicializado y configurado correctamente
    virtual void Tick(float DeltaTime) override;

public:
    void IniciarAcciones();    // Acción de inicio del enemigo
    void DetenerAcciones();    // Detiene las acciones del enemigo
    void MoverEnemigo(float DeltaTime);  // Mueve al enemigo

    void EstablecerRangoMovimiento(float LimiteInferiorY, float LimiteSuperiorY, float Velocidad);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
    int DanioBase;  // Daño base enemigo

private:
    FVector DireccionMovimiento;  // Dirección del movimiento
    float DistanciaRecorrida;  // Distancia recorrida
    float DistanciaMaxima;  // Distancia máxima de movimiento
    bool bMoviendo;  // Indica si el enemigo se está moviendo
    FVector PuntoInicial;  // Punto inicial del movimiento
    FVector PuntoFinal;  // Punto final del movimiento
    float VelocidadMovimiento;  // Velocidad del movimiento
    bool bMoviendoHaciaFinal;  // Dirección de movimiento hacia el final

    UPROPERTY(VisibleAnywhere, Category = "Enemigo")
    UStaticMeshComponent* MeshComponent;  // Componente de la malla del enemigo

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float DistanciaMinima = 100.0f;  // Distancia mínima para detener la persecución

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float Velocidad = 300.0f;  // Velocidad de persecución
	// Puntero a la estrategia de movimiento
    UPROPERTY()
    TScriptInterface<IMovimientoStrategy> MovimientoStrategy;
};
