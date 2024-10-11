// Copyright 2024 Howechamaaaa. All Rights Reserved.

#include "BlueprintGASWrapper.h"

#include "AbilitySystemGlobals.h"
#include "ISettingsModule.h"
#include "LevelEditor.h"
#include "SourceCodeNavigation.h"
#include "WorkspaceMenuStructureModule.h"
#include "WorkspaceMenuStructure.h"
#include "Interfaces/IMainFrameModule.h"
#include "BlueprintGASWrapper/Public/UI/Widgets/SGSCNewAttributeSetClassDialog.h"
#include "Core/Common/GSCAttributesWizardCommands.h"
#include "Core/Common/GSCGlobalSettings.h"
#include "UI/Styling/GSCEditorStyle.h"
#include "ToolMenus.h"

DEFINE_LOG_CATEGORY(LogBlueprintGASWrapper);

#define LOCTEXT_NAMESPACE "FBlueprintGASWrapperModule"

void FBlueprintGASWrapperModule::StartupModule()
{
	InitializeStyles();
	RegisterCommands();
	
	//make new commands
	PluginCommands = MakeShareable(new FUICommandList);
	if (!IsRunningGame())
	{
		if (FSlateApplication::IsInitialized())
		{
			UToolMenus::RegisterStartupCallback(
				FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FBlueprintGASWrapperModule::RegisterMenus));
		}
	}

	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		
		SettingsModule->RegisterSettings(
			SettingsContainernName,
			SettingsCategoryName,
			SettingsSectionName,
			NSLOCTEXT("BlueprintGASWrapperModule", "SettingsName", "BlueprintGASWrapper"),
			NSLOCTEXT("BlueprintGASWrapperModule", "SettingsDescription", "Configure BlueprintGASWrapper plugin"),
			GetMutableDefault<UGSCGlobalSettings>()
		);
	}

	// GameplayCue editor
	const FSlateIcon GameplayCueIcon = FSlateIcon(FGSCEditorStyle::GetStyleSetName(), "BlueprintGASWrapperStyle.OpenPluginWindow");
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner( FName(TEXT("GameplayCueApp")), FOnSpawnTab::CreateRaw(this, &FBlueprintGASWrapperModule::SpawnGameplayCueEditorTab))
		.SetDisplayName(NSLOCTEXT("BlueprintGASWrapperModule", "GameplayCueTabTitle", "GameplayCue Editor"))
		.SetTooltipText(NSLOCTEXT("BlueprintGASWrapperModule", "GameplayCueTooltipText", "Open GameplayCue Editor tab."))
		.SetGroup(WorkspaceMenu::GetMenuStructure().GetToolsCategory())
		.SetIcon(GameplayCueIcon);

/*#if WITH_RELOAD
	// This code attempts to relaunch the GameplayCueEditor tab when you hotreload this module
	if (IsReloadActive() && FSlateApplication::IsInitialized())
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>( TEXT("LevelEditor") );
		TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
		LevelEditorTabManager->TryInvokeTab(FName("GameplayCueApp"));
	}
#endif // WITH_RELOAD*/

}

void FBlueprintGASWrapperModule::HandleNotify_OpenAssetInEditor(FString AssetName, int AssetType)
{
	//Open the GameplayCue editor if it hasn't been opened.
	if (AssetType == 0)
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
		TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
		LevelEditorTabManager->TryInvokeTab(FName("GameplayCueApp"));
	}

	//UE_LOG(LogTemp, Display, TEXT("HandleNotify_OpenAssetInEditor!!! %s %d"), *AssetName, AssetType);
	if (GameplayCueEditor.IsValid())
	{
		GameplayCueEditor.Pin()->HandleNotify_OpenAssetInEditor(AssetName, AssetType);
	}
}

