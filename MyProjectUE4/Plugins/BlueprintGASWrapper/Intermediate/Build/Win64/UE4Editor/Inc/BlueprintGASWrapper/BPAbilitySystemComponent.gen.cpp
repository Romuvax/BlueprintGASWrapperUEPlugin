// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPAbilitySystemComponent() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAbilitySystemComponent_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBPAbilitySystemComponent::execInitAbilityActorInfo)
	{
		P_GET_OBJECT(AActor,Z_Param_InOwnerActor);
		P_GET_OBJECT(AActor,Z_Param_InAvatarActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitAbilityActorInfo(Z_Param_InOwnerActor,Z_Param_InAvatarActor);
		P_NATIVE_END;
	}
	void UBPAbilitySystemComponent::StaticRegisterNativesUBPAbilitySystemComponent()
	{
		UClass* Class = UBPAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitAbilityActorInfo", &UBPAbilitySystemComponent::execInitAbilityActorInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics
	{
		struct BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms
		{
			AActor* InOwnerActor;
			AActor* InAvatarActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAvatarActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms, InOwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InAvatarActor = { "InAvatarActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms, InAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InOwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::NewProp_InAvatarActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPAbilitySystemComponent, nullptr, "InitAbilityActorInfo", nullptr, nullptr, sizeof(BPAbilitySystemComponent_eventInitAbilityActorInfo_Parms), Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPAbilitySystemComponent_NoRegister()
	{
		return UBPAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBPAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttributeSetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPAbilitySystemComponent_InitAbilityActorInfo, "InitAbilityActorInfo" }, // 77287772
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AbilitySystemWrapper" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSetClass_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSetClass = { "AttributeSetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBPAbilitySystemComponent, AttributeSetClass), Z_Construct_UClass_UAttributeSet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBPAbilitySystemComponent, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPAbilitySystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPAbilitySystemComponent_Statics::NewProp_AttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPAbilitySystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPAbilitySystemComponent_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPAbilitySystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPAbilitySystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPAbilitySystemComponent, 1552323622);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UBPAbilitySystemComponent>()
	{
		return UBPAbilitySystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPAbilitySystemComponent(Z_Construct_UClass_UBPAbilitySystemComponent, &UBPAbilitySystemComponent::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UBPAbilitySystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPAbilitySystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
