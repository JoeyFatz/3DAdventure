// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerOne.generated.h"

UCLASS()
class KAIANDI_API APlayerOne : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerOne();

	/// Class Calls

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	class AInteractVolume* ActiveOverlappingTrigger;

	FORCEINLINE void SetActiveOverlappingTrigger(AInteractVolume* Volume) { ActiveOverlappingTrigger = Volume; }

	/// Variables

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float WalkSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bInteractPressed;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/// Movement Functions

	void MoveForward(float Value);

	void MoveRight(float Value);

	/// Camera Functions

	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);

	/// Interaction Functions

	void BeginInteraction();
	
	void EndInteraction();

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera;  }
};
