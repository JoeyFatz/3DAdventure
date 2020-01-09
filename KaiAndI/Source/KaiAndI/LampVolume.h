// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractVolume.h"
#include "LampVolume.generated.h"

/**
 * 
 */
UCLASS()
class KAIANDI_API ALampVolume : public AInteractVolume
{
	GENERATED_BODY()

public:

	ALampVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MeshComponent")
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "LightSwitchMesh")
	UStaticMeshComponent* LightSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	class USoundCue* LightSwitch_Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Light")
	bool bSetLightActive;

	int32 Toggle;

	virtual void CueInteract() override;
	
};
