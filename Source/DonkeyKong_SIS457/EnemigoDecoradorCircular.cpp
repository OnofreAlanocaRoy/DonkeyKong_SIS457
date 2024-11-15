#include "EnemigoDecoradorCircular.h"
#include "Math/UnrealMathUtility.h"

AEnemigoDecoradorCircular::AEnemigoDecoradorCircular()
{
    PrimaryActorTick.bCanEverTick = true;
    CurrentAngle = 0.0f;
}

void AEnemigoDecoradorCircular::BeginPlay()
{
    Super::BeginPlay();

    if (Enemigo)
    {
        InitialPosition = Enemigo->GetActorLocation();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemigo no asignado en EnemigoDecoradorCircular"));
    }
}

void AEnemigoDecoradorCircular::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
  
    CurrentAngle += AngularSpeed * DeltaTime;
    if (Enemigo)
    {

        // Calcular la nueva posición en el círculo
        // Mantenemos X constante, y el círculo se forma en Y y Z
        float NewY = InitialPosition.Y + Radius * FMath::Cos(CurrentAngle);
        float NewZ = InitialPosition.Z + Radius * FMath::Sin(CurrentAngle);

        // Mantener la misma posición X
        FVector NewPosition(InitialPosition.X, NewY, NewZ);

        // Actualizar la posición del enemigo
        Enemigo->SetActorLocation(NewPosition);
    }
}

void AEnemigoDecoradorCircular::Vigilar()
{
    // Iniciar movimiento circular
    if (Enemigo)
    {
        InitialPosition = Enemigo->GetActorLocation();
        CurrentAngle = 0.0f;
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("DECORADOR VIGILAR ACTIVADO"));
        }
    }
}
