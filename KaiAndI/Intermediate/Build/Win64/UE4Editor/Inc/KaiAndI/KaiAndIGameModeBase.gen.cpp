// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiAndI/KaiAndIGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKaiAndIGameModeBase() {}
// Cross Module References
	KAIANDI_API UClass* Z_Construct_UClass_AKaiAndIGameModeBase_NoRegister();
	KAIANDI_API UClass* Z_Construct_UClass_AKaiAndIGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KaiAndI();
// End Cross Module References
	void AKaiAndIGameModeBase::StaticRegisterNativesAKaiAndIGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AKaiAndIGameModeBase_NoRegister()
	{
		return AKaiAndIGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKaiAndIGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKaiAndIGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiAndI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKaiAndIGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KaiAndIGameModeBase.h" },
		{ "ModuleRelativePath", "KaiAndIGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKaiAndIGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKaiAndIGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKaiAndIGameModeBase_Statics::ClassParams = {
		&AKaiAndIGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AKaiAndIGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKaiAndIGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKaiAndIGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKaiAndIGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKaiAndIGameModeBase, 342642256);
	template<> KAIANDI_API UClass* StaticClass<AKaiAndIGameModeBase>()
	{
		return AKaiAndIGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKaiAndIGameModeBase(Z_Construct_UClass_AKaiAndIGameModeBase, &AKaiAndIGameModeBase::StaticClass, TEXT("/Script/KaiAndI"), TEXT("AKaiAndIGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKaiAndIGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
