// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Input/EnhancedInputConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputConfig() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedEnhancedInputAction();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UEnhancedInputConfig_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UEnhancedInputConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FTaggedEnhancedInputAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGASWRAPPER_API uint32 Get_Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction, Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("TaggedEnhancedInputAction"), sizeof(FTaggedEnhancedInputAction), Get_Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FTaggedEnhancedInputAction>()
{
	return FTaggedEnhancedInputAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaggedEnhancedInputAction(FTaggedEnhancedInputAction::StaticStruct, TEXT("/Script/BlueprintGASWrapper"), TEXT("TaggedEnhancedInputAction"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFTaggedEnhancedInputAction
{
	FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFTaggedEnhancedInputAction()
	{
		UScriptStruct::DeferCppStructOps<FTaggedEnhancedInputAction>(FName(TEXT("TaggedEnhancedInputAction")));
	}
} ScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFTaggedEnhancedInputAction;
	struct Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedEnhancedInputAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "TaggedEnhancedInputAction" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedEnhancedInputAction, Input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "TaggedEnhancedInputAction" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedEnhancedInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_InputTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::NewProp_InputTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
		nullptr,
		&NewStructOps,
		"TaggedEnhancedInputAction",
		sizeof(FTaggedEnhancedInputAction),
		alignof(FTaggedEnhancedInputAction),
		Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaggedEnhancedInputAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGASWrapper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaggedEnhancedInputAction"), sizeof(FTaggedEnhancedInputAction), Get_Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaggedEnhancedInputAction_Hash() { return 3868096056U; }
	void UEnhancedInputConfig::StaticRegisterNativesUEnhancedInputConfig()
	{
	}
	UClass* Z_Construct_UClass_UEnhancedInputConfig_NoRegister()
	{
		return UEnhancedInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnhancedInputAction_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnhancedInputAction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityInputAction_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInputAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityInputAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Enhanced Input Config" },
		{ "IncludePath", "Input/EnhancedInputConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction_Inner = { "EnhancedInputAction", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaggedEnhancedInputAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction = { "EnhancedInputAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnhancedInputConfig, EnhancedInputAction), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction_Inner = { "AbilityInputAction", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaggedEnhancedInputAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Input/EnhancedInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction = { "AbilityInputAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnhancedInputConfig, AbilityInputAction), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_EnhancedInputAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputConfig_Statics::NewProp_AbilityInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputConfig_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnhancedInputConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnhancedInputConfig, 3873860626);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UEnhancedInputConfig>()
	{
		return UEnhancedInputConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnhancedInputConfig(Z_Construct_UClass_UEnhancedInputConfig, &UEnhancedInputConfig::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UEnhancedInputConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
