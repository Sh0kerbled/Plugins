// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorModeTest/Public/EditorModeTestEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorModeTestEditorMode() {}
// Cross Module References
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestEditorMode();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_EditorModeTest();
// End Cross Module References
	void UEditorModeTestEditorMode::StaticRegisterNativesUEditorModeTestEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModeTestEditorMode);
	UClass* Z_Construct_UClass_UEditorModeTestEditorMode_NoRegister()
	{
		return UEditorModeTestEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeTestEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeTestEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorModeTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
		{ "IncludePath", "EditorModeTestEditorMode.h" },
		{ "ModuleRelativePath", "Public/EditorModeTestEditorMode.h" },
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeTestEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeTestEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeTestEditorMode_Statics::ClassParams = {
		&UEditorModeTestEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeTestEditorMode()
	{
		if (!Z_Registration_Info_UClass_UEditorModeTestEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModeTestEditorMode.OuterSingleton, Z_Construct_UClass_UEditorModeTestEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModeTestEditorMode.OuterSingleton;
	}
	template<> EDITORMODETEST_API UClass* StaticClass<UEditorModeTestEditorMode>()
	{
		return UEditorModeTestEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeTestEditorMode);
	struct Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Public_EditorModeTestEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Public_EditorModeTestEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorModeTestEditorMode, UEditorModeTestEditorMode::StaticClass, TEXT("UEditorModeTestEditorMode"), &Z_Registration_Info_UClass_UEditorModeTestEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModeTestEditorMode), 1344592940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Public_EditorModeTestEditorMode_h_2536770216(TEXT("/Script/EditorModeTest"),
		Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Public_EditorModeTestEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Public_EditorModeTestEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
