// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Input/TaggedEnhancedInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaggedEnhancedInputComponent() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin Class UTaggedEnhancedInputComponent
void UTaggedEnhancedInputComponent::StaticRegisterNativesUTaggedEnhancedInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaggedEnhancedInputComponent);
UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent_NoRegister()
{
	return UTaggedEnhancedInputComponent::StaticClass();
}
struct Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/TaggedEnhancedInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/TaggedEnhancedInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaggedEnhancedInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaggedEnhancedInputComponent()
{
	if (!Z_Registration_Info_UClass_UTaggedEnhancedInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaggedEnhancedInputComponent.OuterSingleton, Z_Construct_UClass_UTaggedEnhancedInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaggedEnhancedInputComponent.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UTaggedEnhancedInputComponent>()
{
	return UTaggedEnhancedInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaggedEnhancedInputComponent);
UTaggedEnhancedInputComponent::~UTaggedEnhancedInputComponent() {}
// End Class UTaggedEnhancedInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_TaggedEnhancedInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaggedEnhancedInputComponent, UTaggedEnhancedInputComponent::StaticClass, TEXT("UTaggedEnhancedInputComponent"), &Z_Registration_Info_UClass_UTaggedEnhancedInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaggedEnhancedInputComponent), 1345725314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_TaggedEnhancedInputComponent_h_3942470352(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_TaggedEnhancedInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Input_TaggedEnhancedInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
