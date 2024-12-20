#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroLadrillo.generated.h"

class UParticleSystemComponent;

UCLASS()
class DONKEYKONG_SIS457_API AMuroLadrillo : public AMuro
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	AMuroLadrillo();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ejercerAccion() override;
};