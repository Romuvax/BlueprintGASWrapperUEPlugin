// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPAbilitySystemComponent() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAbilitySystemComponent();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAbilitySystemComponent_NoRegister();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAttributeSet_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin Class UBPAbilitySystemComponent Function InitAbilityActorInfo
struct Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics
{
	struct BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms
	{
		AActor* InOwnerActor;
		AActor* InAvatarActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAvatarActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms, InOwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InAvatarActor = { "InAvatarActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms, InAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InAvatarActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAbilitySystemComponent, nullptr, "InitAbilityActorInfo", nullptr, nullptr, Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPAbilitySystemComponent::execInitAbilityActorInfo)
{
	P_GET_OBJECT(AActor,Z_Param_InOwnerActor);
	P_GET_OBJECT(AActor,Z_Param_InAvatarActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitAbilityActorInfo(Z_Param_InOwnerActor,Z_Param_InAvatarActor);
	P_NATIVE_END;
}
// End Class UBPAbilitySystemComponent Function InitAbilityActorInfo

// Begin Class UBPAbilitySystemComponent
void UBPAbilitySystemComponent::StaticRegisterNativesUBPAbilitySystemComponent()
{
	UClass* Class = UBPAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitAbilityActorInfo", &UBPAbilitySystemComponent::execInitAbilityActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPAbilitySystemComponent);
UClass* Z_Construct_UClass_UBPAbilitySystemComponent_NoRegister()
{
	return UBPAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UBPAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AbilitySystemWrapper" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetClass_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo, "InitAbilityActorInfo" }, // 3142341778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSetClass = { "AttributeSetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPAbilitySystemComponent, AttributeSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBPAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetClass_MetaData), NewProp_AttributeSetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPAbilitySystemComponent, AttributeSet), Z_Construct_UClass_UBPAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBPAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPAbilitySystemComponent_Statics::ClassParams = {
	&UBPAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBPAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UBPAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UBPAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPAbilitySystemComponent.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UBPAbilitySystemComponent>()
{
	return UBPAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPAbilitySystemComponent);
UBPAbilitySystemComponent::~UBPAbilitySystemComponent() {}
// End Class UBPAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPAbilitySystemComponent, UBPAbilitySystemComponent::StaticClass, TEXT("UBPAbilitySystemComponent"), &Z_Registration_Info_UClass_UBPAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPAbilitySystemComponent), 1340768520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAbilitySystemComponent_h_1511600800(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
