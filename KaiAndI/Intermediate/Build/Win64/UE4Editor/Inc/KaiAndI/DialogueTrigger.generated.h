// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAIANDI_DialogueTrigger_generated_h
#error "DialogueTrigger.generated.h already included, missing '#pragma once' in DialogueTrigger.h"
#endif
#define KAIANDI_DialogueTrigger_generated_h

#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_RPC_WRAPPERS \
	virtual void TriggerDialogue02_Implementation(); \
	virtual void TriggerDialogue01_Implementation(); \
 \
	DECLARE_FUNCTION(execTriggerDialogue02) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDialogue02_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerDialogue01) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDialogue01_Implementation(); \
		P_NATIVE_END; \
	}


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerDialogue02) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDialogue02_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerDialogue01) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDialogue01_Implementation(); \
		P_NATIVE_END; \
	}


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_EVENT_PARMS
#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_CALLBACK_WRAPPERS
#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADialogueTrigger(); \
	friend struct Z_Construct_UClass_ADialogueTrigger_Statics; \
public: \
	DECLARE_CLASS(ADialogueTrigger, AInteractVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(ADialogueTrigger)


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADialogueTrigger(); \
	friend struct Z_Construct_UClass_ADialogueTrigger_Statics; \
public: \
	DECLARE_CLASS(ADialogueTrigger, AInteractVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(ADialogueTrigger)


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADialogueTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADialogueTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueTrigger(ADialogueTrigger&&); \
	NO_API ADialogueTrigger(const ADialogueTrigger&); \
public:


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueTrigger(ADialogueTrigger&&); \
	NO_API ADialogueTrigger(const ADialogueTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADialogueTrigger)


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_PRIVATE_PROPERTY_OFFSET
#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_12_PROLOG \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_EVENT_PARMS


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_RPC_WRAPPERS \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_CALLBACK_WRAPPERS \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_INCLASS \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_CALLBACK_WRAPPERS \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_INCLASS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_DialogueTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAIANDI_API UClass* StaticClass<class ADialogueTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KaiAndI_Source_KaiAndI_DialogueTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
