// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/GameplayAbilityClassesWrapper/BPAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPAttributeSet() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAttributeSet();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin Class UBPAttributeSet Function OnPostGameplayEffectExecute
static FName NAME_UBPAttributeSet_OnPostGameplayEffectExecute = FName(TEXT("OnPostGameplayEffectExecute"));
void UBPAttributeSet::OnPostGameplayEffectExecute()
{
	ProcessEvent(FindFunctionChecked(NAME_UBPAttributeSet_OnPostGameplayEffectExecute),NULL);
}
struct Z_Construct_UFunction_UBPAttributeSet_OnPostGameplayEffectExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeSet" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAttributeSet_OnPostGameplayEffectExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAttributeSet, nullptr, "OnPostGameplayEffectExecute", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnPostGameplayEffectExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPAttributeSet_OnPostGameplayEffectExecute_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBPAttributeSet_OnPostGameplayEffectExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPAttributeSet_OnPostGameplayEffectExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBPAttributeSet Function OnPostGameplayEffectExecute

// Begin Class UBPAttributeSet Function OnPreGameplayEffectExecute
struct BPAttributeSet_eventOnPreGameplayEffectExecute_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BPAttributeSet_eventOnPreGameplayEffectExecute_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UBPAttributeSet_OnPreGameplayEffectExecute = FName(TEXT("OnPreGameplayEffectExecute"));
bool UBPAttributeSet::OnPreGameplayEffectExecute()
{
	BPAttributeSet_eventOnPreGameplayEffectExecute_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UBPAttributeSet_OnPreGameplayEffectExecute),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeSet" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPAttributeSet_eventOnPreGameplayEffectExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPAttributeSet_eventOnPreGameplayEffectExecute_Parms), &Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAttributeSet, nullptr, "OnPreGameplayEffectExecute", nullptr, nullptr, Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::PropPointers), sizeof(BPAttributeSet_eventOnPreGameplayEffectExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::Function_MetaDataParams) };
static_assert(sizeof(BPAttributeSet_eventOnPreGameplayEffectExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBPAttributeSet Function OnPreGameplayEffectExecute

// Begin Class UBPAttributeSet Function OnRep_Energy
struct Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics
{
	struct BPAttributeSet_eventOnRep_Energy_Parms
	{
		FGameplayAttributeData OldEnergy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy = { "OldEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPAttributeSet_eventOnRep_Energy_Parms, OldEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEnergy_MetaData), NewProp_OldEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAttributeSet, nullptr, "OnRep_Energy", nullptr, nullptr, Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::BPAttributeSet_eventOnRep_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::BPAttributeSet_eventOnRep_Energy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPAttributeSet::execOnRep_Energy)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnergy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Energy(Z_Param_Out_OldEnergy);
	P_NATIVE_END;
}
// End Class UBPAttributeSet Function OnRep_Energy

// Begin Class UBPAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics
{
	struct BPAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::BPAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::BPAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UBPAttributeSet Function OnRep_Health

// Begin Class UBPAttributeSet Function OnRep_MaxEnergy
struct Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics
{
	struct BPAttributeSet_eventOnRep_MaxEnergy_Parms
	{
		FGameplayAttributeData OldMaxEnergy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy = { "OldMaxEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPAttributeSet_eventOnRep_MaxEnergy_Parms, OldMaxEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxEnergy_MetaData), NewProp_OldMaxEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAttributeSet, nullptr, "OnRep_MaxEnergy", nullptr, nullptr, Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::BPAttributeSet_eventOnRep_MaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::BPAttributeSet_eventOnRep_MaxEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPAttributeSet::execOnRep_MaxEnergy)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxEnergy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxEnergy(Z_Param_Out_OldMaxEnergy);
	P_NATIVE_END;
}
// End Class UBPAttributeSet Function OnRep_MaxEnergy

// Begin Class UBPAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics
{
	struct BPAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::BPAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::BPAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UBPAttributeSet Function OnRep_MaxHealth

// Begin Class UBPAttributeSet
void UBPAttributeSet::StaticRegisterNativesUBPAttributeSet()
{
	UClass* Class = UBPAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Energy", &UBPAttributeSet::execOnRep_Energy },
		{ "OnRep_Health", &UBPAttributeSet::execOnRep_Health },
		{ "OnRep_MaxEnergy", &UBPAttributeSet::execOnRep_MaxEnergy },
		{ "OnRep_MaxHealth", &UBPAttributeSet::execOnRep_MaxHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPAttributeSet);
UClass* Z_Construct_UClass_UBPAttributeSet_NoRegister()
{
	return UBPAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UBPAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilityClassesWrapper/BPAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Energy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPAttributeSet_OnPostGameplayEffectExecute, "OnPostGameplayEffectExecute" }, // 122349428
		{ &Z_Construct_UFunction_UBPAttributeSet_OnPreGameplayEffectExecute, "OnPreGameplayEffectExecute" }, // 2248946932
		{ &Z_Construct_UFunction_UBPAttributeSet_OnRep_Energy, "OnRep_Energy" }, // 4201771879
		{ &Z_Construct_UFunction_UBPAttributeSet_OnRep_Health, "OnRep_Health" }, // 224031665
		{ &Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxEnergy, "OnRep_MaxEnergy" }, // 1713316095
		{ &Z_Construct_UFunction_UBPAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 396624494
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(0, nullptr) }; // 675369593
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPAttributeSet, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPAttributeSet, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Energy_MetaData), NewProp_Energy_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_MaxEnergy = { "MaxEnergy", "OnRep_MaxEnergy", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPAttributeSet, MaxEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnergy_MetaData), NewProp_MaxEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_Energy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAttributeSet_Statics::NewProp_MaxEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBPAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPAttributeSet_Statics::ClassParams = {
	&UBPAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBPAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBPAttributeSet_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPAttributeSet()
{
	if (!Z_Registration_Info_UClass_UBPAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPAttributeSet.OuterSingleton, Z_Construct_UClass_UBPAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPAttributeSet.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UBPAttributeSet>()
{
	return UBPAttributeSet::StaticClass();
}
void UBPAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_Energy(TEXT("Energy"));
	static const FName Name_MaxEnergy(TEXT("MaxEnergy"));
	const bool bIsValid = true
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
		&& Name_MaxEnergy == ClassReps[(int32)ENetFields_Private::MaxEnergy].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBPAttributeSet"));
}
UBPAttributeSet::UBPAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPAttributeSet);
UBPAttributeSet::~UBPAttributeSet() {}
// End Class UBPAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPAttributeSet, UBPAttributeSet::StaticClass, TEXT("UBPAttributeSet"), &Z_Registration_Info_UClass_UBPAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPAttributeSet), 88387230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_1215287454(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
