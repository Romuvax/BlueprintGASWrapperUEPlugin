// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Input/TaggedEnhancedInputComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaggedEnhancedInputComponent() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References
	void UTaggedEnhancedInputComponent::StaticRegisterNativesUTaggedEnhancedInputComponent()
	{
	}
	UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent_NoRegister()
	{
		return UTaggedEnhancedInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/TaggedEnhancedInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/TaggedEnhancedInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaggedEnhancedInputComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::ClassParams = {
		&UTaggedEnhancedInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaggedEnhancedInputComponent, 2229066735);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UTaggedEnhancedInputComponent>()
	{
		return UTaggedEnhancedInputComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaggedEnhancedInputComponent(Z_Construct_UClass_UTaggedEnhancedInputComponent, &UTaggedEnhancedInputComponent::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UTaggedEnhancedInputComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaggedEnhancedInputComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
