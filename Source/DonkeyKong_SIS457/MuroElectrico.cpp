#include "MuroElectrico.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

AMuroElectrico::AMuroElectrico()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200'"));
	// Crear el componente de malla estática
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	MuroMesh->SetStaticMesh(mesh.Object);
	RootComponent = MuroMesh;
	nivelCargaElectrica = 200;

}

void AMuroElectrico::OnCharacterImpact(AActor* CharacterActor)
{
	// Implementar el comportamiento específico del muro eléctrico (ej: daño por electrocución)
	UE_LOG(LogTemp, Warning, TEXT("El personaje ha sido electrocutado!"));
}
void AMuroElectrico::ejercerAccion()
{
}

void AMuroElectrico::descargarElectricidad()
{
}

void AMuroElectrico::cargarElectricidad()
{
}