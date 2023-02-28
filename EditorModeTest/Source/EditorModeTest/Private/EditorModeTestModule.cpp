// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorModeTestModule.h"
#include "EditorModeRegistry.h"
#include "EditorModeTestEditorMode.h"

#define LOCTEXT_NAMESPACE "EditorModeTestModule"

void FEditorModeTestModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FEditorModeRegistry::Get().RegisterMode<UEditorModeTestEditorMode>(UEditorModeTestEditorMode::EM_EditorModeTestEditorModeId,LOCTEXT("EditorModeTestEdModeName", "ditorModeTestModule"),FSlateIcon(), true);

}

void FEditorModeTestModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
	FEditorModeRegistry::Get().UnregisterMode(UEditorModeTestEditorMode::EM_EditorModeTestEditorModeId);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEditorModeTestModule, EditorModeTestModule)