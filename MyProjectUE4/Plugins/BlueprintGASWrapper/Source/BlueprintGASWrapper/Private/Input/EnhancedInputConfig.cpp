// Copyright 2024 Howechamaaaa. All Rights Reserved.


#include "Input/EnhancedInputConfig.h"

UEnhancedInputConfig::UEnhancedInputConfig()
{
	
}

const UInputAction* UEnhancedInputConfig::FindInputActionByTag(FGameplayTag Tag) const
{
	for(const auto& Input : EnhancedInputAction)
	{
		if (Input.Input && Input.InputTag == Tag)
		{
			return Input.Input;
		}
	}

	return nullptr;
}

const UInputAction* UEnhancedInputConfig::FindAbilityInputActionByTag(FGameplayTag Tag) const
{
	for(const auto& Input : AbilityInputAction)
	{
		if (Input.Input && Input.InputTag == Tag)
		{
			return Input.Input;
		}
	}

	return nullptr;
}
