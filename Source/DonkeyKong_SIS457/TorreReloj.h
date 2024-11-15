#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "TorreReloj.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API ATorreReloj : public AActor
{
    GENERATED_BODY()

public:
    ATorreReloj();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Añadir suscriptores
    void AnadirSuscriptor(class AActor* Suscriptor);
    // Eliminar suscriptores
    void EliminarSuscriptor(class AActor* Suscriptor);
    // Notificar a los suscriptores
    void Notificar();

private:
    // Lista de suscriptores (Observadores)
    TArray<AActor*> Suscriptores;

    // Timer para el reloj (3 minutos)
    FTimerHandle TimerHandle;
    void RelojTick();

    // Función de tiempo de notificación
    void IniciarTemporizador();
};
