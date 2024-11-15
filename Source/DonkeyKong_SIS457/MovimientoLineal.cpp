#include "MovimientoLineal.h"

void UMovimientoLineal::Mover(AActor* Enemigo, float DeltaTime)
{
    FVector NuevaPosicion = Enemigo->GetActorLocation() + FVector(0, 100.0f, 0) * DeltaTime;
    Enemigo->SetActorLocation(NuevaPosicion);
}