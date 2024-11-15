#pragma once

#include "CoreMinimal.h"
#include "EnemigoDecorador.h"
#include "GameFramework/Actor.h"
#include "EnemigoDecoradorCircular.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AEnemigoDecoradorCircular : public AActor, public IEnemigoDecorador
{
    GENERATED_BODY()

public:
    AEnemigoDecoradorCircular();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Implementaci�n del m�todo de la interfaz
    virtual void Vigilar() override;

private:
    float CurrentAngle;
    const float Radius = 50.0f;
    const float AngularSpeed = 1.0f;  // Velocidad de rotaci�n en radianes por segundo
    FVector InitialPosition;
};
