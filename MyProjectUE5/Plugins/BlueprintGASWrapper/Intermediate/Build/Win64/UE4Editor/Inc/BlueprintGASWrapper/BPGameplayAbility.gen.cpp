// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGASWrapper/Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPGameplayAbility() {}
// Cross Module References
	BLUEPRINTGASWRAPPER_API UEnum* Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy();
	UPackage* Z_Construct_UPackage__Script_BlueprintGASWrapper();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPGameplayAbility_NoRegister();
	BLUEPRINTGASWRAPPER_API UClass* Z_Construct_UClass_UBPGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
// End Cross Module References
	static UEnum* EEnhancedActivationPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy, Z_Construct_UPackage__Script_BlueprintGASWrapper(), TEXT("EEnhancedActivationPolicy"));
		}
		return Singleton;
	}
	template<> BLUEPRINTGASWRAPPER_API UEnum* StaticEnum<EEnhancedActivationPolicy>()
	{
		return EEnhancedActivationPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnhancedActivationPolicy(EEnhancedActivationPolicy_StaticEnum, TEXT("/Script/BlueprintGASWrapper"), TEXT("EEnhancedActivationPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Hash() { return 1939711864U; }
	UEnum* Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGASWrapper();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnhancedActivationPolicy"), 0, Get_Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnhancedActivationPolicy::OnInputTriggered", (int64)EEnhancedActivationPolicy::OnInputTriggered },
				{ "EEnhancedActivationPolicy::WhileInputActive", (int64)EEnhancedActivationPolicy::WhileInputActive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
				{ "OnInputTriggered.Name", "EEnhancedActivationPolicy::OnInputTriggered" },
				{ "WhileInputActive.Name", "EEnhancedActivationPolicy::WhileInputActive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
				nullptr,
				"EEnhancedActivationPolicy",
				"EEnhancedActivationPolicy",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBPGameplayAbility::StaticRegisterNativesUBPGameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_UBPGameplayAbility_NoRegister()
	{
		return UBPGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UBPGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGASWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "ActivationPolicy" },
		{ "ModuleRelativePath", "Public/GameplayAbilityClassesWrapper/BPGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBPGameplayAbility, ActivationPolicy), Z_Construct_UEnum_BlueprintGASWrapper_EEnhancedActivationPolicy, METADATA_PARAMS(Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPGameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPGameplayAbility_Statics::NewProp_ActivationPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPGameplayAbility_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UBPGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPGameplayAbility, 3918452362);
	template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<UBPGameplayAbility>()
	{
		return UBPGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPGameplayAbility(Z_Construct_UClass_UBPGameplayAbility, &UBPGameplayAbility::StaticClass, TEXT("/Script/BlueprintGASWrapper"), TEXT("UBPGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
