// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPegajodo.h"

AMuroPegajodo::AMuroPegajodo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200'"));
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
