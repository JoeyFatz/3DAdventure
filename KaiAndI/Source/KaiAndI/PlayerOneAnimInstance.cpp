// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerOneAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerOne.h"

void UPlayerOneAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		/*if (Pawn)
		{
			PlayerOne = Cast<APlayerOne>(Pawn);
		}*/
	}
}

void UPlayerOneAnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);

		MovementSpeed = LateralSpeed.Size();

		/*if (PlayerOne == nullptr)
		{
			PlayerOne = Cast<APlayerOne>(Pawn);
		}*/
	}
}

