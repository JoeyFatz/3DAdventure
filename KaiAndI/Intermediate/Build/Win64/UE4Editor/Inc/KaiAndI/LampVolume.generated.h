// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAIANDI_LampVolume_generated_h
#error "LampVolume.generated.h already included, missing '#pragma once' in LampVolume.h"
#endif
#define KAIANDI_LampVolume_generated_h

#define KaiAndI_Source_KaiAndI_LampVolume_h_15_RPC_WRAPPERS
#define KaiAndI_Source_KaiAndI_LampVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define KaiAndI_Source_KaiAndI_LampVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALampVolume(); \
	friend struct Z_Construct_UClass_ALampVolume_Statics; \
public: \
	DECLARE_CLASS(ALampVolume, AInteractVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(ALampVolume)


#define KaiAndI_Source_KaiAndI_LampVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALampVolume(); \
	friend struct Z_Construct_UClass_ALampVolume_Statics; \
public: \
	DECLARE_CLASS(ALampVolume, AInteractVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(ALampVolume)


#define KaiAndI_Source_KaiAndI_LampVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALampVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALampVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALampVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALampVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALampVolume(ALampVolume&&); \
	NO_API ALampVolume(const ALampVolume&); \
public:


#define KaiAndI_Source_KaiAndI_LampVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALampVolume(ALampVolume&&); \
	NO_API ALampVolume(const ALampVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALampVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALampVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALampVolume)


#define KaiAndI_Source_KaiAndI_LampVolume_h_15_PRIVATE_PROPERTY_OFFSET
#define KaiAndI_Source_KaiAndI_LampVolume_h_12_PROLOG
#define KaiAndI_Source_KaiAndI_LampVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_RPC_WRAPPERS \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_INCLASS \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KaiAndI_Source_KaiAndI_LampVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_INCLASS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_LampVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAIANDI_API UClass* StaticClass<class ALampVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KaiAndI_Source_KaiAndI_LampVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
