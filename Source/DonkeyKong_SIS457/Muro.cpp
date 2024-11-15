
#include "Muro.h"
#include "Components/StaticMeshComponent.h"
#include "MuroElectrico.h"
#include "MuroLadrillo.h"
#include "MuroPegajodo.h"
#include "MuroFuego.h"
#include "MuroCongelado.h"


// Sets default values
AMuro::AMuro()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroMesh"));
	RootComponent = MuroMesh;

	SetActorScale3D(FVector(1.0f, 0.2f, 1.0f));
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AMuro* AMuro::getMuro(FString _tipoMuro)
{
	if (_tipoMuro == "Electrico")
		return NewObject<AMuroElectrico>();
	else if (_tipoMuro == "Envenenado")
		return NewObject<AMuroPegajodo>();
	else if (_tipoMuro == "Ladrillo")
		return NewObject<AMuroLadrillo>();
	else if (_tipoMuro == "Fuego")
		return NewObject<AMuroFuego>();
	else if (_tipoMuro == "Fuego")
		return NewObject<AMuroCongelado>();
	return nullptr;
}