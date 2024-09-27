#pragma once

#include "CoreMinimal.h"
#include "Obtaculo.h"
#include "ObtaculoCierra1.generated.h"
class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_SIS457_API AObtaculoCierra1 : public AObtaculo
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AObtaculoCierra1();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    // Nuevas funciones para establecer la escala y la rotación
    void SetCierraScale(FVector NewScale);
    void SetCierraRotation(FRotator NewRotation);
private:
    // Componentes
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* CierraMesh;
    // Movimiento
    FVector InitialLocation;
    FVector TargetLocation;
    bool bMovingRight;
    // Timer para cambiar la dirección
    FTimerHandle TimerHandle;
    // Función para alternar el movimiento
    void ToggleMovement();
    // Función para mover el obstáculo
    void MoveObstaculo(float DeltaTime);
};