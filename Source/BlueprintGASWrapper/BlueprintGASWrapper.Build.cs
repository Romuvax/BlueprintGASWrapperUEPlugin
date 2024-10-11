// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BlueprintGASWrapper : ModuleRules
{
	public BlueprintGASWrapper(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] 
			{
				// Main Public path
				"BlueprintGASWrapper/Public"
			});
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// Main Private path
				"BlueprintGASWrapper/Private"
			});
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"GameplayAbilities",
				"GameplayTasks",
				"GameplayTags",
				"EnhancedInput", 
				"GameProjectGeneration",
				"AppFramework",
				"ToolMenus",
				"Slate",
				"SlateCore",
				"InputCore",
				"EditorStyle",
				"UnrealEd",
				"LevelEditor",
				"Engine",
				"Projects",
				"EngineSettings",
				"GameplayAbilitiesEditor",
				"GameplayTagsEditor",
			});
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"GameplayAbilitiesEditor",
				"GameplayTagsEditor", 
				"WorkspaceMenuStructure",
				"MainFrame",
				"ToolMenus"
			});
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			});
	}
}
