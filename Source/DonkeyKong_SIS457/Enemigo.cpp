// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"

AEnemigo::AEnemigo()
{
     // Establecer direcci�n inicial de movimiento en el eje Y
    DireccionMovimiento = FVector(0.0f, 200.0f, 0.0f);
    ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

    EnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemigoMesh"));
    EnemigoMesh->SetStaticMesh(mesh.Object);
    RootComponent = EnemigoMesh;
}

// Llamada cuando el juego comienza o cuando el actor es instanciado
void AEnemigo::BeginPlay()
{
    Super::BeginPlay();
    PosicionInicial = GetActorLocation();  // Guardar la posici�n inicial
}

// Llamada cada fotograma
void AEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MoverEnemigo(DeltaTime);
}

// Funci�n para mover al enemigo
void AEnemigo::MoverEnemigo(float DeltaTime)
{
    FVector NuevaPosicion = GetActorLocation() + (DireccionMovimiento * VelocidadMovimiento * DeltaTime);

    // Cambiar la direcci�n si alcanza el l�mite de movimiento en Y
    if (FMath::Abs(NuevaPosicion.Y - PosicionInicial.Y) >= LimiteMovimientoY)
    {
        DireccionMovimiento *= -1.0f;
    }

    SetActorLocation(NuevaPosicion);
}