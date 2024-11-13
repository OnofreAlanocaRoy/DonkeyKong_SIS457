
#include "GameFacade.h"
#include "Enemigo.h"
#include "Engine/World.h"

AGameFacade::AGameFacade()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGameFacade::BeginPlay()
{
	Super::BeginPlay();

	// Generar un enemigo cuando comienza el juego
	GenerarEnemigo();
}

void AGameFacade::GenerarEnemigo()
{
    if (EnemigoClass)
    {
        // Crear el enemigo en el mundo
        FVector SpawnLocation(1207.272461f, -516.779663f, 804.6241f);
        FRotator SpawnRotation = FRotator::ZeroRotator;

        // Crear el enemigo en el mundo
        GetWorld()->SpawnActor<AEnemigo>(EnemigoClass, SpawnLocation, SpawnRotation);

        UE_LOG(LogTemp, Warning, TEXT("Enemigo generado"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("EnemigoClass no está asignado en el editor"));
    }
}