// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerOneController.h"
#include "Blueprint/UserWidget.h"

void APlayerOneController::BeginPlay()
{
	// Generate Player HUD
	if (DialogueAsset)
	{
		DialogueOverlay = CreateWidget<UUserWidget>(this, DialogueAsset);
	}
	DialogueOverlay->AddToViewport();
	DialogueOverlay->SetVisibility(ESlateVisibility::Visible);  // Can set HUD visibility via code
}

// Called every frame
void APlayerOneController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerOneController::StartDialogue()
{
	UE_LOG(LogTemp, Warning, TEXT("You made it work!"));



}


