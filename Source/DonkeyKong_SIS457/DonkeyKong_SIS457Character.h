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

	/** C�mara en primera persona */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCamera;

	/** C�mara en tercera persona */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* ThirdPersonCamera;

	/** Bandera para determinar el modo de c�mara (verdadero: primera persona, falso: tercera persona) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	bool bIsFirstPerson;

public:
	ADonkeyKong_SIS457Character();

	UFUNCTION()
	// Llamado para tecla de disparo
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

	/** Devuelve el subobjeto FirstPersonCamera **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCamera() const { return FirstPersonCamera; }
	/** Devuelve el subobjeto ThirdPersonCamera **/
	FORCEINLINE class UCameraComponent* GetThirdPersonCamera() const { return ThirdPersonCamera; }

	// Llamado a cada fotograma
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Llamado cuando el juego comienza o se genera
	virtual void BeginPlay() override;

	/** Llamado para entrada de lado a lado */
	void MoveRight(float Val);

	/** Manejar entradas t�ctiles. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Manejar el evento de parada t�ctil. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Alternar entre c�maras */
	void SwitchCamera();

private:
	/* Bandera para controlar el disparo */
	uint32 bCanFire : 1;

	/** Mango para una gesti�n eficiente del temporizador ShotTimerExpired */
	FTimerHandle TimerHandle_ShotTimerExpired;
};
