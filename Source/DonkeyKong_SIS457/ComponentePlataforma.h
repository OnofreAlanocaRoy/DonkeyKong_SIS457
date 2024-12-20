#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponentePlataforma.generated.h"

class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_SIS457_API AComponentePlataforma : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AComponentePlataforma();
	UParticleSystemComponent* ParticleSystem;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* meshPlataforma;

	bool bMoverHorizontalmente;
	bool bMoverVerticalmente;
	bool bMoverLateralmente;

	FVector posicionInicio;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoZ;
	bool bDetener;
	float velocidad;
	float anchoComponentePlataforma;
	float altoComponentePlataforma;
	float fondoComponentePlataforma;

	FVector desplazamientoComponentePlataforma;
	bool bDeIzquierdaADerecha;
	bool bDeArribaAAbajo;
	bool dDeAdelanteAAtras;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE void setbMoverHorizontalmente(bool _bMoverHorizontalmente) { bMoverHorizontalmente = _bMoverHorizontalmente; }
	FORCEINLINE void setbMoverVerticalmente(bool _bMoverVerticalmente) { bMoverVerticalmente = _bMoverVerticalmente; }
	FORCEINLINE void setbMoverLateralmente(bool _bMoverLateralmente) { bMoverLateralmente = _bMoverLateralmente; }

	FORCEINLINE void setbDetener(bool _bDetener) { bDetener = _bDetener; }
};