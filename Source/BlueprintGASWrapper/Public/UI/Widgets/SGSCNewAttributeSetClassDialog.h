// Copyright 2024 Howechamaaaa. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameProjectUtils.h"
#include "Attributes/GSCAttributeSetBase.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SComboBox.h"

class SWizard;
class SEditableTextBox;

/**
 * Main Slate Widget for creating new AttributeSet class
 *
 * Most of its code comes from SNewClassDialog
 */
class BLUEPRINTGASWRAPPER_API SGSCNewAttributeSetClassDialog : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SGSCNewAttributeSetClassDialog)
	{}

	/** A reference to the parent window */
	SLATE_ARGUMENT(TSharedPtr<SWindow>, ParentWindow)

	/** The initial path to use as the destination for the new class. If this is not specified, we will work out a suitable default from the available project modules */
	SLATE_ARGUMENT(FString, InitialPath)

	/** The prefix to put on new classes by default, if the user doesn't type in a new name.  Defaults to 'My'. */
	SLATE_ARGUMENT(FString, DefaultClassPrefix)

	/** If non-empty, overrides the default name of the class, when the user doesn't type a new name.  Defaults to empty, which causes the
	    name to be the inherited class name.  Note that DefaultClassPrefix is still prepended to this name, if non-empty. */
	SLATE_ARGUMENT(FString, DefaultClassName)

	/** Event called when code is successfully added to the project */
	SLATE_EVENT(FOnAddedToProject, OnAddedToProject)

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

private:

	/** The wizard widget */
	TSharedPtr<SWizard> MainWizard;

	/** The last time that the class name/path was checked for validity. This is used to throttle I/O requests to a reasonable frequency */
	double LastPeriodicValidityCheckTime = 0;

	/** The frequency in seconds for validity checks while the dialog is idle. Changes to the name/path immediately update the validity. */
	double PeriodicValidityCheckFrequency = 1;

	/** Periodic checks for validity will not occur while this flag is true. Used to prevent a frame of "this project already exists" while exiting after a successful creation. */
	bool bPreventPeriodicValidityChecksUntilNextChange = false;

	/** Default size for text boxes */
	float EditableTextHeight = 26.f;

	/** True if the last validity check returned that the class name/path is valid for creation */
	bool bLastInputValidityCheckSuccessful = true;

	/** The selected parent class */
	FNewClassInfo ParentClassInfo = FNewClassInfo(UGSCAttributeSetBase::StaticClass());

	/** The last selected module name. Meant to keep the same module selected after first selection */
	static FString LastSelectedModuleName;

	/** The prefix to put on new classes by default, if the user doesn't type in a new name. Defaults to 'My'. */
	FString DefaultClassPrefix;

	/** If non-empty, overrides the default name of the class, when the user doesn't type a new name.  Defaults to empty, which causes the
	name to be the inherited class name. Note that DefaultClassPrefix is still prepended to this name, if non-empty. */
	FString DefaultClassName = FString("AttributeSet");

	/** The path to place the files for the class being generated */
	FString NewClassPath;

	/** The calculated name of the generated header file for this class */
	FString CalculatedClassHeaderName;

	/** The calculated name of the generated source file for this class */
	FString CalculatedClassSourceName;

	/** The name of the last class that was auto-generated by this wizard */
	FString LastAutoGeneratedClassName;

	/** The error text from the last validity check */
	FText LastInputValidityErrorText;

	/** The name of the class being created */
	FString NewClassName;

	/** Information about the currently selected module; used for class validation */
	TSharedPtr<FModuleContextInfo> SelectedModuleInfo;

	/** Information about the currently available modules for this project */
	TArray<TSharedPtr<FModuleContextInfo>> AvailableModules;

	/** Whether the class should be created as a Public or Private class */
	GameProjectUtils::EClassLocation ClassLocation = GameProjectUtils::EClassLocation::UserDefined;

	/** The editable text box to enter the current name */
	TSharedPtr<SEditableTextBox> ClassNameEditBox;

	/** The available modules combo box */
	TSharedPtr<SComboBox<TSharedPtr<FModuleContextInfo>>> AvailableModulesCombo;

	/** Checks the current class name/path for validity and updates cached values accordingly */
	void UpdateInputValidity();

	/** Handler for when cancel is clicked */
	void CancelClicked();

	/** Returns true if Finish is allowed */
	bool CanFinish() const;

	/** Handler for when finish is clicked */
	void FinishClicked();

	/** Handler for when the user enters the "class creation" page (first page) */
	void OnClassCreationPageEntered();

	/** On Wizard enter, calculate the potential class name, eg MyAttributeSet */
	void SetNewClassNameDefaultValue();

	/** Returns true if the specified class name is properly formed and does not conflict with another class */
	bool IsValidAttributeNameForCreation(const FString& NewAttributeName, FText& OutFailReason) const;

	/** Checks the name for illegal characters */
	static bool NameContainsOnlyLegalCharacters(const FString& TestName, FString& OutIllegalCharacters);

	/** Returns the text for the calculated header file name */
	FText OnGetClassHeaderFileText() const;

	/** Returns the text for the calculated source file name */
	FText OnGetClassSourceFileText() const;

	/** Returns the text in the class name edit box */
	FText OnGetClassNameText() const;

	/** Gets the visibility of the name error label */
	EVisibility GetNameErrorLabelVisibility() const;

	/** Gets the text to display in the name error label */
	FText GetNameErrorLabelText() const;

	/** Handler for when the text in the class name edit box has changed */
	void OnClassNameTextChanged(const FText& NewText);

	/** Returns the text in the class path edit box */
	FText OnGetClassPathText() const;

	/** Handler for when the text in the class path edit box has changed */
	void OnClassPathTextChanged(const FText& NewText);

	/** Get the combo box text for the currently selected module */
	FText GetSelectedModuleComboText() const;

	/** Called when the currently selected module is changed */
	void SelectedModuleComboBoxSelectionChanged(TSharedPtr<FModuleContextInfo> Value, ESelectInfo::Type SelectInfo);

	/** Create the widget to use as the combo box entry for the given module info */
	TSharedRef<SWidget> MakeWidgetForSelectedModuleCombo(TSharedPtr<FModuleContextInfo> Value);

	/** Get the text color to use for the given class location checkbox */
	FSlateColor GetClassLocationTextColor(GameProjectUtils::EClassLocation InLocation) const;

	/** Checks to see if the given class location is active based on the current value of NewClassPath */
	ECheckBoxState IsClassLocationActive(GameProjectUtils::EClassLocation InLocation) const;

	/** Update the value of NewClassPath so that it uses the given class location */
	void OnClassLocationChanged(ECheckBoxState InCheckedState, GameProjectUtils::EClassLocation InLocation);

	/** Get the C++ class name; this may or may not be prefixed, but will always produce a valid C++ name via GetClassPrefix() + GetClassName() */
	static FString GetClassNameCPP(FNewClassInfo::EClassType ClassType, const UClass* BaseClass);

	/** Closes the window that contains this widget */
	void CloseContainingWindow();

	/**
	 * Adds new source code to the project. When returning Succeeded or FailedToHotReload, OutSyncFileAndLineNumber
	 * will be the the preferred target file to sync in the users code editing IDE,
	 * formatted for use with GenericApplication::GotoLineInSource
	 */
	GameProjectUtils::EAddCodeToProjectResult AddClassToProject(FText& OutFailReason);

	/** Event called when code is successfully added to the project */
	FOnAddedToProject OnAddedToProject;

	EActiveTimerReturnType SetKeyboardFocus(double InCurrentTime, float InDeltaTime);
};
