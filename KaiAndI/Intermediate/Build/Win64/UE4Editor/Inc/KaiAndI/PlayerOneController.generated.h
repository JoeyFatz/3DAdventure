// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAIANDI_PlayerOneController_generated_h
#error "PlayerOneController.generated.h already included, missing '#pragma once' in PlayerOneController.h"
#endif
#define KAIANDI_PlayerOneController_generated_h

#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_RPC_WRAPPERS
#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerOneController(); \
	friend struct Z_Construct_UClass_APlayerOneController_Statics; \
public: \
	DECLARE_CLASS(APlayerOneController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(APlayerOneController)


#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerOneController(); \
	friend struct Z_Construct_UClass_APlayerOneController_Statics; \
public: \
	DECLARE_CLASS(APlayerOneController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(APlayerOneController)


#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerOneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerOneController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerOneController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerOneController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerOneController(APlayerOneController&&); \
	NO_API APlayerOneController(const APlayerOneController&); \
public:


#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerOneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerOneController(APlayerOneController&&); \
	NO_API APlayerOneController(const APlayerOneController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerOneController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerOneController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerOneController)


#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_PRIVATE_PROPERTY_OFFSET
#define KaiAndI_Source_KaiAndI_PlayerOneController_h_12_PROLOG
#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_RPC_WRAPPERS \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_INCLASS \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KaiAndI_Source_KaiAndI_PlayerOneController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_INCLASS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_PlayerOneController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAIANDI_API UClass* StaticClass<class APlayerOneController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KaiAndI_Source_KaiAndI_PlayerOneController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
