// Copyright 2024 Howechamaaaa. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

#include "GSCAttributeSetBase.generated.h"


struct FGameplayTagContainer;

/** Structure holding various information to deal with AttributeSet PostGameplayEffectExecute, extracting info from FGameplayEffectModCallbackData */
USTRUCT()
struct FGSCAttributeSetExecutionData
{
	GENERATED_BODY()

	/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain) */
	UPROPERTY()
	AActor* SourceActor = nullptr;

	/** The physical representation of the owner (Avatar) for the target we intend to apply to  */
	UPROPERTY()
	AActor* TargetActor = nullptr;

	/** The ability system component of the instigator that started the whole chain */
	UPROPERTY()
	UAbilitySystemComponent* SourceASC = nullptr;

	/** PlayerController associated with the owning actor for the Source ASC (The ability system component of the instigator that started the whole chain) */
	UPROPERTY()
	APlayerController* SourceController = nullptr;

	/** PlayerController associated with the owning actor for the target we intend to apply to */
	UPROPERTY()
	APlayerController* TargetController = nullptr;

	/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain), as a APawn */
	UPROPERTY()
	APawn* SourcePawn = nullptr;

	/** The physical representation of the owner (Avatar) for the target we intend to apply to, as a APawn */
	UPROPERTY()
	APawn* TargetPawn = nullptr;

	/** The object this effect was created from. */
	UPROPERTY()
	UObject* SourceObject = nullptr;

	/** This tells us how we got here (who / what applied us) */
	FGameplayEffectContextHandle Context;

	/** Combination of spec and actor tags for the captured Source Tags on GameplayEffectSpec creation */
	FGameplayTagContainer SourceTags;

	/** All tags that apply to the gameplay effect spec */
	FGameplayTagContainer SpecAssetTags;

	/** Holds the delta value between old and new, if it is available (for Additive Operations) */
	float DeltaValue;
};

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Base AttributeSet Class to extend from.
 *
 * Does not hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:
 *
 * - AdjustAttributeForMaxChange()
 * - Clamp Values definition from Project Config
 */
UCLASS(Abstract)
class BLUEPRINTGASWRAPPER_API UGSCAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()

public:
	// Sets default values for this AttributeSet attributes
	UGSCAttributeSetBase();
	
};
