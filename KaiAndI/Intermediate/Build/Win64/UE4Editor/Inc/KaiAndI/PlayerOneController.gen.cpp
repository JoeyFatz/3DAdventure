// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiAndI/PlayerOneController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerOneController() {}
// Cross Module References
	KAIANDI_API UClass* Z_Construct_UClass_APlayerOneController_NoRegister();
	KAIANDI_API UClass* Z_Construct_UClass_APlayerOneController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_KaiAndI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void APlayerOneController::StaticRegisterNativesAPlayerOneController()
	{
	}
	UClass* Z_Construct_UClass_APlayerOneController_NoRegister()
	{
		return APlayerOneController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerOneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DialogueAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerOneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiAndI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerOneController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerOneController.h" },
		{ "ModuleRelativePath", "PlayerOneController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/** varible to hold the widget after creating it */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerOneController.h" },
		{ "ToolTip", "varible to hold the widget after creating it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueOverlay = { "DialogueOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerOneController, DialogueOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueOverlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueAsset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/** Reference to the UMG Asset in the editor */" },
		{ "ModuleRelativePath", "PlayerOneController.h" },
		{ "ToolTip", "Reference to the UMG Asset in the editor" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueAsset = { "DialogueAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerOneController, DialogueAsset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerOneController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerOneController_Statics::NewProp_DialogueAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerOneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerOneController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerOneController_Statics::ClassParams = {
		&APlayerOneController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerOneController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayerOneController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerOneController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerOneController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerOneController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerOneController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerOneController, 1881662514);
	template<> KAIANDI_API UClass* StaticClass<APlayerOneController>()
	{
		return APlayerOneController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerOneController(Z_Construct_UClass_APlayerOneController, &APlayerOneController::StaticClass, TEXT("/Script/KaiAndI"), TEXT("APlayerOneController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerOneController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
