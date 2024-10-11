// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Attributes/GSCAttributeSetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributeSetBase() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetBase();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetBase_NoRegister();
BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin ScriptStruct FGSCAttributeSetExecutionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData;
class UScriptStruct* FGSCAttributeSetExecutionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData, (UObject*)Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("GSCAttributeSetExecutionData"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FGSCAttributeSetExecutionData>()
{
	return FGSCAttributeSetExecutionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Structure holding various information to deal with AttributeSet PostGameplayEffectExecute, extracting info from FGameplayEffectModCallbackData */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure holding various information to deal with AttributeSet PostGameplayEffectExecute, extracting info from FGameplayEffectModCallbackData" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain) */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical representation of the owner (Avatar) for the target we intend to apply to  */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical representation of the owner (Avatar) for the target we intend to apply to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability system component of the instigator that started the whole chain */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component of the instigator that started the whole chain" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PlayerController associated with the owning actor for the Source ASC (The ability system component of the instigator that started the whole chain) */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerController associated with the owning actor for the Source ASC (The ability system component of the instigator that started the whole chain)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PlayerController associated with the owning actor for the target we intend to apply to */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerController associated with the owning actor for the target we intend to apply to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain), as a APawn */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain), as a APawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The physical representation of the owner (Avatar) for the target we intend to apply to, as a APawn */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physical representation of the owner (Avatar) for the target we intend to apply to, as a APawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The object this effect was created from. */" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object this effect was created from." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeSetExecutionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceController_MetaData), NewProp_SourceController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetController_MetaData), NewProp_TargetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn = { "SourcePawn", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourcePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePawn_MetaData), NewProp_SourcePawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPawn_MetaData), NewProp_TargetPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	nullptr,
	&NewStructOps,
	"GSCAttributeSetExecutionData",
	Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers),
	sizeof(FGSCAttributeSetExecutionData),
	alignof(FGSCAttributeSetExecutionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.InnerSingleton;
}
// End ScriptStruct FGSCAttributeSetExecutionData

// Begin Class UGSCAttributeSetBase
void UGSCAttributeSetBase::StaticRegisterNativesUGSCAttributeSetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAttributeSetBase);
UClass* Z_Construct_UClass_UGSCAttributeSetBase_NoRegister()
{
	return UGSCAttributeSetBase::StaticClass();
}
struct Z_Construct_UClass_UGSCAttributeSetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base AttributeSet Class to extend from.\n *\n * Does not hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n *\n * - AdjustAttributeForMaxChange()\n * - Clamp Values definition from Project Config\n */" },
#endif
		{ "IncludePath", "Attributes/GSCAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base AttributeSet Class to extend from.\n\nDoes not hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n\n- AdjustAttributeForMaxChange()\n- Clamp Values definition from Project Config" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributeSetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSCAttributeSetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributeSetBase_Statics::ClassParams = {
	&UGSCAttributeSetBase::StaticClass,
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
	0x003000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSCAttributeSetBase()
{
	if (!Z_Registration_Info_UClass_UGSCAttributeSetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAttributeSetBase.OuterSingleton, Z_Construct_UClass_UGSCAttributeSetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSCAttributeSetBase.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCAttributeSetBase>()
{
	return UGSCAttributeSetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributeSetBase);
UGSCAttributeSetBase::~UGSCAttributeSetBase() {}
// End Class UGSCAttributeSetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Attributes_GSCAttributeSetBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSCAttributeSetExecutionData::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewStructOps, TEXT("GSCAttributeSetExecutionData"), &Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributeSetExecutionData), 3330796604U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAttributeSetBase, UGSCAttributeSetBase::StaticClass, TEXT("UGSCAttributeSetBase"), &Z_Registration_Info_UClass_UGSCAttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAttributeSetBase), 794999551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Attributes_GSCAttributeSetBase_h_899378394(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Attributes_GSCAttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Attributes_GSCAttributeSetBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Attributes_GSCAttributeSetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Attributes_GSCAttributeSetBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
