#include "MuroElectrico.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"


AMuroElectrico::AMuroElectrico()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroElectricoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroElectricoAsset.Succeeded())
	{
		MuroMesh->SetStaticMesh(MuroElectricoAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
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

	nivelCargaElectrica = 200;
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