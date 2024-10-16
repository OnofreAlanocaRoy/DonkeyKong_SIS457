#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroCongelado.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AMuroCongelado : public AMuro
{
    GENERATED_BODY()

public:
    AMuroCongelado();
    UFUNCTION()
   void OnCharacterImpact(AActor* OtherActor);

    virtual void Tick(float DeltaTime) override;

    virtual void ejercerAccion() override;
};