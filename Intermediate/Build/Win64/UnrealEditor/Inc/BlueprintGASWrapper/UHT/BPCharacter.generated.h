// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;
#ifdef BLUEPRINTGASWRAPPER_BPCharacter_generated_h
#error "BPCharacter.generated.h already included, missing '#pragma once' in BPCharacter.h"
#endif
#define BLUEPRINTGASWRAPPER_BPCharacter_generated_h

#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupPlayerInputComponent_Implementation(UInputComponent* PlayerInputComponent); \
	DECLARE_FUNCTION(execSetupPlayerInputComponent);


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABPCharacter(); \
	friend struct Z_Construct_UClass_ABPCharacter_Statics; \
public: \
	DECLARE_CLASS(ABPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGASWrapper"), NO_API) \
	DECLARE_SERIALIZER(ABPCharacter)


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABPCharacter(ABPCharacter&&); \
	ABPCharacter(const ABPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABPCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABPCharacter) \
	NO_API virtual ~ABPCharacter();


#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_10_PROLOG
#define FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<class ABPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UEP5_4_ProjectNothing_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_BPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
