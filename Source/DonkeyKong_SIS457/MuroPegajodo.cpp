
#include "MuroPegajodo.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"


void AMuroPegajodo::BeginPlay()
{
	Super::BeginPlay();

}

AMuroPegajodo::AMuroPegajodo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroEnvenenadoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroEnvenenadoAsset.Succeeded())
	{
		MuroMesh->SetStaticMesh(MuroEnvenenadoAsset.Object);
	}

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
}

void AMuroPegajodo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroPegajodo::ejercerAccion()
{
}