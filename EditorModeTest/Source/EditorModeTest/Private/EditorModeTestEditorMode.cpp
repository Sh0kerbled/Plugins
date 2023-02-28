// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorModeTestEditorMode.h"
#include "EditorModeTestEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "EditorModeTestEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/EditorModeTestSimpleTool.h"
#include "Tools/EditorModeTestInteractiveTool.h"

// step 2: register a ToolBuilder in FEditorModeTestEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "EditorModeTestEditorMode"

const FEditorModeID UEditorModeTestEditorMode::EM_EditorModeTestEditorModeId = TEXT("EM_EditorModeTestEditorMode");

FString UEditorModeTestEditorMode::SimpleToolName = TEXT("EditorModeTest_ActorInfoTool");
FString UEditorModeTestEditorMode::InteractiveToolName = TEXT("EditorModeTest_MeasureDistanceTool");


UEditorModeTestEditorMode::UEditorModeTestEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UEditorModeTestEditorMode::EM_EditorModeTestEditorModeId,
		LOCTEXT("ModeName", "EditorModeTest"),
		FSlateIcon(),
		true);
}


UEditorModeTestEditorMode::~UEditorModeTestEditorMode()
{
}


void UEditorModeTestEditorMode::ActorSelectionChangeNotify()
{
}

void UEditorModeTestEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FEditorModeTestEditorModeCommands& SampleToolCommands = FEditorModeTestEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UEditorModeTestSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UEditorModeTestInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UEditorModeTestEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FEditorModeTestEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UEditorModeTestEditorMode::GetModeCommands() const
{
	return FEditorModeTestEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
