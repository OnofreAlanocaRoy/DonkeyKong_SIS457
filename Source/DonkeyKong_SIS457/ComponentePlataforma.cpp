// Fill out your copyright notice in the Description page of Project Settings.
#include "ComponentePlataforma.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
AComponentePlataforma::AComponentePlataforma()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("	StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	meshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = meshPlataforma;

	FVector NewScale(2.0f, 6.0f, 0.5f); // Cambia estos valores según tus necesidades, forma y tamaño de la plataforma
	SetActorScale3D(NewScale);


}

// Called when the game starts or when spawned
void AComponentePlataforma::BeginPlay()
{
	Super::BeginPlay();
	InitialPosition = GetActorLocation();
}
// Called every frame
void AComponentePlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsDualOscillation) {
		OscillationTime += DeltaTime * OscillationSpeed;
		float SinWaveX = FMath::Sin(OscillationTime);
		float SinWaveZ = FMath::Sin(OscillationTime);
		FVector NewPosition = InitialPosition;
		NewPosition.X += SinWaveX * HorizontalOscillationRange; // Movimiento horizontal
		NewPosition.Z += SinWaveZ * VerticalOscillationRange; // Movimiento vertical
		SetActorLocation(NewPosition);
	}

	if (OscillationRange > 0.0f && OscillationSpeed > 0.0f)
	{
		OscillationTime += DeltaTime * OscillationSpeed;
		float SinWave = FMath::Sin(OscillationTime);
		FVector NewPosition = InitialPosition + OscillationDirection * SinWave * OscillationRange;
		SetActorLocation(NewPosition);
	}
	if (bIsVerticalOscillation)
	{
		OscillationTime += DeltaTime * VerticalOscillationSpeed;
		float SinWave = FMath::Sin(OscillationTime);
		FVector NewPosition = InitialPosition;
		NewPosition.Z += SinWave * VerticalOscillationRange;
		SetActorLocation(NewPosition);
	}
}

void AComponentePlataforma::DestruirPlataforma()
{
	UE_LOG(LogTemp, Warning, TEXT("Plataforma destruida"));
	Destroy();
}

void AComponentePlataforma::StartOscillation(float InOscillationRange, float InOscillationSpeed)
{
	OscillationRange = InOscillationRange;
	OscillationSpeed = InOscillationSpeed;
	OscillationDirection = FVector(0.0f, 1.0f, 0.0f); // Movimiento en el eje y
	OscillationTime = 0.0f;
}

void AComponentePlataforma::StartVerticalOscillation(float InOscillationRange, float InOscillationSpeed)
{
	VerticalOscillationRange = InOscillationRange;
	VerticalOscillationSpeed = InOscillationSpeed;
	bIsVerticalOscillation = true;
	OscillationTime = 0.0f;
}
void AComponentePlataforma::StartDualOscillation(float InHorizontalRange, float InVerticalRange, float InOscillationSpeed) {
	HorizontalOscillationRange = InHorizontalRange;
	VerticalOscillationRange = InVerticalRange;
	OscillationSpeed = InOscillationSpeed;
	OscillationTime = 0.0f;
	bIsDualOscillation = true; // Asegúrate de que esta variable esté definida
}