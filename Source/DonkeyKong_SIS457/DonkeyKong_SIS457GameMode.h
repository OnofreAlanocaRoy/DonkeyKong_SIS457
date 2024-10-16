#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_SIS457GameMode.generated.h"

class AObtaculo;
class AComponentePlataforma;
class ADonkeyKong_SIS457Character;
class ABarril;
class AMuro;
UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	ADonkeyKong_SIS457GameMode();
	ADonkeyKong_SIS457Character* player01;

	TArray<ABarril*> Barriles;

protected:
	virtual void BeginPlay() override;
	TArray<int32> aComponentesPlataformaMoviles;
	TArray<AMuro*> aMuros;
private:

	FTimerHandle SpawnBarrilTimerHandle;
	void SpawnBarril();
	//void DestruirPlataforma();
	int32 contadorBarriles;
	const int32 numeroMaximoBarriles = 10;
	void SpawnNaveEnemiga();
	void SpawnMurosAleatorios();


};