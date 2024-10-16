
#include "Proyectil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"


// Sets default values
AProyectil::AProyectil()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectilMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	// Create mesh component for the projectile sphere
	ProjectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectilMesh->SetStaticMesh(ProjectilMeshAsset.Object);
	ProjectilMesh->SetupAttachment(RootComponent);
	// Configurar la colisión para que solo colisione con personajes (Pawn)
	ProjectilMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ProjectilMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);  // El proyectil puede ser dinámico
	ProjectilMesh->SetCollisionResponseToAllChannels(ECR_Ignore);  // Ignora todo por defecto
	ProjectilMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);  // Colisiona solo con el canal de "Pawn" (personajes)
	// Asignar el evento de colisión (opcional, si aún quieres detectar el impacto con el Character)
	ProjectilMesh->OnComponentHit.AddDynamic(this, &AProyectil::OnHit);  // Detectar colisiones solo con "Pawn"


	RootComponent = ProjectilMesh;
	//// Utilice un ProjectileMovementComponent para controlar el movimiento de este proyectil
	ProjectilMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectilMovement->UpdatedComponent = ProjectilMesh;
	ProjectilMovement->InitialSpeed = 3000.f;
	ProjectilMovement->MaxSpeed = 3000.f;
	ProjectilMovement->bRotationFollowsVelocity = true;
	ProjectilMovement->bShouldBounce = false;
	ProjectilMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 2.0f;
	GunOffset = FVector(90.f, 0.f, 0.f);
}

void AProyectil::SetDireccionDisparo(FVector Direccion)
{
	if (ProjectilMovement)
	{
		ProjectilMovement->Velocity = Direccion * ProjectilMovement->InitialSpeed;
	}
}

// Called when the game starts or when spawned
void AProyectil::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AProyectil::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		//esla colicion de fisica lo bota empujar
	/*	OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());*/
	}

	Destroy();
}