void FBlueprintGASWrapperModule::HandleNotify_FindAssetInEditor(FString AssetName, int AssetType)
{
	//Find the GameplayCue editor if it hasn't been found.
	if (AssetType == 0)
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
		TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
		LevelEditorTabManager->TryInvokeTab(FName("GameplayCueApp"));
	}

	//UE_LOG(LogTemp, Display, TEXT("HandleNotify_FindAssetInEditor!!! %s %d"), *AssetName, AssetType);
	if (GameplayCueEditor.IsValid())
	{
		GameplayCueEditor.Pin()->HandleNotify_FindAssetInEditor(AssetName, AssetType);
	}
}

void FBlueprintGASWrapperModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);

	if (FSlateApplication::IsInitialized())
	{
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner( FName(TEXT("GameplayCueApp")) );

		if (GameplayCueEditorTab.IsValid())
		{
			GameplayCueEditorTab.Pin()->RequestCloseTab();
		}
	}

	ShutdownStyle();
	UnregisterCommands();
}

void FBlueprintGASWrapperModule::RegisterCommands()
{
	FGSCAttributesWizardCommands::Register();
}

void FBlueprintGASWrapperModule::UnregisterCommands()
{
	FGSCAttributesWizardCommands::Unregister();
}

void FBlueprintGASWrapperModule::InitializeStyles()
{
	FGSCEditorStyle::Initialize();
	FGSCEditorStyle::ReloadTextures();
}

void FBlueprintGASWrapperModule::ShutdownStyle()
{
	FGSCEditorStyle::Shutdown();
}

TSharedRef<SDockTab> FBlueprintGASWrapperModule::SpawnGameplayCueEditorTab(const FSpawnTabArgs& Args)
{
	return SAssignNew(GameplayCueEditorTab, SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SummonGameplayCueEditorUI().ToSharedRef()
		];
}


TSharedPtr<SWidget> FBlueprintGASWrapperModule::SummonGameplayCueEditorUI()
{
	TSharedPtr<SWidget> ReturnWidget;
	if( IsInGameThread() )
	{
		TSharedPtr<SPGameplayCueEditor> SharedPtr = SNew(SPGameplayCueEditor);
		ReturnWidget = SharedPtr;
		GameplayCueEditor = SharedPtr;
	}
	return ReturnWidget;

}

TSharedRef<SWidget> FBlueprintGASWrapperModule::GenerateMenu(TSharedRef<FUICommandList> CommandList)
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	const TSharedPtr<FExtender> MenuExtender = LevelEditorModule.AssembleExtenders(CommandList, LevelEditorModule.GetAllLevelEditorToolbarViewMenuExtenders());

	const FToolMenuContext MenuContext(CommandList, MenuExtender);
	return UToolMenus::Get()->GenerateWidget("LevelEditor.LevelEditorToolBar.BlueprintGASWrapper.Menu",MenuContext);
}

void FBlueprintGASWrapperModule::RegisterMenus()
{
	RegisterComboButton();
	FToolMenuOwnerScoped OwnerScoped(this);
#if ENGINE_MAJOR_VERSION < 5
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
	FToolMenuSection& Section = Menu->FindOrAddSection("BlueprintGASWrapper");
	const FSlateIcon Icon = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Play");
	const FText ShortIDEName = FSourceCodeNavigation::GetSelectedSourceCodeIDE();
	FToolMenuEntry Entry = FToolMenuEntry::InitComboButton(
		"BlueprintGASWrapper",
		FUIAction(),
		FOnGetContent::CreateStatic(&FBlueprintGASWrapperModule::GenerateMenu, PluginCommands.ToSharedRef()),
		LOCTEXT("AddAttributeSetClass", "New C++ AttributeSet Class"),
		FText::Format(LOCTEXT("AddAttributeSetClassTooltip", "Adds C++ AttributeSet code to the project. The code can only be compiled if you have {0} installed."), ShortIDEName),
		Icon,
		false
	);
	
	Section.AddEntry(Entry);
#else
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
	FToolMenuSection& Section = Menu->FindOrAddSection("BlueprintGASWrapper");

	const FText ShortIDEName = FSourceCodeNavigation::GetSelectedSourceCodeIDE();
	FToolMenuEntry Entry = FToolMenuEntry::InitComboButton(
		"BlueprintGASWrapper",
		FUIAction(),
		FOnGetContent::CreateStatic(&FBlueprintGASWrapperModule::GenerateMenu, PluginCommands.ToSharedRef()),
		LOCTEXT("AddAttributeSetClass", "New C++ AttributeSet Class"),
		FText::Format(LOCTEXT("AddAttributeSetClassTooltip", "Adds C++ AttributeSet code to the project. The code can only be compiled if you have {0} installed."), ShortIDEName),
		FSlateIcon(),
		false
	);
	Entry.StyleNameOverride = "CalloutToolbar";
	Section.AddEntry(Entry);
#endif // ENGINE_MAJOR_VERSION < 5
}

