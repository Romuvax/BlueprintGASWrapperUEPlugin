// Copyright 2024 Howechamaaaa. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Input/Reply.h"
#include "Widgets/SUserWidget.h"

/** Main Gameplay Cue Editor UI widget */
class SPGameplayCueEditor : public SUserWidget
{
public:

	SLATE_USER_ARGS(SPGameplayCueEditor) {}
	SLATE_END_ARGS()
	virtual void Construct(const FArguments& InArgs) = 0;

	virtual void OnNewGameplayCueTagCommited(const FString& TagName, const FString& TagComment, const FName& TagSource) = 0;

	virtual void OnSearchTagCommited(const FText& InText, ETextCommit::Type InCommitType) = 0;
	virtual void HandleNotify_OpenAssetInEditor(FString AssetName, int AssetType) = 0;
	virtual void HandleNotify_FindAssetInEditor(FString AssetName, int AssetType) = 0;
	
	static FString GetPathNameForGameplayCueTag(FString Tag);

	static void CreateNewGameplayCueNotifyDialogue(FString GameplayCue, UClass* ParentClass);
	static void OpenEditorForNotify(FString NotifyFullPath);

	template<typename T>
static void AddNotifyClass(TArray<UClass*>& NotifyClasses)
	{
		UClass* Class = T::StaticClass();  // Dynamically get the class type
		if (Class != nullptr)
		{
			NotifyClasses.Add(Class);  // Add to the array
		}
	}
};
