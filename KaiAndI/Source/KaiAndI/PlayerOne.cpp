// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerOne.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "InteractVolume.h"





// Sets default values
APlayerOne::APlayerOne()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FVector CameraHeight = FVector(0.f, 30.f, 70.f);
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 250.f;
	CameraBoom->SetRelativeLocation(CameraHeight);
	CameraBoom->bUsePawnControlRotation = true;

	GetCapsuleComponent()->InitCapsuleSize(32.f, 91.f);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	BaseTurnRate = 65.f;
	BaseLookUpRate = 65.f;

	// Sets character rotation to movement
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	WalkSpeed = 350.f;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	GetCharacterMovement()->AirControl = 0.2f;


	bInteractPressed = false;

}

// Called when the game starts or when spawned
void APlayerOne::BeginPlay()
{
	Super::BeginPlay();
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	
}

// Called every frame
void APlayerOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerOne::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerOne::BeginInteraction);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &APlayerOne::EndInteraction);


	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerOne::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerOne::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APlayerOne::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerOne::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerOne::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerOne::LookUpAtRate);
}

void APlayerOne::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APlayerOne::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(Direction, Value);
	}
}

void APlayerOne::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerOne::LookUpAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());

}

void APlayerOne::BeginInteraction()
{
	bInteractPressed = true;

	if (ActiveOverlappingTrigger)
	{
		AInteractVolume* Interaction = Cast<AInteractVolume>(ActiveOverlappingTrigger);
		if (Interaction)
		{
			// When Interact key is pressed, pulls code from InteractVolume.cpp
			Interaction->CueInteract(); 
			UE_LOG(LogTemp, Warning, TEXT("Begin Interaction"));

		}
	}
	else
	{
		EndInteraction();
	}
}

void APlayerOne::EndInteraction()
{
	bInteractPressed = false;
}

