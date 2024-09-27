#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroElectrico.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AMuroElectrico : public AMuro
{
    GENERATED_BODY()

public:
    AMuroElectrico();

    virtual void OnCharacterImpact(AActor* CharacterActor) override;  // Sobrescribir comportamiento
};
