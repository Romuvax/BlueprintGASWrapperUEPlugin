// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Templates/GSCAttributeSetClassTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributeSetClassTemplate() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UPluginClassTemplate();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References
	void UGSCAttributeSetClassTemplate::StaticRegisterNativesUGSCAttributeSetClassTemplate()
	{
	}
	UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate_NoRegister()
	{
		return UGSCAttributeSetClassTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPluginClassTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Templates/GSCAttributeSetClassTemplate.h" },
		{ "ModuleRelativePath", "Public/Templates/GSCAttributeSetClassTemplate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributeSetClassTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSCAttributeSetClassTemplate, 959105639);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCAttributeSetClassTemplate>()
	{
		return UGSCAttributeSetClassTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSCAttributeSetClassTemplate(Z_Construct_UClass_UGSCAttributeSetClassTemplate, &UGSCAttributeSetClassTemplate::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UGSCAttributeSetClassTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributeSetClassTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
