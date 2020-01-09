// Fill out your copyright notice in the Description page of Project Settings.


#include "LampVolume.h"
#include "Components/StaticMeshComponent.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"


ALampVolume::ALampVolume()
{
	// Lamp mesh
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	MeshComponent->SetupAttachment(GetRootComponent());

	// Light switch mesh
	LightSwitch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightSwitchMesh"));
	LightSwitch->SetupAttachment(MeshComponent);

	LightSwitch_Sound = CreateDefaultSubobject<USoundCue>(TEXT("SoundEffects"));

	bSetLightActive = false;
	Toggle = 0;
}

void ALampVolume::CueInteract()
{
	Super::CueInteract();
	UE_LOG(LogTemp, Warning, TEXT("Trigger Light"));
	if ( (!bSetLightActive) && (Toggle == 0) ) 
	{ 
		bSetLightActive = true; 
		Toggle = 1;
		if (LightSwitch_Sound)
		{
			UGameplayStatics::PlaySound2D(this, LightSwitch_Sound);
		}
	}
	else if ((bSetLightActive) && (Toggle == 1))
	{
		bSetLightActive = false;
		Toggle = 0;
		if (LightSwitch_Sound)
		{
			UGameplayStatics::PlaySound2D(this, LightSwitch_Sound);
		}
	}
}
