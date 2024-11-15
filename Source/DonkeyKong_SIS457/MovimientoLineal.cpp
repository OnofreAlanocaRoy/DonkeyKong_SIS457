#include "MovimientoLineal.h"

void UMovimientoLineal::Mover(AActor* Enemigo, float DeltaTime)
{
	//Mover al enemigo en linea recta
    FVector NuevaPosicion = Enemigo->GetActorLocation() + FVector(0, 500.0f, 0) * DeltaTime;//
    Enemigo->SetActorLocation(NuevaPosicion);
}