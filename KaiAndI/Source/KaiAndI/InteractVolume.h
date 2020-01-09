// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractVolume.generated.h"

UCLASS()
class KAIANDI_API AInteractVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractVolume();

	/** Checks if the player character is overlapping with the trigger box */
	bool bCharacterOnTrigger;

	/** Sets trigger box size */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "TriggerBox")
	FVector BoxExtent;

	class UBoxComponent* TriggerBox;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFSweep, const FHitResult &SweepResult);

	UFUNCTION()
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	/** Called from cast to APlayerOne::BeginInteraction() when the "interact" button is pressed */
	virtual void CueInteract();

	void EndInteract();
};