void FBlueprintGASWrapperModule::RegisterComboButton()
{
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.BlueprintGASWrapper.Menu");
	FToolMenuSection& Section = Menu->FindOrAddSection("BlueprintGASWrapper");
	const FSlateIcon Icon = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Play");
	UE_LOG(LogTemp, Display, TEXT("Registering ComboButton"));
	Section.AddMenuEntry(
		"GASNewAttributeSetClass",
		LOCTEXT("NewAttributeSetClass_Label", "New C++ AttributeSet Class..."),
		LOCTEXT("NewAttributeSetClass_ToolTip", "Adds C++ AttributeSet code to the project. The code can only be compiled if you have an IDE installed."),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateStatic(&OpenClassWizard))
	);
}

void FBlueprintGASWrapperModule::OpenAddToProjectDialog(const FAddToProjectConfig& Config)
{
	// If we've been given a class then we only show the second page of the dialog, so we can make the window smaller as that page doesn't have as much content
	const FVector2D WindowSize = FVector2D(940, 720);

	FText WindowTitle = Config._WindowTitle;
	if (WindowTitle.IsEmpty())
	{
		WindowTitle = LOCTEXT("AddCodeWindowHeader_Native", "Add AttributeSet C++ Class");
	}

	TSharedRef<SWindow> AddCodeWindow =
		SNew(SWindow)
		.Title(WindowTitle)
		.ClientSize(WindowSize)
		.SizingRule(ESizingRule::UserSized)
		.MinWidth(WindowSize.X)
		.MinHeight(WindowSize.Y)
		.SupportsMinimize(false)
		.SupportsMaximize(true);

	const TSharedRef<SGSCNewAttributeSetClassDialog> NewClassDialog =
		SNew(SGSCNewAttributeSetClassDialog)
		.ParentWindow(AddCodeWindow)
		.InitialPath(Config._InitialPath)
		.OnAddedToProject(Config._OnAddedToProject)
		.DefaultClassPrefix(Config._DefaultClassPrefix)
		.DefaultClassName(Config._DefaultClassName);

	AddCodeWindow->SetContent(NewClassDialog);

	TSharedPtr<SWindow> ParentWindow = Config._ParentWindow;
	if (!ParentWindow.IsValid())
	{
		static const FName MainFrameModuleName = "MainFrame";
		IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(MainFrameModuleName);
		ParentWindow = MainFrameModule.GetParentWindow();
	}

	if (Config._bModal)
	{
		FSlateApplication::Get().AddModalWindow(AddCodeWindow, ParentWindow);
	}
	else if (ParentWindow.IsValid())
	{
		FSlateApplication::Get().AddWindowAsNativeChild(AddCodeWindow, ParentWindow.ToSharedRef());
	}
	else
	{
		FSlateApplication::Get().AddWindow(AddCodeWindow);
	}
}

void FBlueprintGASWrapperModule::OpenClassWizard()
{
	OpenAddToProjectDialog();
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlueprintGASWrapperModule, BlueprintGASWrapper)