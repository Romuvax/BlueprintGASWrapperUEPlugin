// Copyright 2024 Howechamaaaa. All Rights Reserved.


#include "Core/Common/GSCGlobalSettings.h"
#include "GameplayCueManager.h"
#include "AbilitySystemGlobals.h"
#include "GameplayAbilitiesEditorModule.h"


UGSCGlobalSettings::UGSCGlobalSettings(const FObjectInitializer& ObjectInitializer)
{

	if (UAbilitySystemGlobals::Get().AbilitySystemGlobalsClassName.IsNull() || UAbilitySystemGlobals::Get().AbilitySystemGlobalsClassName == FSoftClassPath("/Script/GameplayAbilities.AbilitySystemGlobals"))
	{
		UAbilitySystemGlobals::Get().AbilitySystemGlobalsClassName = AbilitySystemGlobalName;
	}
	if (!UAbilitySystemGlobals::Get().AbilitySystemGlobalsClassName.IsNull())
	{
		//FSoftClassPath::UAbilitySystemGlobals::Get().GetGameplayCueManager() = LoadObject<UGameplayCueManager>(nullptr, *CueName.ToString(), nullptr, LOAD_None, nullptr);
	}
	
	if(GameplayCuePaths.Num() > 0)
	{
		for (auto GameplayCuePath : GameplayCuePaths)
		{
			for (auto GameplayCueNotifyPath : GameplayCueNotifyPaths)
			{
				if (GameplayCuePath != GameplayCueNotifyPath && !GameplayCueNotifyPaths.Find(GameplayCueNotifyPath))
				{
					GameplayCueNotifyPaths.Add(GameplayCuePath);
				}
			}
			
		}
	}

	
	IGameplayAbilitiesEditorModule::Get().GetGameplayCueNotifyPathDelegate().BindLambda([this](FString Path)
	{
	return FString::Printf(TEXT("%sGC_%s"), *this->GameplayCuePaths[0], *Path);
		
	});
}
