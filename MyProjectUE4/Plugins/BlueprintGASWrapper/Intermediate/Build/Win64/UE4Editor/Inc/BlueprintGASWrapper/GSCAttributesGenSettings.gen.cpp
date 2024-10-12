// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Core/Common/GSCAttributesGenSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributesGenSettings() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributesSettings();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
	BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeDefinition();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributesGenSettings_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributesGenSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FGSCAttributesSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGASWRAPPER_API uint32 Get_Z_Construct_UScriptStruct_FGSCAttributesSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributesSettings, Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("GSCAttributesSettings"), sizeof(FGSCAttributesSettings), Get_Z_Construct_UScriptStruct_FGSCAttributesSettings_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FGSCAttributesSettings>()
{
	return FGSCAttributesSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSCAttributesSettings(FGSCAttributesSettings::StaticStruct, TEXT("/Script/BlueprintGASWrapper"), TEXT("GSCAttributesSettings"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributesSettings
{
	FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributesSettings()
	{
		UScriptStruct::DeferCppStructOps<FGSCAttributesSettings>(FName(TEXT("GSCAttributesSettings")));
	}
} ScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributesSettings;
	struct Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributesSettings>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCAttributeDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Define here any number of GameplayAttributes you want to generate (at least one) */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "Define here any number of GameplayAttributes you want to generate (at least one)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributesSettings, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
		nullptr,
		&NewStructOps,
		"GSCAttributesSettings",
		sizeof(FGSCAttributesSettings),
		alignof(FGSCAttributesSettings),
		Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributesSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSCAttributesSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGASWrapper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSCAttributesSettings"), sizeof(FGSCAttributesSettings), Get_Z_Construct_UScriptStruct_FGSCAttributesSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSCAttributesSettings_Hash() { return 1490607389U; }
class UScriptStruct* FGSCAttributeDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGASWRAPPER_API uint32 Get_Z_Construct_UScriptStruct_FGSCAttributeDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeDefinition, Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("GSCAttributeDefinition"), sizeof(FGSCAttributeDefinition), Get_Z_Construct_UScriptStruct_FGSCAttributeDefinition_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FGSCAttributeDefinition>()
{
	return FGSCAttributeDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSCAttributeDefinition(FGSCAttributeDefinition::StaticStruct, TEXT("/Script/BlueprintGASWrapper"), TEXT("GSCAttributeDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributeDefinition
{
	FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributeDefinition()
	{
		UScriptStruct::DeferCppStructOps<FGSCAttributeDefinition>(FName(TEXT("GSCAttributeDefinition")));
	}
} ScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributeDefinition;
	struct Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[];
#endif
		static void NewProp_bReplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** The GameplayAttribute name you want to generate */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "The GameplayAttribute name you want to generate" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeDefinition, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** The default value for this attribute before getting initialized by a GameplayEffect */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "The default value for this attribute before getting initialized by a GameplayEffect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeDefinition, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** The UPROPERTY Category specifier for this attribute */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "The UPROPERTY Category specifier for this attribute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeDefinition, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** GameplayAttributes are replicated by default, works for Single Player and Multiplayer */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "GameplayAttributes are replicated by default, works for Single Player and Multiplayer" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((FGSCAttributeDefinition*)Obj)->bReplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSCAttributeDefinition), &Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
		nullptr,
		&NewStructOps,
		"GSCAttributeDefinition",
		sizeof(FGSCAttributeDefinition),
		alignof(FGSCAttributeDefinition),
		Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSCAttributeDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGASWrapper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSCAttributeDefinition"), sizeof(FGSCAttributeDefinition), Get_Z_Construct_UScriptStruct_FGSCAttributeDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSCAttributeDefinition_Hash() { return 744080641U; }
	void UGSCAttributesGenSettings::StaticRegisterNativesUGSCAttributesGenSettings()
	{
	}
	UClass* Z_Construct_UClass_UGSCAttributesGenSettings_NoRegister()
	{
		return UGSCAttributesGenSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAttributesGenSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAttributesGenSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Core/Common/GSCAttributesGenSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "BlueprintGASWrapper Attributes Generation" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAttributesGenSettings, Settings), Z_Construct_UScriptStruct_FGSCAttributesSettings, METADATA_PARAMS(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAttributesGenSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributesGenSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributesGenSettings_Statics::ClassParams = {
		&UGSCAttributesGenSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCAttributesGenSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSCAttributesGenSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSCAttributesGenSettings, 3671126600);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCAttributesGenSettings>()
	{
		return UGSCAttributesGenSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSCAttributesGenSettings(Z_Construct_UClass_UGSCAttributesGenSettings, &UGSCAttributesGenSettings::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UGSCAttributesGenSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributesGenSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
