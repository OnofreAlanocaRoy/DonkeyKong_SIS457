#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFacade.h"
#include "DonkeyKong_SIS457GameMode.generated.h"
	
class AObtaculo;
class AComponentePlataforma;
class ADonkeyKong_SIS457Character;
class ABarril;
class AMuro;
class AEnemigo;
class APlataformaMovil;
class AEnemigo;

UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	ADonkeyKong_SIS457GameMode();

	ADonkeyKong_SIS457Character* player01;
	TArray<ABarril*> Barriles;
	// Método para invocar la generación de enemigos y obstáculos

protected:
	virtual void BeginPlay() override;
	TArray<int32> aComponentesPlataformaMoviles;
	TArray<AMuro*> aMuros;
	
private:
	UPROPERTY()
	AGameFacade* GameFacade;

	FTimerHandle SpawnBarrilTimerHandle;
	void SpawnBarril();
	int32 contadorBarriles;
	const int32 numeroMaximoBarriles = 10;
	void SpawnNaveEnemiga();
	void SpawnMurosAleatorios();
};