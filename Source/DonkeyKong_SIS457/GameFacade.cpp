#include "GameFacade.h"
#include "Enemigo.h"
#include "Barril.h"
#include "BarrilAdapter.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AGameFacade::AGameFacade()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AGameFacade::BeginPlay()
{
    Super::BeginPlay();

    // Crear los enemigos al comienzo del juego
    CrearEnemigos();
    CrearBarriles();
}

void AGameFacade::CrearEnemigos()
{
    FVector Ubicacion1(1210.0f, -2360.0f, 400.0f);
    FVector Ubicacion2(1160.0f, -300.0f, 1570.0f);
    FVector Ubicacion3(1160.0f, -500.0f, 2530.0f);

    FRotator Rotacion(0.0f, 0.0f, 0.0f);

    AEnemigo* Enemigo1 = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), Ubicacion1, Rotacion);
    AEnemigo* Enemigo2 = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), Ubicacion2, Rotacion);
    AEnemigo* Enemigo3 = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), Ubicacion3, Rotacion);

    if (Enemigo1)
    {
        Enemigos.Add(Enemigo1);
        Enemigo1->EstablecerRangoMovimiento(-500.0f, 1500.0f, 80.0f); // Valores de ejemplo para el rango y velocidad
    }
    if (Enemigo2)
    {
        Enemigos.Add(Enemigo2);
        Enemigo2->EstablecerRangoMovimiento(-400.0f, 800.0f, 100.0f); // Valores de ejemplo
    }
    if (Enemigo3)
    {
        Enemigos.Add(Enemigo3);
        Enemigo3->EstablecerRangoMovimiento(-600.0f, 1000.0f, 50.0f); // Valores de ejemplo
    }
}



void AGameFacade::IniciarAccionesDeEnemigos()
{
    // Iniciar las acciones de cada enemigo, como patrullar o lanzar barriles
    for (AEnemigo* Enemigo : Enemigos)
    {
        if (Enemigo)
        {
            Enemigo->IniciarAcciones();
        }
    }
}

void AGameFacade::DetenerAccionesDeEnemigos()
{
    // Detener las acciones de todos los enemigos (pausar sus movimientos, etc.)
    for (AEnemigo* Enemigo : Enemigos)
    {
        if (Enemigo)
        {
            Enemigo->DetenerAcciones();
        }
    }
}

// Función para crear barriles y asignarles BarrilAdapter
void AGameFacade::CrearBarriles()
{
    // Crear barriles en diferentes ubicaciones
    FVector Ubicacion1(1206.637085f, 1613.940674f, 400.804321f);
    FVector Ubicacion2(1200.0f, 2000.0f, 1000.0f);

    FRotator Rotacion(90.0f, 0.0f, 0.0f);
    // Barril 1
    ABarril* Barril1 = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), Ubicacion1, Rotacion);
    if (Barril1)
    {
        Barriles.Add(Barril1);

        ABarrilAdapter* BarrilAdapter1 = GetWorld()->SpawnActor<ABarrilAdapter>(ABarrilAdapter::StaticClass(), Ubicacion1, Rotacion);
        if (BarrilAdapter1)
        {
            BarrilAdapters.Add(BarrilAdapter1);
            BarrilAdapter1->EstablecerBarril(Barril1); // Asigna el barril al adaptador
            Barril1->EstablecerAdaptador(BarrilAdapter1); // Asigna el adaptador al barril
        }
    }

    // Barril 2
    ABarril* Barril2 = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), Ubicacion2, Rotacion);
    if (Barril2)
    {
        Barriles.Add(Barril2);

        ABarrilAdapter* BarrilAdapter2 = GetWorld()->SpawnActor<ABarrilAdapter>(ABarrilAdapter::StaticClass(), Ubicacion2, Rotacion);
        if (BarrilAdapter2)
        {
            BarrilAdapters.Add(BarrilAdapter2);
            BarrilAdapter2->EstablecerBarril(Barril2);
            Barril2->EstablecerAdaptador(BarrilAdapter2);
        }
    }

}