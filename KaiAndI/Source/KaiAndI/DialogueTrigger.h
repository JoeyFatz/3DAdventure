// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractVolume.h"
#include "DialogueTrigger.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class KAIANDI_API ADialogueTrigger : public AInteractVolume
{
	GENERATED_BODY()

public:

	ADialogueTrigger();
	
	/** If true, player will enter dialogue tree */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dialogue")
	bool bDialogueActive;

	/** Toggles widget in blueprints */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dialogue")
	bool bInteraction01;

	/** Toggles widget in blueprints */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dialogue")
	bool bInteraction02;

	/** Determines which line in the script will play */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dialogue")
	int32 LineCount;
	
	/** Triggers event in blueprints that plays text widget */
	UFUNCTION(BlueprintNativeEvent, Category = "Dialogue")
	void TriggerDialogue01();
	virtual void TriggerDialogue01_Implementation();

	/** Triggers event in blueprints that plays text widget */
	UFUNCTION(BlueprintNativeEvent, Category = "Dialogue")
	void TriggerDialogue02();
	virtual void TriggerDialogue02_Implementation();

	/** Overrides interact function from AInteractVolume */
	virtual void CueInteract() override;
};
