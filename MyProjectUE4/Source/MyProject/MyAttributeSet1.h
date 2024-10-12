// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Attributes/GSCAttributeSetBase.h"
#include "AbilitySystemComponent.h"
#include "MyAttributeSet1.generated.h"

UCLASS()
class MYPROJECT_API UMyAttributeSet1 : public UGSCAttributeSetBase
{
	GENERATED_BODY()

public:

	// Sets default values for this AttributeSet attributes
	UMyAttributeSet1();

    // AttributeSet Overrides
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
        
    UPROPERTY(BlueprintReadOnly, Category = "", ReplicatedUsing = OnRep_po)
    FGameplayAttributeData po = 0.0;
    ATTRIBUTE_ACCESSORS(UMyAttributeSet1, po)    

protected:
    
    UFUNCTION()
    virtual void OnRep_po(const FGameplayAttributeData& Oldpo);
	
	
};
