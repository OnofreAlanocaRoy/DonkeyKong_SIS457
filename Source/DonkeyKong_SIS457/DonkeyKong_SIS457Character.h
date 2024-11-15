// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "DonkeyKong_SIS457Character.generated.h"

class Obtaculo;

UCLASS(config = Game)
class ADonkeyKong_SIS457Character : public ACharacter
{
	GENERATED_BODY()

	/** C�mara de visi�n lateral */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Brazo de c�mara posicionando la c�mara al lado del personaje */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	// Funci�n que recibe la notificaci�n del reloj
	void RecibirNotificacion();
public:
	ADonkeyKong_SIS457Character();
	// Decoradores
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Armadura")
	//UArmadura* Armadura;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Arma")
	//UArma* Arma;

	// Funci�n para equipar la armadura
	//UFUNCTION(BlueprintCallable, Category = "Armadura")
	//void EquiparArmadura();

	//// Funci�n para usar la espada (arma)
	//UFUNCTION(BlueprintCallable, Category = "Arma")
	//void UsarEspada();

	UFUNCTION()
	//llamando para tecla de disparo
	void Fire();
	/** Desplazamiento desde la ubicaci�n del barco para generar proyectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;
	/* Qu� tan r�pido disparar� el arma */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;
	/* Manejador de la expiraci�n del temporizador de incendio */
	void ShotTimerExpired();
	// Nombres est�ticos para enlaces de ejes de tecla
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

	/** Devuelve el subobjeto SideViewCameraComponent **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Devuelve el subobjeto CameraBoom **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	//Llam� a cada fotograma
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	// --- SISTEMA DE VIDA DEL PERSONAJE ---
	// Salud m�xima del personaje
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth = 100.0f;
	// Salud actual del personaje
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float CurrentHealth = 100.0f;

	UFUNCTION(BlueprintCallable, Category = "Health")
	bool IsAlive() const;
	//void TakeDamage(float DamageAmount);
protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/** Llamado para entrada de lado a lado */
	void MoveRight(float Val);
	/** Manejar entradas t�ctiles. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Manejar el evento de parada t�ctil. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

private:
	/* Bandera para controlar el disparo */
	uint32 bCanFire : 1;
	/** Mango para una gesti�n eficiente del temporizador ShotTimerExpired */
	FTimerHandle TimerHandle_ShotTimerExpired;
	//patron observador
	float AlturaAnterior;
	float RadioNotificacion;
	void VerificarAltura();
	void VerificarEnemigosCercanos();
	FTimerHandle NotificacionAlturaTimerHandle;
};
