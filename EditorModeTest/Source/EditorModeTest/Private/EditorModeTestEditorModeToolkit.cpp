// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorModeTestEditorModeToolkit.h"
#include "EditorModeTestEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "EditorModeTestEditorModeToolkit"

FEditorModeTestEditorModeToolkit::FEditorModeTestEditorModeToolkit()
{
}

void FEditorModeTestEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FEditorModeTestEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FEditorModeTestEditorModeToolkit::GetToolkitFName() const
{
	return FName("EditorModeTestEditorMode");
}

FText FEditorModeTestEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "EditorModeTestEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
