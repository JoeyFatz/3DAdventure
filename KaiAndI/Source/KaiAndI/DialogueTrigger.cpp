// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueTrigger.h"

ADialogueTrigger::ADialogueTrigger()
{
	bDialogueActive = false;

	bInteraction01 = false;
	bInteraction02 = false;

	LineCount = 0;
}

void ADialogueTrigger::CueInteract()
{
	Super::CueInteract();
	
	// TODO Either lock player position while Dialogue is Active or remove widget when overlap is false

	// If line count is zero, Activate Dialogue tree from the beginning
	if (LineCount == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Dialogue Active"));
		bDialogueActive = true;
		LineCount++;
	}
	
	// If Dialogue tree has been activated, loop through widgets in order
	if (bDialogueActive)
	{
		switch (LineCount)
		{
		case 1:
			UE_LOG(LogTemp, Warning, TEXT("Play Dialogue 1")); // Add widget one to viewport
			bInteraction01 = true; 

			TriggerDialogue01();
			
			LineCount++;
			break;
		case 2:
			UE_LOG(LogTemp, Warning, TEXT("Play Dialogue 2")); // Remove widget one and add widget two to viewport
			bInteraction01 = false;
			bInteraction02 = true;
			
			TriggerDialogue01();
			TriggerDialogue02();
			
			LineCount++;
			break;
		case 3:
			UE_LOG(LogTemp, Warning, TEXT("Remove Dialogue")); // Remove widget one and two from viewport and restart dialogue tree
			bInteraction02 = false;
			
			TriggerDialogue01();
			TriggerDialogue02();

			LineCount = 0;
			bDialogueActive = false;
			break;
		default:
			break;
		}
	}
}

// Sends Dialogue Events to blueprints
void ADialogueTrigger::TriggerDialogue01_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Native Event 01 Called"));
}

void ADialogueTrigger::TriggerDialogue02_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Native Event 02 Called"));
}