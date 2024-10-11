// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilityClassesWrapper/BPGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGASWRAPPER_BPGameplayAbility_generated_h
#error "BPGameplayAbility.generated.h already included, missing '#pragma once' in BPGameplayAbility.h"
#endif
#define BLUEPRINTGASWRAPPER_BPGameplayAbility_generated_h

#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPGameplayAbility(); \
	friend struct Z_Construct_UClass_UBPGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UBPGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGASWrapper"), NO_API) \
	DECLARE_SERIALIZER(UBPGameplayAbility)


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBPGameplayAbility(UBPGameplayAbility&&); \
	UBPGameplayAbility(const UBPGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPGameplayAbility) \
	NO_API virtual ~UBPGameplayAbility();


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_19_PROLOG
#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<class UBPGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPGameplayAbility_h


#define FOREACH_ENUM_EENHANCEDACTIVATIONPOLICY(op) \
	op(EEnhancedActivationPolicy::OnInputTriggered) \
	op(EEnhancedActivationPolicy::WhileInputActive) 

enum class EEnhancedActivationPolicy : uint8;
template<> struct TIsUEnumClass<EEnhancedActivationPolicy> { enum { Value = true }; };
template<> BLUEPRINTGASWRAPPER_API UEnum* StaticEnum<EEnhancedActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
