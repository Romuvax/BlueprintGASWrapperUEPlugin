// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Input/EnhancedInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputConfig() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UEnhancedInputConfig();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UEnhancedInputConfig_NoRegister();
BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedEnhancedInputAction();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin ScriptStruct FTaggedEnhancedInputAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction;
class UScriptStruct* FTaggedEnhancedInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction, (UObject*)Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("TaggedEnhancedInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FTaggedEnhancedInputAction>()
{
	return FTaggedEnhancedInputAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "TaggedEnhancedInputAction" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "TaggedEnhancedInputAction" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedEnhancedInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedEnhancedInputAction, Input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedEnhancedInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	nullptr,
	&NewStructOps,
	"TaggedEnhancedInputAction",
	Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::PropPointers),
	sizeof(FTaggedEnhancedInputAction),
	alignof(FTaggedEnhancedInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaggedEnhancedInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction.InnerSingleton, Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction.InnerSingleton;
}
// End ScriptStruct FTaggedEnhancedInputAction

// Begin Class UEnhancedInputConfig
void UEnhancedInputConfig::StaticRegisterNativesUEnhancedInputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputConfig);
UClass* Z_Construct_UClass_UEnhancedInputConfig_NoRegister()
{
	return UEnhancedInputConfig::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Enhanced Input Config" },
		{ "IncludePath", "Input/EnhancedInputConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnhancedInputAction_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnhancedInputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputAction_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction_Inner = { "EnhancedInputAction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedEnhancedInputAction, METADATA_PARAMS(0, nullptr) }; // 2064615806
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction = { "EnhancedInputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputConfig, EnhancedInputAction), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputAction_MetaData), NewProp_EnhancedInputAction_MetaData) }; // 2064615806
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction_Inner = { "AbilityInputAction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedEnhancedInputAction, METADATA_PARAMS(0, nullptr) }; // 2064615806
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction = { "AbilityInputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputConfig, AbilityInputAction), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputAction_MetaData), NewProp_AbilityInputAction_MetaData) }; // 2064615806
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputConfig_Statics::ClassParams = {
	&UEnhancedInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputConfig()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputConfig.OuterSingleton, Z_Construct_UClass_UEnhancedInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputConfig.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UEnhancedInputConfig>()
{
	return UEnhancedInputConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputConfig);
UEnhancedInputConfig::~UEnhancedInputConfig() {}
// End Class UEnhancedInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_EnhancedInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTaggedEnhancedInputAction::StaticStruct, Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewStructOps, TEXT("TaggedEnhancedInputAction"), &Z_Registration_Info_UScriptStruct_TaggedEnhancedInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaggedEnhancedInputAction), 2064615806U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputConfig, UEnhancedInputConfig::StaticClass, TEXT("UEnhancedInputConfig"), &Z_Registration_Info_UClass_UEnhancedInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputConfig), 2078295619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_EnhancedInputConfig_h_534212528(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_EnhancedInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_EnhancedInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_EnhancedInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_EnhancedInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
