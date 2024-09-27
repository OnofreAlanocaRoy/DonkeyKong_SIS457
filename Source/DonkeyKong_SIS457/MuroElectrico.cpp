#include "MuroElectrico.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

AMuroElectrico::AMuroElectrico()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200'"));
	// Crear el componente de malla est�tica
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	MuroMesh->SetStaticMesh(mesh.Object);
	RootComponent = MuroMesh;

}

void AMuroElectrico::OnCharacterImpact(AActor* CharacterActor)
{
	// Implementar el comportamiento espec�fico del muro el�ctrico (ej: da�o por electrocuci�n)
	UE_LOG(LogTemp, Warning, TEXT("El personaje ha sido electrocutado!"));
}
