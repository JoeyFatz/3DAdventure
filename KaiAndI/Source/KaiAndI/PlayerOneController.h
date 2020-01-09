// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerOneController.generated.h"

/**
 * 
 */
UCLASS()
class KAIANDI_API APlayerOneController : public APlayerController
{
	GENERATED_BODY()
	
public:

	/** Reference to the UMG Asset in the editor */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> DialogueAsset;

	/** varible to hold the widget after creating it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		UUserWidget* DialogueOverlay;

	bool bOverlayActive = false;

protected:

	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StartDialogue();

};
