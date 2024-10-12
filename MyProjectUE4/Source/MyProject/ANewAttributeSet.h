// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Attributes/GSCAttributeSetBase.h"
#include "AbilitySystemComponent.h"
#include "ANewAttributeSet.generated.h"

UCLASS()
class MYPROJECT_API UANewAttributeSet : public UGSCAttributeSetBase
{
	GENERATED_BODY()

public:

	// Sets default values for this AttributeSet attributes
	UANewAttributeSet();

    // AttributeSet Overrides
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
        
    UPROPERTY(BlueprintReadOnly, Category = "Go", ReplicatedUsing = OnRep_Popepo)
    FGameplayAttributeData Popepo = 200.0;
    ATTRIBUTE_ACCESSORS(UANewAttributeSet, Popepo)    

protected:
    
    UFUNCTION()
    virtual void OnRep_Popepo(const FGameplayAttributeData& OldPopepo);
	
	
};
