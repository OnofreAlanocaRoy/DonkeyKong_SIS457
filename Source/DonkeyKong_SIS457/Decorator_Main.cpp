#include "Decorator_Main.h"
#include "Enemigo.h"
#include "MovimientoLineal.h"
#include "MovimientoZigzag.h"

ADecorator_Main::ADecorator_Main()
{
    PrimaryActorTick.bCanEverTick = true;
}

#include "Decorator_Main.h"
#include "Enemigo.h"
#include "MovimientoLineal.h"
#include "MovimientoZigzag.h"

void ADecorator_Main::BeginPlay()
{
    Super::BeginPlay();

    // Generar múltiples enemigos con movimientos aleatorios
    for (int32 i = 0; i < 5; ++i) // Cambia el número de enemigos según tu necesidad
    {
        // Crear un enemigo en el mundo
        AEnemigo* EnemigoConcreto = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass());

        if (EnemigoConcreto)
        {
            // Elegir una estrategia de movimiento aleatoria
            int32 MovimientoAleatorio = FMath::RandRange(0, 1); // 0 para Lineal, 1 para Zigzag

            if (MovimientoAleatorio == 0)
            {
                // Asignar Movimiento Lineal
                UMovimientoLineal* MovimientoLineal = NewObject<UMovimientoLineal>(this);
                EnemigoConcreto->SetMovimientoStrategy(MovimientoLineal);
            }
            else
            {
                // Asignar Movimiento Zigzag
                UMovimientoZigzag* MovimientoZigzag = NewObject<UMovimientoZigzag>(this);
                EnemigoConcreto->SetMovimientoStrategy(MovimientoZigzag);
            }
        }
    }
}


void ADecorator_Main::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
