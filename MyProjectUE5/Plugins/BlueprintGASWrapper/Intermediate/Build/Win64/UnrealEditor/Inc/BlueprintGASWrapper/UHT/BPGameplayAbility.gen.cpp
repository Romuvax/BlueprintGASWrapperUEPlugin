// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPGameplayAbility() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPGameplayAbility();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPGameplayAbility_NoRegister();
BLUEPRINTGASWRAPPER_API UEnum* Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin Enum EEnhancedActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnhancedActivationPolicy;
static UEnum* EEnhancedActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnhancedActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnhancedActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy, (UObject*)Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("EEnhancedActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EEnhancedActivationPolicy.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UEnum* StaticEnum<EEnhancedActivationPolicy>()
{
	return EEnhancedActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
		{ "OnInputTriggered.Name", "EEnhancedActivationPolicy::OnInputTriggered" },
		{ "WhileInputActive.Name", "EEnhancedActivationPolicy::WhileInputActive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnhancedActivationPolicy::OnInputTriggered", (int64)EEnhancedActivationPolicy::OnInputTriggered },
		{ "EEnhancedActivationPolicy::WhileInputActive", (int64)EEnhancedActivationPolicy::WhileInputActive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	nullptr,
	"EEnhancedActivationPolicy",
	"EEnhancedActivationPolicy",
	Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EEnhancedActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnhancedActivationPolicy.InnerSingleton, Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnhancedActivationPolicy.InnerSingleton;
}
// End Enum EEnhancedActivationPolicy

// Begin Class UBPGameplayAbility
void UBPGameplayAbility::StaticRegisterNativesUBPGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPGameplayAbility);
UClass* Z_Construct_UClass_UBPGameplayAbility_NoRegister()
{
	return UBPGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBPGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "ActivationPolicy" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPGameplayAbility, ActivationPolicy), Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 3812685244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBPGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPGameplayAbility_Statics::ClassParams = {
	&UBPGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBPGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBPGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBPGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPGameplayAbility.OuterSingleton, Z_Construct_UClass_UBPGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPGameplayAbility.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UBPGameplayAbility>()
{
	return UBPGameplayAbility::StaticClass();
}
UBPGameplayAbility::UBPGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPGameplayAbility);
UBPGameplayAbility::~UBPGameplayAbility() {}
// End Class UBPGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnhancedActivationPolicy_StaticEnum, TEXT("EEnhancedActivationPolicy"), &Z_Registration_Info_UEnum_EEnhancedActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3812685244U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPGameplayAbility, UBPGameplayAbility::StaticClass, TEXT("UBPGameplayAbility"), &Z_Registration_Info_UClass_UBPGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPGameplayAbility), 998183827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_2012972280(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
