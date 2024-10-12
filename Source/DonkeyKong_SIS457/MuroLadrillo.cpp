#include "MuroLadrillo.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

void AMuroLadrillo::BeginPlay()
{
	Super::BeginPlay();
}
AMuroLadrillo::AMuroLadrillo()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200'"));

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (MaterialAsset.Succeeded())
	{
		MuroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
	// Crear el componente de malla estática
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	MuroMesh->SetStaticMesh(mesh.Object);
	RootComponent = MuroMesh;

}

void AMuroLadrillo::OnCharacterImpact(AActor* CharacterActor)
{
	// Implementar el comportamiento específico del muro de ladrillo (ej: daño por impacto)
	UE_LOG(LogTemp, Warning, TEXT("El personaje ha sido golpeado por un ladrillo!"));

}

void AMuroLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroLadrillo::ejercerAccion()
{
}
