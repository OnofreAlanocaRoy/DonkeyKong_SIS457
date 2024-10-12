// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPegajodo.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"


void AMuroPegajodo::BeginPlay()
{
	Super::BeginPlay();

}

AMuroPegajodo::AMuroPegajodo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	if (MaterialAsset.Succeeded())
	{
		MuroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
	// Crear el componente de malla estática
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	MuroMesh->SetStaticMesh(mesh.Object);
	RootComponent = MuroMesh;


}
void AMuroPegajodo::OnCharacterImpact(AActor* CharacterActor)
{
	// Implementar el comportamiento específico del muro pegajoso (ej: ralentizar al personaje)
	UE_LOG(LogTemp, Warning, TEXT("El personaje ha sido pegado!"));
}

void AMuroPegajodo::Tick(float DeltaTime)
{
}

void AMuroPegajodo::ejercerAccion()
{
}
