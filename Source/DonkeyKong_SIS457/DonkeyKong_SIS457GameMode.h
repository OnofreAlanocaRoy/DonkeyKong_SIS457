
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_SIS457GameMode.generated.h"

class AObtaculo;
class AComponentePlataforma;
class ADonkeyKong_SIS457Character;
class ABarril;

UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	ADonkeyKong_SIS457GameMode();
	ADonkeyKong_SIS457Character* player01;
	TArray<AComponentePlataforma*> ComponentesPlataforma;
	TArray<ABarril*> Barriles;

protected:
	virtual void BeginPlay() override;
private:
	FTimerHandle PlatformSpawnTimerHandle;
	FTimerHandle SpawnBarrilTimerHandle;
	void SpawnBarril();
	//void DestruirPlataforma();
	int32 contadorBarriles;
	const int32 numeroMaximoBarriles = 10;
	FVector Plataforma2Location;
	FVector Plataforma4Location;
	void SpawnNaveEnemiga();
	void SpawnMurosAleatorios();


};


