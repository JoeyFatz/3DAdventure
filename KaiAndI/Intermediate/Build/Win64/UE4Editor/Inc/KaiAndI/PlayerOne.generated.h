// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAIANDI_PlayerOne_generated_h
#error "PlayerOne.generated.h already included, missing '#pragma once' in PlayerOne.h"
#endif
#define KAIANDI_PlayerOne_generated_h

#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_RPC_WRAPPERS
#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerOne(); \
	friend struct Z_Construct_UClass_APlayerOne_Statics; \
public: \
	DECLARE_CLASS(APlayerOne, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(APlayerOne)


#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerOne(); \
	friend struct Z_Construct_UClass_APlayerOne_Statics; \
public: \
	DECLARE_CLASS(APlayerOne, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(APlayerOne)


#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerOne(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerOne) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerOne); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerOne); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerOne(APlayerOne&&); \
	NO_API APlayerOne(const APlayerOne&); \
public:


#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerOne(APlayerOne&&); \
	NO_API APlayerOne(const APlayerOne&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerOne); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerOne); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerOne)


#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_PRIVATE_PROPERTY_OFFSET
#define KaiAndI_Source_KaiAndI_PlayerOne_h_9_PROLOG
#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_RPC_WRAPPERS \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_INCLASS \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KaiAndI_Source_KaiAndI_PlayerOne_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_INCLASS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_PlayerOne_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAIANDI_API UClass* StaticClass<class APlayerOne>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KaiAndI_Source_KaiAndI_PlayerOne_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
