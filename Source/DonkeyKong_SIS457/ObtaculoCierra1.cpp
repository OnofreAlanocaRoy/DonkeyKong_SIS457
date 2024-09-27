
#include "ObtaculoCierra1.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
AObtaculoCierra1::AObtaculoCierra1()
{
    // Set this actor to call Tick() every frame.
    PrimaryActorTick.bCanEverTick = true;
    ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
    /*Crear y configurar el componente de malla*/
    CierraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CierraMesh"));
    CierraMesh->SetStaticMesh(mesh.Object);
    RootComponent = CierraMesh;
    // Inicializar los parámetros de movimiento
    InitialLocation = FVector::ZeroVector;
    TargetLocation = FVector(0.0f, 100.0f, 0.0f); // 300 unidades a la derecha
    bMovingRight = true;
}

// Called when the game starts or when spawned
void AObtaculoCierra1::BeginPlay()
{
    Super::BeginPlay();
    InitialLocation = GetActorLocation();

    // Iniciar el timer para alternar el movimiento
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AObtaculoCierra1::ToggleMovement, 5.0f, true);
}

// Called every frame
void AObtaculoCierra1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MoveObstaculo(DeltaTime);
}

void AObtaculoCierra1::MoveObstaculo(float DeltaTime)
{
    FVector CurrentLocation = GetActorLocation();
    FVector EndLocation = bMovingRight ? InitialLocation + TargetLocation : InitialLocation - TargetLocation;

    float Speed = 4.0f;
    CurrentLocation = FMath::VInterpTo(CurrentLocation, EndLocation, DeltaTime, Speed);

    SetActorLocation(CurrentLocation);
}

void AObtaculoCierra1::ToggleMovement()
{
    bMovingRight = !bMovingRight;
}
// Nueva función para ajustar la escala de la sierra
void AObtaculoCierra1::SetCierraScale(FVector NewScale)
{
    CierraMesh->SetWorldScale3D(NewScale);
}

// Nueva función para ajustar la rotación de la sierra
void AObtaculoCierra1::SetCierraRotation(FRotator NewRotation)
{
    CierraMesh->SetWorldRotation(NewRotation);
}