#include "MuroLadrillo.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

AMuroLadrillo::AMuroLadrillo()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200'"));
	// Crear el componente de malla est�tica
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	MuroMesh->SetStaticMesh(mesh.Object);
	RootComponent = MuroMesh;
}

void AMuroLadrillo::OnCharacterImpact(AActor* CharacterActor)
{
	// Implementar el comportamiento espec�fico del muro de ladrillo (ej: da�o por impacto)
	UE_LOG(LogTemp, Warning, TEXT("El personaje ha sido golpeado por un ladrillo!"));

}
