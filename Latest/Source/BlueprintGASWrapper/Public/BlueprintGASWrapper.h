// Copyright 2024 Howechamaaaa. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AddToProjectConfig.h"
#include "Modules/ModuleManager.h"
#include "UI/Widgets/SGameplayCueEditor.h"

DECLARE_LOG_CATEGORY_EXTERN(LogBlueprintGASWrapper, Log, All);

class FBlueprintGASWrapperModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** Registers the BlueprintGASWrapper plugin's menu and combo button */
	static TSharedRef<SWidget> GenerateMenu(TSharedRef<FUICommandList> CommandList);
	void RegisterMenus();
	void RegisterComboButton();
	
	static void RegisterCommands();
	static void UnregisterCommands();
	static void InitializeStyles();
	static void ShutdownStyle();

	TSharedPtr<FUICommandList> PluginCommands;

	//Settings Names
	FName SettingsContainernName = FName(TEXT("Project"));
	FName SettingsCategoryName = FName(TEXT("Game"));
	FName SettingsSectionName = FName(TEXT("BlueprintGASWrapper"));
	FName SettingsDescriptionName = FName(TEXT("BlueprintGASWrapper"));

	//Code to open the AddToProject dialog
	static void OpenAddToProjectDialog(const FAddToProjectConfig& Config = FAddToProjectConfig());

	static void OpenClassWizard();

	TSharedRef<SDockTab> SpawnGameplayCueEditorTab(const FSpawnTabArgs& Args);
	TSharedPtr<SWidget> SummonGameplayCueEditorUI();

	TWeakPtr<SDockTab> GameplayCueEditorTab;

	TWeakPtr<SPGameplayCueEditor> GameplayCueEditor;

	void HandleNotify_OpenAssetInEditor(FString AssetName, int AssetType);
	void HandleNotify_FindAssetInEditor(FString AssetName, int AssetType);
};
