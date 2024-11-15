#include "MuroCongelado.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

AMuroCongelado::AMuroCongelado()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// Crear el componente de malla estática
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	MuroMesh->SetStaticMesh(mesh.Object);
	RootComponent = MuroMesh;
}
void AMuroCongelado::Tick(float DeltaTime)
{
}
void AMuroCongelado::ejercerAccion()
{
}
void AMuroCongelado::OnCharacterImpact(AActor* CharacterActor)
{
	// Implementar el comportamiento específico del muro congelado (ej: ralentizar al personaje)
	UE_LOG(LogTemp, Warning, TEXT("El personaje ha sido congelado!"));
}