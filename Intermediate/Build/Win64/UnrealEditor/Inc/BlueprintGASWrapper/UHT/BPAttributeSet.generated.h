// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilityClassesWrapper/BPAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef BLUEPRINTGASWRAPPER_BPAttributeSet_generated_h
#error "BPAttributeSet.generated.h already included, missing '#pragma once' in BPAttributeSet.h"
#endif
#define BLUEPRINTGASWRAPPER_BPAttributeSet_generated_h

#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxEnergy); \
	DECLARE_FUNCTION(execOnRep_Energy); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_MaxHealth);


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPAttributeSet(); \
	friend struct Z_Construct_UClass_UBPAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UBPAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGASWrapper"), NO_API) \
	DECLARE_SERIALIZER(UBPAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		Health, \
		Energy, \
		MaxEnergy, \
		NETFIELD_REP_END=MaxEnergy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBPAttributeSet) \
public:


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBPAttributeSet(UBPAttributeSet&&); \
	UBPAttributeSet(const UBPAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPAttributeSet) \
	NO_API virtual ~UBPAttributeSet();


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_37_PROLOG
#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<class UBPAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_GameplayAbilityClassesWrapper_BPAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
