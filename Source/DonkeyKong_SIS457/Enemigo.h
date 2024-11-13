#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AEnemigo : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AEnemigo();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Malla est�tica para el enemigo
    UPROPERTY(VisibleAnywhere, Category = "Mesh")
    UStaticMeshComponent* EnemigoMesh;

    // Propiedades para movimiento
    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float VelocidadMovimiento = 100.0f;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float LimiteMovimientoY = 500.0f;

private:
    // Direcci�n y posici�n inicial del enemigo
    FVector DireccionMovimiento;
    FVector PosicionInicial;

    // Funci�n para mover al enemigo
    void MoverEnemigo(float DeltaTime);
};
