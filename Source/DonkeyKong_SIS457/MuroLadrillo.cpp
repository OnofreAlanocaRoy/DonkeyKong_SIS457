
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
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroLadrilloAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroLadrilloAsset.Succeeded())
	{
		MuroMesh->SetStaticMesh(MuroLadrilloAsset.Object);
	}

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
}

void AMuroLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroLadrillo::ejercerAccion()
{
}