//Copyright Epic Games, Inc. All Rights Reserved.
#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Capsula.h"
#include "ObtaculoCierra1.h"
#include "obtaculoFuego.h"
#include "ComponentePlataforma.h"
#include "Obtaculo.h"
#include "Barril.h"
#include "NaveEnemiga.h"
#include "Muro.h"

ADonkeyKong_SIS457GameMode::ADonkeyKong_SIS457GameMode()
{
	// establecer la clase de peón predeterminada para nuestro personaje con planos
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//quiero implementar un nuevo acto NaveEnemiga
}

void ADonkeyKong_SIS457GameMode::BeginPlay()

{
	Super::BeginPlay();
	// Código para eliminar las plataformas específicas
	for (AComponentePlataforma* Plataforma : ComponentesPlataforma)
	{
		if (Plataforma)
		{
			// Llama al método DestruirPlataforma para eliminar la plataforma
			Plataforma->DestruirPlataforma();
		}
	}
	if (GetWorld())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		// Definir la ubicación y rotación inicial del actor
		FVector Location = FVector(1207.272461f, -516.779663f, 104.6241f); // Cambia los valores según la posición deseada
		FRotator Rotation = FRotator::ZeroRotator;

		// Spawnear el actor en el mundo
		ACapsula* NuevaCapsula = GetWorld()->SpawnActor<ACapsula>(ACapsula::StaticClass(), Location, Rotation, SpawnParams);

		if (NuevaCapsula)
		{
			// Aquí puedes hacer cosas adicionales con la cápsula recién creada
		}
	}


	FRotator SpawnRotation = FRotator::ZeroRotator;



	//spawnear DE CIERRA
	FVector SpawnLocation = FVector(1189.790527f, -40.001099f, 540.0f); // Posición inicial en el mundo
	AObtaculoCierra1* CierraActor = GetWorld()->SpawnActor<AObtaculoCierra1>(AObtaculoCierra1::StaticClass(), SpawnLocation, SpawnRotation);

	// Ajustar la escala de la sierra (por ejemplo, hacerlo más grande)
	if (CierraActor)
	{
		FVector NewScale = FVector(1.0f, 1.25f, 1.0f); // Escalar en el eje X
		CierraActor->SetCierraScale(NewScale);

		// Ajustar la rotación de la sierra
		FRotator NewRotation = FRotator(117.092789f, -90.0f, 117.092819f); // Rotar 45 grados en el eje Yaw (Z)
		CierraActor->SetCierraRotation(NewRotation);
	}

	//spawnear de fuego
	FVector PosicionesFuego[4] = {
		/*FVector(1250.f, 200.0f, 1000.0f),
		FVector(1800.0f, -160.0f, 700.0f),
		FVector(1200.0f, -300.0f, 900.0f),
		FVector(1150.0f, -600.0f, 910.0f)*/
	};

	for (int32 i = 0; i < 4; i++)
	{

		AobtaculoFuego* FuegoActor = GetWorld()->SpawnActor<AobtaculoFuego>(AobtaculoFuego::StaticClass(), PosicionesFuego[i], SpawnRotation);


		if (FuegoActor)
		{
			// Puedes ajustar más configuraciones aquí si es necesario
		}
	}

	//spawnear de plataforma
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("-----para disparo tecla R y las fechas (<-  ->)"));
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("plataforma aleatorias con Tarray diferente posiciones"));

	FVector posicionInicial = FVector(1160.0f, -1100.0f, 400.f);
	FRotator rotacionInicial = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationCP;
	float anchoComponentePlataforma = 600.0f;
	float incrementoAltoComponentePlataforma = -105.0f;
	float incrementoAltoEntrePisos = 1400.0f;
	float incrementoInicioPiso = 400.0f;
	// Vector para almacenar las plataformas

	for (int npp = 0; npp < 5; npp++) {
		rotacionInicial.Roll = rotacionInicial.Roll * -1;
		incrementoAltoComponentePlataforma = incrementoAltoComponentePlataforma * -1;
		incrementoInicioPiso = incrementoInicioPiso * -1;
		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
		// Variables de oscilación
		float OscillationRange = 50.0f;
		float OscillationSpeed = 1.0f;
		for (int ncp = 0; ncp < 10; ncp++) {

			if (npp == 0 && (ncp == 1 || ncp == 3 || ncp == 5 || ncp == 7 || ncp == 9)) {
				continue;
				// No generar estas plataformas en la primera fila
			}

			SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y + anchoComponentePlataforma * ncp, posicionInicial.Z));
			AComponentePlataforma* Plataforma = GetWorld()->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), SpawnLocationCP);
			if (npp == 1) { // Segunda fila
				if (Plataforma) {
					Plataforma->StartOscillation(500.0f, 2.0f); // Ajusta el rango y la velocidad de la oscilación
				}
			}
			else if (npp == 3) // Cuarta Fila
			{
				if (ncp == 1 || ncp == 3 || ncp == 5 || ncp == 7 || ncp == 9) // Oscilar las plataformas 2 y 4 en el eje Z
				{
					Plataforma->StartVerticalOscillation(200.0f, 1.0f); // Oscilación de 50.0f en el eje Z
				}
			}
			else if (npp == 4 && (ncp == 1 || ncp == 3))
				continue; { // Fila 5, Componente 3
				if (ncp == 2) {
					Plataforma->StartDualOscillation(200.0f, 1.0f, 1.0f); // Ajusta el rango y la velocidad para movimiento dual
				}
			}
			if (ncp < 9) {
				posicionInicial.Z = posicionInicial.Z + incrementoAltoComponentePlataforma;
			}
		}

		posicionInicial.Z = posicionInicial.Z + incrementoAltoEntrePisos;
		posicionInicial.Y = posicionInicial.Y + incrementoInicioPiso;

		GetWorld()->GetTimerManager().SetTimer(SpawnBarrilTimerHandle, this, &ADonkeyKong_SIS457GameMode::SpawnBarril, 5.0f, true);
	}


	SpawnNaveEnemiga(); // Llamar al método para spawnear la nave enemiga
}

