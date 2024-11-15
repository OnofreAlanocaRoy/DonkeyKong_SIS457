#include "TorreReloj.h"
#include "Engine/World.h"
#include "TimerManager.h"

ATorreReloj::ATorreReloj()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATorreReloj::BeginPlay()
{
	Super::BeginPlay();
	IniciarTemporizador();  // Inicia el temporizador al comenzar el juego
}

void ATorreReloj::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATorreReloj::IniciarTemporizador()
{
	// El reloj va a notificar cada minuto (15 segundos)
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATorreReloj::RelojTick, 15.0f, true, 0.0f);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("El reloj va a notificar cada minuto (15 segundos)"));
	}
}
void ATorreReloj::RelojTick()
{
	// Notificar a los suscriptores cada vez que suena el reloj
	Notificar();
	// Mostrar mensaje en pantalla
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Torre Reloj: Notificación enviada a los suscriptores."));
	}
}

void ATorreReloj::AnadirSuscriptor(AActor* Suscriptor)
{
	if (Suscriptor && !Suscriptores.Contains(Suscriptor))
	{
		Suscriptores.Add(Suscriptor);
	}
}

void ATorreReloj::EliminarSuscriptor(AActor* Suscriptor)
{
	Suscriptores.Remove(Suscriptor);
}

void ATorreReloj::Notificar()
{
	for (AActor* Suscriptor : Suscriptores)
	{
		// Llamar la función de notificación en el observador
		if (Suscriptor)
		{
			// Suponemos que los suscriptores tienen una función llamada "RecibirNotificacion"
			// Si quieres que el jugador o el enemigo hagan algo específico, implementa la lógica aquí.
			// Ejemplo: Suscriptor->RecibirNotificacion();
		}
	}
}


