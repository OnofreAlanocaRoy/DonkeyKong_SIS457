
#include "Obtaculo.h"
#include "UObject/ConstructorHelpers.h"
// Establece valores predeterminados
AObtaculo::AObtaculo()
{
	PrimaryActorTick.bCanEverTick = true;
}
void AObtaculo::BeginPlay()
{
	Super::BeginPlay();
}
void AObtaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

