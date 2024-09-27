// Fill out your copyright notice in the Description page of Project Settings.


#include "obtaculoFuego.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h"

AobtaculoFuego::AobtaculoFuego()
{
    PrimaryActorTick.bCanEverTick = false;

    ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
    // Crea y configura el componente de malla.

    FuegoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FuegoMesh"));
    FuegoMesh->SetStaticMesh(mesh.Object);
    RootComponent = FuegoMesh;
}

void AobtaculoFuego::BeginPlay()
{
    Super::BeginPlay();

    // Logica para desaparecer o no
    if (FMath::RandBool()) // 50% de probabilidad de desaparecer
    {
        GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AobtaculoFuego::Desaparecer);
    }
}

void AobtaculoFuego::Desaparecer()
{
    SetActorHiddenInGame(true); // Oculta el actor
    SetActorEnableCollision(false); // Desactiva la colisión
    SetActorTickEnabled(false); // Desactiva el tick si es necesario
}
