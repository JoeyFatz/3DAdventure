// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiAndI/DialogueTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueTrigger() {}
// Cross Module References
	KAIANDI_API UClass* Z_Construct_UClass_ADialogueTrigger_NoRegister();
	KAIANDI_API UClass* Z_Construct_UClass_ADialogueTrigger();
	KAIANDI_API UClass* Z_Construct_UClass_AInteractVolume();
	UPackage* Z_Construct_UPackage__Script_KaiAndI();
	KAIANDI_API UFunction* Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01();
	KAIANDI_API UFunction* Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02();
// End Cross Module References
	static FName NAME_ADialogueTrigger_TriggerDialogue01 = FName(TEXT("TriggerDialogue01"));
	void ADialogueTrigger::TriggerDialogue01()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADialogueTrigger_TriggerDialogue01),NULL);
	}
	static FName NAME_ADialogueTrigger_TriggerDialogue02 = FName(TEXT("TriggerDialogue02"));
	void ADialogueTrigger::TriggerDialogue02()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADialogueTrigger_TriggerDialogue02),NULL);
	}
	void ADialogueTrigger::StaticRegisterNativesADialogueTrigger()
	{
		UClass* Class = ADialogueTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerDialogue01", &ADialogueTrigger::execTriggerDialogue01 },
			{ "TriggerDialogue02", &ADialogueTrigger::execTriggerDialogue02 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Triggers event in blueprints that plays text widget */" },
		{ "ModuleRelativePath", "DialogueTrigger.h" },
		{ "ToolTip", "Triggers event in blueprints that plays text widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger, nullptr, "TriggerDialogue01", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Triggers event in blueprints that plays text widget */" },
		{ "ModuleRelativePath", "DialogueTrigger.h" },
		{ "ToolTip", "Triggers event in blueprints that plays text widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger, nullptr, "TriggerDialogue02", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADialogueTrigger_NoRegister()
	{
		return ADialogueTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ADialogueTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteraction02_MetaData[];
#endif
		static void NewProp_bInteraction02_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteraction02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteraction01_MetaData[];
#endif
		static void NewProp_bInteraction01_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteraction01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialogueActive_MetaData[];
#endif
		static void NewProp_bDialogueActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialogueActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADialogueTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiAndI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADialogueTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue01, "TriggerDialogue01" }, // 1961103093
		{ &Z_Construct_UFunction_ADialogueTrigger_TriggerDialogue02, "TriggerDialogue02" }, // 333367264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueTrigger.h" },
		{ "ModuleRelativePath", "DialogueTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_LineCount_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Determines which line in the script will play */" },
		{ "ModuleRelativePath", "DialogueTrigger.h" },
		{ "ToolTip", "Determines which line in the script will play" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_LineCount = { "LineCount", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADialogueTrigger, LineCount), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_LineCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_LineCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction02_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Toggles widget in blueprints */" },
		{ "ModuleRelativePath", "DialogueTrigger.h" },
		{ "ToolTip", "Toggles widget in blueprints" },
	};
#endif
	void Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction02_SetBit(void* Obj)
	{
		((ADialogueTrigger*)Obj)->bInteraction02 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction02 = { "bInteraction02", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADialogueTrigger), &Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction02_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction02_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction01_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Toggles widget in blueprints */" },
		{ "ModuleRelativePath", "DialogueTrigger.h" },
		{ "ToolTip", "Toggles widget in blueprints" },
	};
#endif
	void Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction01_SetBit(void* Obj)
	{
		((ADialogueTrigger*)Obj)->bInteraction01 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction01 = { "bInteraction01", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADialogueTrigger), &Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction01_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction01_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bDialogueActive_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** If true, player will enter dialogue tree */" },
		{ "ModuleRelativePath", "DialogueTrigger.h" },
		{ "ToolTip", "If true, player will enter dialogue tree" },
	};
#endif
	void Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bDialogueActive_SetBit(void* Obj)
	{
		((ADialogueTrigger*)Obj)->bDialogueActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bDialogueActive = { "bDialogueActive", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADialogueTrigger), &Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bDialogueActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bDialogueActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bDialogueActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADialogueTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_LineCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bInteraction01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_Statics::NewProp_bDialogueActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADialogueTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADialogueTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADialogueTrigger_Statics::ClassParams = {
		&ADialogueTrigger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADialogueTrigger_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADialogueTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADialogueTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADialogueTrigger, 1644092646);
	template<> KAIANDI_API UClass* StaticClass<ADialogueTrigger>()
	{
		return ADialogueTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADialogueTrigger(Z_Construct_UClass_ADialogueTrigger, &ADialogueTrigger::StaticClass, TEXT("/Script/KaiAndI"), TEXT("ADialogueTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADialogueTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
