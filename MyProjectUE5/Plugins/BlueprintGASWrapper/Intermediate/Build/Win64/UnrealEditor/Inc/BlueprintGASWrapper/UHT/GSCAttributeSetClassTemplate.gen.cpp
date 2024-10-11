// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Templates/GSCAttributeSetClassTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributeSetClassTemplate() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate_NoRegister();
GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UPluginClassTemplate();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin Class UGSCAttributeSetClassTemplate
void UGSCAttributeSetClassTemplate::StaticRegisterNativesUGSCAttributeSetClassTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAttributeSetClassTemplate);
UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate_NoRegister()
{
	return UGSCAttributeSetClassTemplate::StaticClass();
}
struct Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Templates/GSCAttributeSetClassTemplate.h" },
		{ "ModuleRelativePath", "Public/Templates/GSCAttributeSetClassTemplate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributeSetClassTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPluginClassTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::ClassParams = {
	&UGSCAttributeSetClassTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate()
{
	if (!Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate.OuterSingleton, Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCAttributeSetClassTemplate>()
{
	return UGSCAttributeSetClassTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributeSetClassTemplate);
UGSCAttributeSetClassTemplate::~UGSCAttributeSetClassTemplate() {}
// End Class UGSCAttributeSetClassTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Templates_GSCAttributeSetClassTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAttributeSetClassTemplate, UGSCAttributeSetClassTemplate::StaticClass, TEXT("UGSCAttributeSetClassTemplate"), &Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAttributeSetClassTemplate), 2646257969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Templates_GSCAttributeSetClassTemplate_h_3198042404(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Templates_GSCAttributeSetClassTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Templates_GSCAttributeSetClassTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
