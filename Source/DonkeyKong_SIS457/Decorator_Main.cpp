
#include "Decorator_Main.h"
#include "Enemigo.h"
#include "MovimientoLineal.h"
#include "MovimientoZigzag.h"

ADecorator_Main::ADecorator_Main()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ADecorator_Main::BeginPlay()
{
    Super::BeginPlay();

    // Número de enemigos a generar
    int32 NumeroEnemigos = 5;

    for (int32 i = 0; i < NumeroEnemigos; i++)
    {
        // Generar posición específica para cada enemigo
        FVector SpawnLocation = FVector(2190.0f, -590.0f, 240.0f); // Nueva posición específica
        FRotator SpawnRotation = FRotator::ZeroRotator;

        // Validar GetWorld()
        if (!GetWorld()) continue;

        // Generar al enemigo
        AEnemigo* EnemigoConcreto = GetWorld()->SpawnActor<AEnemigo>(
            AEnemigo::StaticClass(),
            SpawnLocation,
            SpawnRotation
        );

        if (EnemigoConcreto)
        {
            // Elegir una estrategia aleatoria
            int32 EstrategiaSeleccionada = FMath::RandRange(0, 1); // 0: Lineal, 1: Zigzag

            if (EstrategiaSeleccionada == 0)
            {
                // Asignar movimiento lineal
                UMovimientoLineal* MovimientoLineal = NewObject<UMovimientoLineal>(this);
                if (MovimientoLineal)
                {
                    TScriptInterface<IMovimientoStrategy> EstrategiaLineal;
                    EstrategiaLineal.SetObject(MovimientoLineal);
                    EstrategiaLineal.SetInterface(Cast<IMovimientoStrategy>(MovimientoLineal));
                    EnemigoConcreto->SetMovimientoStrategy(EstrategiaLineal);
                }
            }
            else
            {
                // Asignar movimiento zigzag
                UMovimientoZigzag* MovimientoZigzag = NewObject<UMovimientoZigzag>(this);
                if (MovimientoZigzag)
                {
                    TScriptInterface<IMovimientoStrategy> EstrategiaZigzag;
                    EstrategiaZigzag.SetObject(MovimientoZigzag);
                    EstrategiaZigzag.SetInterface(Cast<IMovimientoStrategy>(MovimientoZigzag));
                    EnemigoConcreto->SetMovimientoStrategy(EstrategiaZigzag);
                }
            }

            // Registro en consola
            UE_LOG(LogTemp, Warning, TEXT("Enemigo generado en (%s) con estrategia: %s"),
                *SpawnLocation.ToString(),
                EstrategiaSeleccionada == 0 ? TEXT("Lineal") : TEXT("Zigzag"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("No se pudo generar el enemigo en la ubicación (%s)"), *SpawnLocation.ToString());
        }
    }
}

void ADecorator_Main::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
