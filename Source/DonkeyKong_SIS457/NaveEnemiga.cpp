#include "NaveEnemiga.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Proyectil.h"  // Asumimos que tienes una clase de proyectil

// Constructor
ANaveEnemiga::ANaveEnemiga()
{
	// Configurar este actor para llamar a Tick() cada frame
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	// Crear el componente de malla est�tica
	NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	NaveMesh->SetStaticMesh(mesh.Object);
	RootComponent = NaveMesh;
	// Configurar el componente de colisi�n
	UPrimitiveComponent* CollisionComponent = Cast<UPrimitiveComponent>(GetComponentByClass(UPrimitiveComponent::StaticClass()));
	if (CollisionComponent)
	{
		// Asegurarse de que la nave ignore los proyectiles
		CollisionComponent->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECollisionResponse::ECR_Ignore); // ECC_GameTraceChannel1 ser�a el canal del proyectil si lo creaste como "Proyectil"
	}
	
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();

	// Configurar el temporizador para disparar proyectiles
	GetWorld()->GetTimerManager().SetTimer(DisparoTimerHandle, this, &ANaveEnemiga::DispararProyectil, 3.0f, true);

	// Configurar el temporizador para mover la nave aleatoriamente
	GetWorld()->GetTimerManager().SetTimer(MovimientoTimerHandle, this, &ANaveEnemiga::MoverAleatoriamente, 3.0f, true);
}

// Mover aleatoriamente la nave en el eje Y
void ANaveEnemiga::MoverAleatoriamente()
{
	FVector NewLocation = GetActorLocation();
	NewLocation.Y += FMath::RandRange(-RangoMovimientoY, RangoMovimientoY);
	SetActorLocation(NewLocation);
}

// M�todo de disparo
void ANaveEnemiga::DispararProyectil()
{
	if (GetWorld())
	{
		FVector SpawnLocation = GetActorLocation() + FVector(0, 0, -50.0f); // Ajusta la ubicaci�n del proyectil
		FRotator SpawnRotation = FRotator::ZeroRotator; // Rotaci�n base, ajustable si es necesario

		// Spawnear el proyectil en el mundo
		AProyectil* Proyectil = GetWorld()->SpawnActor<AProyectil>(AProyectil::StaticClass(), SpawnLocation, SpawnRotation);

		if (Proyectil)
		{
			// Generar una direcci�n completamente aleatoria en el espacio 3D
			float RandomX = FMath::RandRange(-1.0f, 1.0f);
			float RandomY = FMath::RandRange(-1.0f, 1.0f);
			float RandomZ = FMath::RandRange(-1.0f, 1.0f);

			FVector Direction = FVector(RandomX, RandomY, RandomZ).GetSafeNormal(); // Normalizar el vector para que tenga magnitud 1

			// Configurar la direcci�n aleatoria del disparo
			Proyectil->SetDireccionDisparo(Direction);
		}
	}
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Otras l�gicas de actualizaci�n pueden ir aqu�
}

