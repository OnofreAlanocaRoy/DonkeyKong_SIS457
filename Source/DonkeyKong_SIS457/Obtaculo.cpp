
#include "Obtaculo.h"
#include "UObject/ConstructorHelpers.h"
// Establece valores predeterminados
AObtaculo::AObtaculo()
{
	PrimaryActorTick.bCanEverTick = true;
	bPuedeSerDestruido = false; // Por defecto no se puede destruir
}
void AObtaculo::BeginPlay()
{
	Super::BeginPlay();
}
void AObtaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

