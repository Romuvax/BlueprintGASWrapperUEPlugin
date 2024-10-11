// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "BPAbilitySystemComponent.generated.h"

class UBPAttributeSet;

UCLASS(Blueprintable ,ClassGroup=(AbilitySystemWrapper), meta=(BlueprintSpawnableComponent))
class BLUEPRINTGASWRAPPER_API UBPAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBPAbilitySystemComponent(FObjectInitializer const& ObjectInitializer);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable, Category = "AbilitySystem")
	void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) override;

	void AbilityInputTagPressed(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);

	void ProcessAbilityInput(float DeltaTime, bool bGamePaused);
	void ClearAbilityInput();

protected:
	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;
	
	TArray<FGameplayAbilitySpecHandle> InputPressedSpecHandles;

	TArray<FGameplayAbilitySpecHandle> InputReleasedSpecHandles;

	TArray<FGameplayAbilitySpecHandle> InputHeldSpecHandles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
 	TSubclassOf<UBPAttributeSet> AttributeSetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	UBPAttributeSet* AttributeSet;
};
