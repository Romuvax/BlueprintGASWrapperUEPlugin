// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputAction.h"
#include "Engine/DataAsset.h"
#include "EnhancedInputConfig.generated.h"
USTRUCT(BlueprintType)
struct FTaggedEnhancedInputAction
{
    GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	UInputAction* Input = nullptr;
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputTag;
};

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew, meta=(DisplayName="Enhanced Input Config"))
class BLUEPRINTGASWRAPPER_API UEnhancedInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	UEnhancedInputConfig();
	
	UPROPERTY(EditDefaultsOnly, Category=Input)
	TArray<FTaggedEnhancedInputAction> EnhancedInputAction;

	UPROPERTY(EditDefaultsOnly, Category=Ability, meta=(AllowPrivateAccess))
	TArray<FTaggedEnhancedInputAction> AbilityInputAction;

public:
	const UInputAction* FindInputActionByTag(FGameplayTag Tag) const;

	const UInputAction* FindAbilityInputActionByTag(FGameplayTag Tag) const;
};
