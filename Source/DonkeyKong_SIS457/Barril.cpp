#include "Barril.h"
#include "BarrilAdapter.h"
#include "UObject/ConstructorHelpers.h"

// Constructor
ABarril::ABarril()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

    BarrilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrilMesh"));
    RootComponent = BarrilMesh;
    BarrilMesh->SetStaticMesh(BarrilMeshAsset.Object);

    VelocidadMovimiento = 300.0f;
    DistanciaMaxima = 1000.0f;
    DistanciaRecorrida = 0.0f;
    bDetenido = false;
}

// Llamado cada cuadro
void ABarril::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Si el barril se mueve, actualizamos su posición aquí
    if (!bDetenido)
    {
        FVector NuevaPosicion = GetActorLocation() + DireccionMovimiento * DeltaTime * VelocidadMovimiento;
        SetActorLocation(NuevaPosicion);
        DistanciaRecorrida += FVector::Dist(GetActorLocation(), NuevaPosicion);
        // Detenerlo al alcanzar la distancia máxima
        if (DistanciaRecorrida >= DistanciaMaxima)
        {
            bDetenido = true;
        }
    }
}

// Llamado cuando el juego comienza
void ABarril::BeginPlay()
{
    Super::BeginPlay();
}

// Definición de la función para establecer el adaptador
void ABarril::EstablecerAdaptador(ABarrilAdapter* NuevoAdaptador)
{
    BarrilAdapter = NuevoAdaptador;
}


//
//#include "Barril.h"
//
//
//ABarril::ABarril()
//{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
//
//	BarrilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrilMesh"));
//	RootComponent = BarrilMesh;
//	BarrilMesh->SetStaticMesh(BarrilMeshAsset.Object);
//	// Habilitar la simulación de física
//	BarrilMesh->SetSimulatePhysics(true);
//	BarrilMesh->SetMassOverrideInKg(NAME_None, 15050.0f); // Ajustar la masa si es necesario
//
//}
//
//// Called when the game starts or when spawned
//void ABarril::BeginPlay()
//{
//	Super::BeginPlay();
//
//}
//
//// Called every frame
//void ABarril::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//
