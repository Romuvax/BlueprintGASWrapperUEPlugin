// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GameplayAbilitySpec.h"
#include "EnhancedInputConfig.h"
#include "TaggedEnhancedInputComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BLUEPRINTGASWRAPPER_API UTaggedEnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTaggedEnhancedInputComponent();

	template<class TUserClass, class TFuncType>
	void BindActionByTag(const UEnhancedInputConfig* InputConfig,
		FGameplayTag InputTag,
		ETriggerEvent TriggerEvent,
		TUserClass* Object,
		TFuncType Func)
	{
		check(InputConfig);
		const auto* InputAction = InputConfig->FindInputActionByTag(InputTag);

		BindAction(InputAction, TriggerEvent, Object, Func);
	}
	template<class TUserClass, typename PressFuncType, typename ReleaseFuncType>
	void BindAbilityByTag(const UEnhancedInputConfig* InputConfig,
		TUserClass Object,
		PressFuncType PressFunc,
		ReleaseFuncType ReleaseFunc,
		TArray<uint32>& BindHandles)
	{
		check(InputConfig)
		for (const auto IA : InputConfig->AbilityInputAction)
		{
			if (IA.Input && IA.InputTag.IsValid())
			{
				if (PressFunc)
				{
					BindHandles.Add(BindAction(IA.Input, ETriggerEvent::Triggered, Object, PressFunc, IA.InputTag).GetHandle());
				}
				if(ReleaseFunc)
				{
					BindHandles.Add(BindAction(IA.Input, ETriggerEvent::Completed, Object, ReleaseFunc, IA.InputTag).GetHandle());
				}
			}
		}
	}
	
	template<class TUserClass, typename PressType, typename ReleaseType>
	void BindAbilityAction(const UEnhancedInputConfig* InputConfig,
		TUserClass Object,
		PressType Press,
		ReleaseType Release)
	{
		for(auto IA : InputConfig->AbilityInputAction)
		{
			if(IA.Input)
			{
				if (Press)
				{
					BindAction(IA.Input, ETriggerEvent::Triggered, Object, Press);
				}
				if (Release)
				{
					BindAction(IA.Input, ETriggerEvent::Completed, Object, Release);
				}
			}
		}
	}
};
