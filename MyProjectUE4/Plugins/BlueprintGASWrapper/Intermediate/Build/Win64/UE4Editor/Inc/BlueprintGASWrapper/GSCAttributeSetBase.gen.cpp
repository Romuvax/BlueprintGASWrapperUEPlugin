// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/Attributes/GSCAttributeSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributeSetBase() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetBase_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UGSCAttributeSetBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
// End Cross Module References
class UScriptStruct* FGSCAttributeSetExecutionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGASWRAPPER_API uint32 Get_Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData, Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("GSCAttributeSetExecutionData"), sizeof(FGSCAttributeSetExecutionData), Get_Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGASWRAPPER_API UScriptStruct* StaticStruct<FGSCAttributeSetExecutionData>()
{
	return FGSCAttributeSetExecutionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSCAttributeSetExecutionData(FGSCAttributeSetExecutionData::StaticStruct, TEXT("/Script/BlueprintGASWrapper"), TEXT("GSCAttributeSetExecutionData"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributeSetExecutionData
{
	FScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributeSetExecutionData()
	{
		UScriptStruct::DeferCppStructOps<FGSCAttributeSetExecutionData>(FName(TEXT("GSCAttributeSetExecutionData")));
	}
} ScriptStruct_BlueprintGASWrapper_StaticRegisterNativesFGSCAttributeSetExecutionData;
	struct Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourcePawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure holding various information to deal with AttributeSet PostGameplayEffectExecute, extracting info from FGameplayEffectModCallbackData */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "Structure holding various information to deal with AttributeSet PostGameplayEffectExecute, extracting info from FGameplayEffectModCallbackData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeSetExecutionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Comment", "/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain) */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Comment", "/** The physical representation of the owner (Avatar) for the target we intend to apply to  */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the owner (Avatar) for the target we intend to apply to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC_MetaData[] = {
		{ "Comment", "/** The ability system component of the instigator that started the whole chain */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The ability system component of the instigator that started the whole chain" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController_MetaData[] = {
		{ "Comment", "/** PlayerController associated with the owning actor for the Source ASC (The ability system component of the instigator that started the whole chain) */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "PlayerController associated with the owning actor for the Source ASC (The ability system component of the instigator that started the whole chain)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController_MetaData[] = {
		{ "Comment", "/** PlayerController associated with the owning actor for the target we intend to apply to */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "PlayerController associated with the owning actor for the target we intend to apply to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn_MetaData[] = {
		{ "Comment", "/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain), as a APawn */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain), as a APawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn = { "SourcePawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourcePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn_MetaData[] = {
		{ "Comment", "/** The physical representation of the owner (Avatar) for the target we intend to apply to, as a APawn */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the owner (Avatar) for the target we intend to apply to, as a APawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** The object this effect was created from. */" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The object this effect was created from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
		nullptr,
		&NewStructOps,
		"GSCAttributeSetExecutionData",
		sizeof(FGSCAttributeSetExecutionData),
		alignof(FGSCAttributeSetExecutionData),
		Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGASWrapper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSCAttributeSetExecutionData"), sizeof(FGSCAttributeSetExecutionData), Get_Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Hash() { return 3610645978U; }
	void UGSCAttributeSetBase::StaticRegisterNativesUGSCAttributeSetBase()
	{
	}
	UClass* Z_Construct_UClass_UGSCAttributeSetBase_NoRegister()
	{
		return UGSCAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AttributeSet Class to extend from.\n *\n * Does not hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n *\n * - AdjustAttributeForMaxChange()\n * - Clamp Values definition from Project Config\n */" },
		{ "IncludePath", "Attributes/GSCAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "Base AttributeSet Class to extend from.\n\nDoes not hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n\n- AdjustAttributeForMaxChange()\n- Clamp Values definition from Project Config" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributeSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributeSetBase_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCAttributeSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSCAttributeSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSCAttributeSetBase, 653009988);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UGSCAttributeSetBase>()
	{
		return UGSCAttributeSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSCAttributeSetBase(Z_Construct_UClass_UGSCAttributeSetBase, &UGSCAttributeSetBase::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UGSCAttributeSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributeSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
