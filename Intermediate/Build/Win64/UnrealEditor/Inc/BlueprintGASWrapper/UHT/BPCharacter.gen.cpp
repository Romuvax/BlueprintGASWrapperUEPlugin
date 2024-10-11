// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/BPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPCharacter() {}

// Begin Cross Module References
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_ABPCharacter();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_ABPCharacter_NoRegister();
BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAttributeSet_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
// End Cross Module References

// Begin Class ABPCharacter Function SetupPlayerInputComponent
struct BPCharacter_eventSetupPlayerInputComponent_Parms
{
	UInputComponent* PlayerInputComponent;
};
static FName NAME_ABPCharacter_SetupPlayerInputComponent = FName(TEXT("SetupPlayerInputComponent"));
void ABPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	BPCharacter_eventSetupPlayerInputComponent_Parms Parms;
	Parms.PlayerInputComponent=PlayerInputComponent;
	ProcessEvent(FindFunctionChecked(NAME_ABPCharacter_SetupPlayerInputComponent),&Parms);
}
struct Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to bind functionality to input\n" },
#endif
		{ "ModuleRelativePath", "Public/BPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to bind functionality to input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPCharacter_eventSetupPlayerInputComponent_Parms, PlayerInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInputComponent_MetaData), NewProp_PlayerInputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPCharacter, nullptr, "SetupPlayerInputComponent", nullptr, nullptr, Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::PropPointers), sizeof(BPCharacter_eventSetupPlayerInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(BPCharacter_eventSetupPlayerInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABPCharacter::execSetupPlayerInputComponent)
{
	P_GET_OBJECT(UInputComponent,Z_Param_PlayerInputComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPlayerInputComponent_Implementation(Z_Param_PlayerInputComponent);
	P_NATIVE_END;
}
// End Class ABPCharacter Function SetupPlayerInputComponent

// Begin Class ABPCharacter
void ABPCharacter::StaticRegisterNativesABPCharacter()
{
	UClass* Class = ABPCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetupPlayerInputComponent", &ABPCharacter::execSetupPlayerInputComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABPCharacter);
UClass* Z_Construct_UClass_ABPCharacter_NoRegister()
{
	return ABPCharacter::StaticClass();
}
struct Z_Construct_UClass_ABPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BPCharacter.h" },
		{ "ModuleRelativePath", "Public/BPCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/BPCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABPCharacter_SetupPlayerInputComponent, "SetupPlayerInputComponent" }, // 2877208451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABPCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPCharacter, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UBPAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABPCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPCharacter_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABPCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABPCharacter_Statics::ClassParams = {
	&ABPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABPCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABPCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABPCharacter()
{
	if (!Z_Registration_Info_UClass_ABPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABPCharacter.OuterSingleton, Z_Construct_UClass_ABPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABPCharacter.OuterSingleton;
}
template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<ABPCharacter>()
{
	return ABPCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABPCharacter);
ABPCharacter::~ABPCharacter() {}
// End Class ABPCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABPCharacter, ABPCharacter::StaticClass, TEXT("ABPCharacter"), &Z_Registration_Info_UClass_ABPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABPCharacter), 240496317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_1527699044(TEXT("/Script/BlueprintGASWrapper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
