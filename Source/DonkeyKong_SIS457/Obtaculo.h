#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obtaculo.generated.h"
class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_SIS457_API AObtaculo : public AActor
{
	GENERATED_BODY()

public:
	// Establece valores predeterminados para las propiedades de este actor
	AObtaculo();

protected:
	UStaticMeshComponent* MeshObtaculo;
	// Se llama cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llama a cada fotograma
	virtual void Tick(float DeltaTime) override;
	// Si el obstáculo puede ser destruido
	UPROPERTY(EditAnywhere, Category = "Propiedades")
	bool bPuedeSerDestruido;
protected:
	bool subir;
	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoZ;
	bool detener;

public:

	FORCEINLINE UStaticMeshComponent* GetMeshObtaculo() const { return MeshObtaculo; }
	FORCEINLINE void setIncrementoZ(float incremento) { incrementoZ = incremento; }
	FORCEINLINE void setDetener(bool _detener) { detener = _detener; }
};
