// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Core/Common/GSCGlobalSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGlobalSettings() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCGlobalSettings_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCGlobalSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UGSCGlobalSettings::StaticRegisterNativesUGSCGlobalSettings()
	{
	}
	UClass* Z_Construct_UClass_UGSCGlobalSettings_NoRegister()
	{
		return UGSCGlobalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGlobalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemGlobalName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilitySystemGlobalName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameplayCuePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCuePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayCuePaths;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayCueNotifyClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCueNotifyClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayCueNotifyClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGlobalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGlobalSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "GSC Global Settings" },
		{ "IncludePath", "Core/Common/GSCGlobalSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_AbilitySystemGlobalName_MetaData[] = {
		{ "Category", "AGN" },
		{ "DisplayName", "Gameplay Ability System Globals Class" },
		{ "MetaClass", "/Script/GameplayAbilities.AbilitySystemGlobals" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
		{ "ToolTip", "Gameplay Ability System Globals Class to use for all actors in the game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_AbilitySystemGlobalName = { "AbilitySystemGlobalName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGlobalSettings, AbilitySystemGlobalName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_AbilitySystemGlobalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_AbilitySystemGlobalName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_CueName_MetaData[] = {
		{ "Category", "GCN" },
		{ "DisplayName", "GameplayCue Notify Manager" },
		{ "MetaClass", "/Script/GameplayAbilities.GameplayCueManager" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
		{ "ToolTip", "GameplayCue Notify Manager Class NOT USED AS OF NOW" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGlobalSettings, CueName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_CueName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths_Inner = { "GameplayCuePaths", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths_MetaData[] = {
		{ "Category", "GCN" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
		{ "Tooltip", "GameplayCue Notify Paths, Only the FIRST one is used by the CueEditor at the moment" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths = { "GameplayCuePaths", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGlobalSettings, GameplayCuePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses_Inner = { "GameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses_MetaData[] = {
		{ "Category", "GCN" },
		{ "DisplayName", "GameplayCue Notify Classes" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
		{ "ToolTip", "GameplayCue Notify Classes to use for all actors in the game" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses = { "GameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGlobalSettings, GameplayCueNotifyClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGlobalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_AbilitySystemGlobalName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGlobalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGlobalSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSCGlobalSettings_Statics::ClassParams = {
		&UGSCGlobalSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCGlobalSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCGlobalSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCGlobalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSCGlobalSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSCGlobalSettings, 3428425905);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCGlobalSettings>()
	{
		return UGSCGlobalSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSCGlobalSettings(Z_Construct_UClass_UGSCGlobalSettings, &UGSCGlobalSettings::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UGSCGlobalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGlobalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
