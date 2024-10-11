// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Core/Common/GSCAttributesGenSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributesGenSettings() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributesGenSettings();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributesGenSettings_NoRegister();
BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeDefinition();
BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributesSettings();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin ScriptStruct FGSCAttributeDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributeDefinition;
class UScriptStruct* FGSCAttributeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeDefinition, (UObject*)Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("GSCAttributeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FGSCAttributeDefinition>()
{
	return FGSCAttributeDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The GameplayAttribute name you want to generate */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The GameplayAttribute name you want to generate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default value for this attribute before getting initialized by a GameplayEffect */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default value for this attribute before getting initialized by a GameplayEffect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The UPROPERTY Category specifier for this attribute */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UPROPERTY Category specifier for this attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GameplayAttributes are replicated by default, works for Single Player and Multiplayer */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayAttributes are replicated by default, works for Single Player and Multiplayer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static void NewProp_bReplicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeDefinition, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeDefinition, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeDefinition, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_SetBit(void* Obj)
{
	((FGSCAttributeDefinition*)Obj)->bReplicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGSCAttributeDefinition), &Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicated_MetaData), NewProp_bReplicated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	nullptr,
	&NewStructOps,
	"GSCAttributeDefinition",
	Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers),
	sizeof(FGSCAttributeDefinition),
	alignof(FGSCAttributeDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.InnerSingleton;
}
// End ScriptStruct FGSCAttributeDefinition

// Begin ScriptStruct FGSCAttributesSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributesSettings;
class UScriptStruct* FGSCAttributesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributesSettings, (UObject*)Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("GSCAttributesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributesSettings.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FGSCAttributesSettings>()
{
	return FGSCAttributesSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Define here any number of GameplayAttributes you want to generate (at least one) */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define here any number of GameplayAttributes you want to generate (at least one)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributesSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCAttributeDefinition, METADATA_PARAMS(0, nullptr) }; // 3237546478
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributesSettings, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 3237546478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	nullptr,
	&NewStructOps,
	"GSCAttributesSettings",
	Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers),
	sizeof(FGSCAttributesSettings),
	alignof(FGSCAttributesSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributesSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributesSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributesSettings.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributesSettings.InnerSingleton;
}
// End ScriptStruct FGSCAttributesSettings

// Begin Class UGSCAttributesGenSettings
void UGSCAttributesGenSettings::StaticRegisterNativesUGSCAttributesGenSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAttributesGenSettings);
UClass* Z_Construct_UClass_UGSCAttributesGenSettings_NoRegister()
{
	return UGSCAttributesGenSettings::StaticClass();
}
struct Z_Construct_UClass_UGSCAttributesGenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Core/Common/GSCAttributesGenSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "BlueprintGASWrapper Attributes Generation" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributesGenSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAttributesGenSettings, Settings), Z_Construct_UScriptStruct_FGSCAttributesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1174510707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSCAttributesGenSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributesGenSettings_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSCAttributesGenSettings()
{
	if (!Z_Registration_Info_UClass_UGSCAttributesGenSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAttributesGenSettings.OuterSingleton, Z_Construct_UClass_UGSCAttributesGenSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSCAttributesGenSettings.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCAttributesGenSettings>()
{
	return UGSCAttributesGenSettings::StaticClass();
}
UGSCAttributesGenSettings::UGSCAttributesGenSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributesGenSettings);
UGSCAttributesGenSettings::~UGSCAttributesGenSettings() {}
// End Class UGSCAttributesGenSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCAttributesGenSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSCAttributeDefinition::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewStructOps, TEXT("GSCAttributeDefinition"), &Z_Registration_Info_UScriptStruct_GSCAttributeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributeDefinition), 3237546478U) },
		{ FGSCAttributesSettings::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewStructOps, TEXT("GSCAttributesSettings"), &Z_Registration_Info_UScriptStruct_GSCAttributesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributesSettings), 1174510707U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAttributesGenSettings, UGSCAttributesGenSettings::StaticClass, TEXT("UGSCAttributesGenSettings"), &Z_Registration_Info_UClass_UGSCAttributesGenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAttributesGenSettings), 1200423720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCAttributesGenSettings_h_26974514(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
