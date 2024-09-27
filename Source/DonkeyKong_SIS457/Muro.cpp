#include "Muro.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
AMuro::AMuro()
{
	PrimaryActorTick.bCanEverTick = true;

	// Crear la malla estática del muro
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroMesh"));
	RootComponent = MuroMesh;

	// Definir el perfil de colisión predeterminado
	MuroMesh->BodyInstance.SetCollisionProfileName("BlockAll");
	// Establecer la escala inicial del muro (opcional)
	MuroScale = FVector(1.0f, 1.0f, 1.0f);
}

void AMuro::SetMuroScale(FVector NewScale)
{
	MuroScale = NewScale;
	SetActorScale3D(MuroScale); // Actualizar la escala en el juego
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AMuro::OnCharacterImpact(AActor* CharacterActor)
{
	// Lógica base para cuando el personaje impacta con el muro (puede sobrescribirse en clases hijas)
}
