
#include "MovimientoZigzag.h"
#include "GameFramework/Actor.h"

void UMovimientoZigzag::Mover(AActor* Enemigo, float DeltaTime)
{
    FVector NuevaPosicion = Enemigo->GetActorLocation() + FVector(0, FMath::Sin(Enemigo->GetGameTimeSinceCreation() * 5.0f) * 100.0f, 0) * DeltaTime;
    Enemigo->SetActorLocation(NuevaPosicion);
}
