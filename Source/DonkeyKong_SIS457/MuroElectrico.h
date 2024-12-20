#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroElectrico.generated.h"

/**
 *
 */
class ParticleSystemComponent;

UCLASS()
class DONKEYKONG_SIS457_API AMuroElectrico : public AMuro
{
	GENERATED_BODY()

protected:
	int32 nivelCargaElectrica;
	UParticleSystemComponent* ParticleSystem;
public:
	AMuroElectrico();

	virtual void ejercerAccion() override;

	virtual void descargarElectricidad();
	virtual void cargarElectricidad();

};