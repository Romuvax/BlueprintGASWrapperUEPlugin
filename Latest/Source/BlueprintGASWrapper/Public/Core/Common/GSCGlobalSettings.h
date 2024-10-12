// Copyright 2024 Howechamaaaa. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "UObject/Object.h"
#include "GSCGlobalSettings.generated.h"

/**
 * 
 */
UCLASS(Config=Game, defaultconfig, meta=(DisplayName="GSC Global Settings"))
class BLUEPRINTGASWRAPPER_API UGSCGlobalSettings : public UObject
{
	GENERATED_BODY()

public:
	UGSCGlobalSettings(const FObjectInitializer& ObjectInitializer);
	
	UPROPERTY(EditAnywhere, GlobalConfig, Category = "AGN", meta = (DisplayName = "Gameplay Ability System Globals Class", ToolTip = "Gameplay Ability System Globals Class to use for all actors in the game",MetaClass = "/Script/GameplayAbilities.AbilitySystemGlobals"))
	FSoftClassPath AbilitySystemGlobalName;
	UPROPERTY(EditAnywhere, GlobalConfig, Category = "GCN", meta = (DisplayName = "GameplayCue Notify Manager", ToolTip = "GameplayCue Notify Manager Class NOT USED AS OF NOW",MetaClass = "/Script/GameplayAbilities.GameplayCueManager"))
	FSoftClassPath CueName;
	UPROPERTY(EditAnywhere, GlobalConfig, Category = "GCN", meta = (Tooltip = "GameplayCue Notify Paths, Only the FIRST one is used by the CueEditor at the moment"))
	TArray<FString> GameplayCuePaths;
	TArray<FString> GameplayCueNotifyPaths = UAbilitySystemGlobals::Get().GetGameplayCueNotifyPaths();
	UPROPERTY(EditAnywhere, GlobalConfig, Category = "GCN", meta = (DisplayName = "GameplayCue Notify Classes", ToolTip = "GameplayCue Notify Classes to use for all actors in the game"/*MetaClass = "/Script/GameplayAbilities.GameplayCueNotify_Object"*/))
	TArray<FSoftClassPath> GameplayCueNotifyClasses;
};
