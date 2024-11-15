// Fill out your copyright notice in the Description page of Project Settings.

#include "MuroFuego.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

AMuroFuego::AMuroFuego()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile'"));
	if (MaterialAsset.Succeeded())
	{
		MuroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
	RootComponent = MuroMesh;

}
void AMuroFuego::OnCharacterImpact(AActor* CharacterActor)
{
	// Implementar el comportamiento específico del muro eléctrico (ej: daño por electrocución)
	UE_LOG(LogTemp, Warning, TEXT("El personaje ha sido electrocutado!"));
}

void AMuroFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroFuego::ejercerAccion()
{
}