#include "BarrilAdapter.h"
#include "Barril.h"
#include "DonkeyKong_SIS457Character.h"
#include "Kismet/GameplayStatics.h"

// Constructor
ABarrilAdapter::ABarrilAdapter()
{
    PrimaryActorTick.bCanEverTick = true;

    VelocidadMovimiento = 300.0f;
    DistanciaMaxima = 1000.0f;
    bMoviendoHaciaJugador = true;
    DistanciaRecorrida = 0.0f;
}

// Llamado cuando el juego comienza
void ABarrilAdapter::BeginPlay()
{
    Super::BeginPlay();

    // Obtener al jugador
    ADonkeyKong_SIS457Character* Jugador = Cast<ADonkeyKong_SIS457Character>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    if (Jugador)
    {
        Objetivo = Jugador->GetActorLocation();
    }
}

// Llamado cada cuadro
void ABarrilAdapter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (Barril && !Barril->bDetenido) // Si el barril no está detenido, lo movemos
    {
        MoverHaciaJugador(DeltaTime);
    }
}

// Método para mover el barril hacia el jugador
void ABarrilAdapter::MoverHaciaJugador(float DeltaTime)
{
    if (!Barril) return;

    FVector PosicionActual = Barril->GetActorLocation();
    FVector Direccion = Objetivo - PosicionActual;
    Direccion.Normalize();

    // Mover el barril hacia el jugador
    FVector Movimiento = Direccion * VelocidadMovimiento * DeltaTime;
    Barril->SetActorLocation(PosicionActual + Movimiento);

    DistanciaRecorrida += Movimiento.Size();

    // Cambiar la dirección si se ha recorrido la distancia máxima
    if (DistanciaRecorrida >= DistanciaMaxima)
    {
        bMoviendoHaciaJugador = !bMoviendoHaciaJugador;
        DistanciaRecorrida = 0.0f;

        // Invertir el objetivo en función de la dirección actual
        if (bMoviendoHaciaJugador)
        {
            ADonkeyKong_SIS457Character* Jugador = Cast<ADonkeyKong_SIS457Character>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
            if (Jugador)
            {
                Objetivo = Jugador->GetActorLocation();
            }
        }
        else
        {
            Objetivo = Barril->GetActorLocation() + FVector(1000.0f, 0.0f, 0.0f);
        }
    }
}

// Establecer el barril para este adaptador
void ABarrilAdapter::EstablecerBarril(ABarril* NuevoBarril)
{
    Barril = NuevoBarril;
    if (Barril)
    {
        // Sincronizar propiedades del barril con las del adaptador si es necesario
        Barril->VelocidadMovimiento = VelocidadMovimiento;
        Barril->DistanciaMaxima = DistanciaMaxima;
    }
}