//nave enemiga o el cono de fuego
void ADonkeyKong_SIS457GameMode::SpawnNaveEnemiga()
{
	// Spawnear la Nave Enemiga en el juego
	FVector SpawnLocation = FVector(1160.0f, 800.0f, 3585.0f); // Ajusta la posición de spawn según sea necesario
	FRotator SpawnRotation = FRotator::ZeroRotator;
	if (GetWorld())
	{
		ANaveEnemiga* NuevaNave = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass(), SpawnLocation, SpawnRotation);

		if (NuevaNave)
		{
			// Puedes añadir código aquí para configurar la nave enemiga si es necesario
			UE_LOG(LogTemp, Warning, TEXT("Nave Enemiga spawneada correctamente"));
		}
	}
}

void ADonkeyKong_SIS457GameMode::SpawnBarril()
{
	//if (barriles.Num() >= numeroMaximoBarriles) {
	if (contadorBarriles < numeroMaximoBarriles) {
		//Spawn de un objeto barril en la escena sobre la primera plataforma
		FTransform SpawnLocationBarril;
		SpawnLocationBarril.SetLocation(FVector(1190.0f, 1300.0f, 4085.0f));
		SpawnLocationBarril.SetRotation(FQuat(FRotator(90.0f, 0.0f, 0.0f)));

		Barriles.Add(GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril));
		contadorBarriles++;

		if (contadorBarriles >= numeroMaximoBarriles) {
			GetWorld()->GetTimerManager().ClearTimer(SpawnBarrilTimerHandle);
		}
	}
}
void ADonkeyKong_SIS457GameMode::SpawnMurosAleatorios()
{
	for (AComponentePlataforma* Plataforma : ComponentesPlataforma)
	{
		if (Plataforma)
		{
			FVector PlataformaLocation = Plataforma->GetActorLocation();
			FVector MuroSpawnLocation = PlataformaLocation + FVector(0, 0, 200.0f); // Ajusta la altura
			FRotator MuroRotation = FRotator::ZeroRotator;

			// Spawnear el muro sobre la plataforma
			AMuro* Muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), MuroSpawnLocation, MuroRotation);
			if (Muro)
			{
				// Aquí puedes ajustar la escala, rotación o comportamiento del muro si es necesario
			}
		}
	}
}
