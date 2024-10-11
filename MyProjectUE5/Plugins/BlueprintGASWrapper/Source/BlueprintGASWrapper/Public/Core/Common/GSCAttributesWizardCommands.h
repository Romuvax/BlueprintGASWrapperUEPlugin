// Copyright 2024 Howechamaaaa. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "UI/Styling/GSCEditorStyle.h"

class FGSCAttributesWizardCommands : public TCommands<FGSCAttributesWizardCommands>
{
public:

	FGSCAttributesWizardCommands() : TCommands<FGSCAttributesWizardCommands>
	(
		TEXT("BLUEPRINTGASWRAPPER"),
		NSLOCTEXT("Contexts", "BlueprintGASWrapper", "BlueprintGASWrapper Plugin"),
		NAME_None,
		FGSCEditorStyle::GetStyleSetName()
	)
	{}

	TSharedPtr< FUICommandInfo > OpenPluginWindow;

	// TCommands<> interface
	virtual void RegisterCommands() override;
};
