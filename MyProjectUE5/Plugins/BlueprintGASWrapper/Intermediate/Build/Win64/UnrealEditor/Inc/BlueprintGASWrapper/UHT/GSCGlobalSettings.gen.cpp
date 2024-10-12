// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Core/Common/GSCGlobalSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGlobalSettings() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCGlobalSettings();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCGlobalSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin Class UGSCGlobalSettings
void UGSCGlobalSettings::StaticRegisterNativesUGSCGlobalSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGlobalSettings);
UClass* Z_Construct_UClass_UGSCGlobalSettings_NoRegister()
{
	return UGSCGlobalSettings::StaticClass();
}
struct Z_Construct_UClass_UGSCGlobalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "GSC Global Settings" },
		{ "IncludePath", "Core/Common/GSCGlobalSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemGlobalName_MetaData[] = {
		{ "Category", "AGN" },
		{ "DisplayName", "Gameplay Ability System Globals Class" },
		{ "MetaClass", "/Script/GameplayAbilities.AbilitySystemGlobals" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Ability System Globals Class to use for all actors in the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[] = {
		{ "Category", "GCN" },
		{ "DisplayName", "GameplayCue Notify Manager" },
		{ "MetaClass", "/Script/GameplayAbilities.GameplayCueManager" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayCue Notify Manager Class NOT USED AS OF NOW" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCuePaths_MetaData[] = {
		{ "Category", "GCN" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "GameplayCue Notify Paths, Only the FIRST one is used by the CueEditor at the moment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueNotifyClasses_MetaData[] = {
		{ "Category", "GCN" },
		{ "DisplayName", "GameplayCue Notify Classes" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayCue Notify Classes to use for all actors in the game" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySystemGlobalName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayCuePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCuePaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueNotifyClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCueNotifyClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGlobalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_AbilitySystemGlobalName = { "AbilitySystemGlobalName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGlobalSettings, AbilitySystemGlobalName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemGlobalName_MetaData), NewProp_AbilitySystemGlobalName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGlobalSettings, CueName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueName_MetaData), NewProp_CueName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths_Inner = { "GameplayCuePaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths = { "GameplayCuePaths", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGlobalSettings, GameplayCuePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCuePaths_MetaData), NewProp_GameplayCuePaths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses_Inner = { "GameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses = { "GameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGlobalSettings, GameplayCueNotifyClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueNotifyClasses_MetaData), NewProp_GameplayCueNotifyClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_AbilitySystemGlobalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_CueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCuePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGlobalSettings_Statics::NewProp_GameplayCueNotifyClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSCGlobalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGlobalSettings_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGlobalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCGlobalSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSCGlobalSettings()
{
	if (!Z_Registration_Info_UClass_UGSCGlobalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGlobalSettings.OuterSingleton, Z_Construct_UClass_UGSCGlobalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSCGlobalSettings.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCGlobalSettings>()
{
	return UGSCGlobalSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGlobalSettings);
UGSCGlobalSettings::~UGSCGlobalSettings() {}
// End Class UGSCGlobalSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGlobalSettings, UGSCGlobalSettings::StaticClass, TEXT("UGSCGlobalSettings"), &Z_Registration_Info_UClass_UGSCGlobalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGlobalSettings), 1285848662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_3792710800(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
