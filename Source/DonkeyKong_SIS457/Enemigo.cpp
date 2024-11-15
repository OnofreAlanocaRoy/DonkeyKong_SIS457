
// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemigo.h"
#include "DonkeyKong_SIS457Character.h"
#include "Components/StaticMeshComponent.h"
#include "TorreReloj.h"
#include "MovimientoStrategy.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AEnemigo::AEnemigo()
{
    PrimaryActorTick.bCanEverTick = true; 
     // Establecer direcci�n inicial de movimiento en el eje Y
    ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
    EnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemigoMesh"));
    EnemigoMesh->SetStaticMesh(mesh.Object);
    RootComponent = EnemigoMesh;
    RootComponent = MeshComponent;
    DireccionMovimiento = FVector(0.0f, 200.0f, 0.0f); // Movimiento a lo largo del eje Y
    DistanciaRecorrida = 0.0f;
    DistanciaMaxima = 500.0f; // Distancia m�xima a recorrer
    bMoviendo = false; 

    DanioBase = 10;  // Valor de da�o predeterminado
	MovimientoStrategy = nullptr;  // Inicializa el puntero de la estrategia de movimiento
}

void AEnemigo::BeginPlay()
{
    Super::BeginPlay();
    // Obtener el reloj y suscribirse
    ATorreReloj* Reloj = Cast<ATorreReloj>(UGameplayStatics::GetActorOfClass(GetWorld(), ATorreReloj::StaticClass()));
    if (Reloj)
    {
        Reloj->AnadirSuscriptor(this);
    }
}

void AEnemigo::IniciarAcciones()
{
    bMoviendo = true;
}

void AEnemigo::DetenerAcciones()
{
    bMoviendo = false;
}

void AEnemigo::MoverEnemigo(float DeltaTime)
{
    if (bMoviendo)
    {
        // Mover al enemigo en la direcci�n Y
        FVector NuevaPosicion = GetActorLocation() + DireccionMovimiento * DeltaTime * 100.0f;
        SetActorLocation(NuevaPosicion);
        DistanciaRecorrida += FVector::Dist(GetActorLocation(), NuevaPosicion);

        // Si el enemigo ha recorrido la distancia m�xima, cambiar de direcci�n
        if (DistanciaRecorrida >= DistanciaMaxima)
        {
            DireccionMovimiento = -DireccionMovimiento;
            DistanciaRecorrida = 0.0f;
        }
    }
}

void AEnemigo::EstablecerRangoMovimiento(float LimiteInferiorY, float LimiteSuperiorY, float Velocidades)
{
    PuntoInicial = GetActorLocation();
    // Calcular el punto final aleatorio en el eje Y, sumando un valor aleatorio dentro del rango
    PuntoFinal = PuntoInicial;
    PuntoFinal.Y += FMath::RandRange(LimiteInferiorY, LimiteSuperiorY); // Establece un punto final aleatorio en Y
    VelocidadMovimiento = Velocidades;
    bMoviendoHaciaFinal = true; // Comienza el movimiento
}
void AEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime); 
	// Mover al enemigo seg�n la estrategia de movimiento
    if (MovimientoStrategy)
    {
        MovimientoStrategy->Mover(this, DeltaTime);
    }

    // Verifica si el enemigo debe moverse
    if (bMoviendo)
    {
        FVector PosicionActual = GetActorLocation();
        FVector Objetivo = bMoviendoHaciaFinal ? PuntoFinal : PuntoInicial;

        // Mueve al enemigo hacia el objetivo
        FVector NuevaPosicion = FMath::VInterpConstantTo(PosicionActual, Objetivo, DeltaTime, VelocidadMovimiento);
        SetActorLocation(NuevaPosicion);

        // Verifica si ha alcanzado el objetivo para invertir la direcci�n
        if (FVector::Dist(NuevaPosicion, Objetivo) < 10.0f) // Tolerancia para cambiar de direcci�n
        {
            bMoviendoHaciaFinal = !bMoviendoHaciaFinal; // Cambia de direcci�n
        }
    }
}

void AEnemigo::RecibirNotificacion()
{
    // Mostrar mensaje en la pantalla cuando el enemigo recibe la notificaci�n
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("�Notificaci�n recibida! El enemigo est� reaccionando."));
    }

    UE_LOG(LogTemp, Warning, TEXT("�Notificaci�n recibida! El enemigo est� reaccionando."));
}
void AEnemigo::SetMovimientoStrategy(TScriptInterface<IMovimientoStrategy> NuevaEstrategia)
{
    MovimientoStrategy = NuevaEstrategia;
}