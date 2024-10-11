// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "BPGameplayAbility.generated.h"

UENUM(BlueprintType)
enum class EEnhancedActivationPolicy : uint8
{
	OnInputTriggered,
	WhileInputActive
};

/**
 * 
 */
UCLASS()
class BLUEPRINTGASWRAPPER_API UBPGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	EEnhancedActivationPolicy GetActivationPolicy() const {return ActivationPolicy;};

protected:
	UPROPERTY(EditDefaultsOnly, Category=ActivationPolicy)
	EEnhancedActivationPolicy ActivationPolicy;
};
