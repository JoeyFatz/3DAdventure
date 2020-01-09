// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAIANDI_NPCStationary_generated_h
#error "NPCStationary.generated.h already included, missing '#pragma once' in NPCStationary.h"
#endif
#define KAIANDI_NPCStationary_generated_h

#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_RPC_WRAPPERS
#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCStationary(); \
	friend struct Z_Construct_UClass_ANPCStationary_Statics; \
public: \
	DECLARE_CLASS(ANPCStationary, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(ANPCStationary)


#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANPCStationary(); \
	friend struct Z_Construct_UClass_ANPCStationary_Statics; \
public: \
	DECLARE_CLASS(ANPCStationary, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(ANPCStationary)


#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCStationary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCStationary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCStationary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCStationary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCStationary(ANPCStationary&&); \
	NO_API ANPCStationary(const ANPCStationary&); \
public:


#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCStationary(ANPCStationary&&); \
	NO_API ANPCStationary(const ANPCStationary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCStationary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCStationary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCStationary)


#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_PRIVATE_PROPERTY_OFFSET
#define KaiAndI_Source_KaiAndI_NPCStationary_h_9_PROLOG
#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_RPC_WRAPPERS \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_INCLASS \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KaiAndI_Source_KaiAndI_NPCStationary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_INCLASS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_NPCStationary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAIANDI_API UClass* StaticClass<class ANPCStationary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KaiAndI_Source_KaiAndI_NPCStationary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
