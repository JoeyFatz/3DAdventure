// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAIANDI_PlayerOneAnimInstance_generated_h
#error "PlayerOneAnimInstance.generated.h already included, missing '#pragma once' in PlayerOneAnimInstance.h"
#endif
#define KAIANDI_PlayerOneAnimInstance_generated_h

#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAnimationProperties(); \
		P_NATIVE_END; \
	}


#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAnimationProperties(); \
		P_NATIVE_END; \
	}


#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerOneAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerOneAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerOneAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(UPlayerOneAnimInstance)


#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerOneAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerOneAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerOneAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KaiAndI"), NO_API) \
	DECLARE_SERIALIZER(UPlayerOneAnimInstance)


#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerOneAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerOneAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerOneAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerOneAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerOneAnimInstance(UPlayerOneAnimInstance&&); \
	NO_API UPlayerOneAnimInstance(const UPlayerOneAnimInstance&); \
public:


#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerOneAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerOneAnimInstance(UPlayerOneAnimInstance&&); \
	NO_API UPlayerOneAnimInstance(const UPlayerOneAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerOneAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerOneAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerOneAnimInstance)


#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_12_PROLOG
#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_RPC_WRAPPERS \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_INCLASS \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAIANDI_API UClass* StaticClass<class UPlayerOneAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KaiAndI_Source_KaiAndI_PlayerOneAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
