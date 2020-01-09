// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractVolume.h"
#include "Components/BoxComponent.h"
#include "PlayerOne.h"

// Sets default values
AInteractVolume::AInteractVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Default trigger box size, Editable in BP
	BoxExtent = FVector(100.f, 72.f, 32.f);

	// Creates the default box component and sets it to the root component
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	TriggerBox->SetBoxExtent(BoxExtent);

	// Sets trigger to only register overlaps with the Pawn Character
	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	TriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	TriggerBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	// Defaults overlap to false
	bCharacterOnTrigger = false;
}

// Called when the game starts or when spawned
void AInteractVolume::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AInteractVolume::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &AInteractVolume::OnOverlapEnd);
	
}

// Called every frame
void AInteractVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInteractVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFSweep, const FHitResult &SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap Begin"));
	if (!bCharacterOnTrigger) { bCharacterOnTrigger = true; }

	// Checks if APlayerOne is overlapping with AInteractVolume
	if (bCharacterOnTrigger && OtherActor)
	{
		APlayerOne* Player = Cast<APlayerOne>(OtherActor);
		if (Player)
		{
			Player->SetActiveOverlappingTrigger(this);
		}
		else if (Player)
		{
			Player->SetActiveOverlappingTrigger(nullptr);
		}
	}
}

void AInteractVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap End"));
	if (bCharacterOnTrigger) { bCharacterOnTrigger = false; }

	// If APlayerOne is no longer overlapping w/ AInteractVolume, this sets SetActiveOverlappingTrigger to NULL
	if (!bCharacterOnTrigger && OtherActor)
	{
		APlayerOne* Player = Cast<APlayerOne>(OtherActor);
		if (Player)
		{
			Player->SetActiveOverlappingTrigger(nullptr);
		}
		else if (Player)
		{
			Player->SetActiveOverlappingTrigger(nullptr);
		}
	}
}

// Sets the code that fires when APlayerOne presses the "interact" button while overlapping the trigger volume
void AInteractVolume::CueInteract()
{
	/*
	/**
	/** Placeholder for child overrides. Passes code into PlayerOne.cpp on Interact key press. Overriden by child classes.
	/** Children: ADialogueVolume
	/**
	*/
}

void AInteractVolume::EndInteract()
{
}
