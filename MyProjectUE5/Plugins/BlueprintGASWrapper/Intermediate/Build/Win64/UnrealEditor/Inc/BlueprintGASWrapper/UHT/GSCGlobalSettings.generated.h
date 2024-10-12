// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Common/GSCGlobalSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGASWRAPPER_GSCGlobalSettings_generated_h
#error "GSCGlobalSettings.generated.h already included, missing '#pragma once' in GSCGlobalSettings.h"
#endif
#define BLUEPRINTGASWRAPPER_GSCGlobalSettings_generated_h

#define FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCGlobalSettings(); \
	friend struct Z_Construct_UClass_UGSCGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UGSCGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGASWrapper"), NO_API) \
	DECLARE_SERIALIZER(UGSCGlobalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSCGlobalSettings(UGSCGlobalSettings&&); \
	UGSCGlobalSettings(const UGSCGlobalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCGlobalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCGlobalSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCGlobalSettings) \
	NO_API virtual ~UGSCGlobalSettings();


#define FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_13_PROLOG
#define FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGASWRAPPER_API UClass* StaticClass<class UGSCGlobalSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlueprintGASWrapper_MyProjectUE5_Plugins_BlueprintGASWrapper_Source_BlueprintGASWrapper_Public_Core_Common_GSCGlobalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
