#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h" 
#include "BarrilAdapter.h"
#include "Barril.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API ABarril : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    ABarril();

    // Llamado cada cuadro
    virtual void Tick(float DeltaTime) override;

    // Método para establecer el adaptador
    void EstablecerAdaptador(ABarrilAdapter* NuevoAdaptador);

    // Propiedades para el movimiento
    FVector DireccionMovimiento;   // Dirección en la que el barril se mueve
    float VelocidadMovimiento;     // Velocidad de movimiento
    float DistanciaMaxima;         // Distancia máxima que el barril puede recorrer
    float DistanciaRecorrida;      // Distancia recorrida por el barri
    bool bDetenido;                // Indica si el barril está detenido

protected:
    virtual void BeginPlay() override;
    UStaticMeshComponent* BarrilMesh;

private:
    // Puntero al adaptador
    ABarrilAdapter* BarrilAdapter;
};

//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "Barril.generated.h"
//class UStaticMeshComponent;
//
//UCLASS()
//class DONKEYKONG_SIS457_API ABarril : public AActor
//{
//	GENERATED_BODY()
//
//public:
//	// Sets default values for this actor's properties
//	ABarril();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//	UStaticMeshComponent* BarrilMesh;
//
//public:
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//};
