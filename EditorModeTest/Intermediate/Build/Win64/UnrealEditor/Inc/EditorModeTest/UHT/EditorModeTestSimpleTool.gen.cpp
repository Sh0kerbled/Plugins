// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorModeTest/Private/Tools/EditorModeTestSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorModeTestSimpleTool() {}
// Cross Module References
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestSimpleTool();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestSimpleTool_NoRegister();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestSimpleToolBuilder();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_NoRegister();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestSimpleToolProperties();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestSimpleToolProperties_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	UPackage* Z_Construct_UPackage__Script_EditorModeTest();
// End Cross Module References
	void UEditorModeTestSimpleToolBuilder::StaticRegisterNativesUEditorModeTestSimpleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModeTestSimpleToolBuilder);
	UClass* Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_NoRegister()
	{
		return UEditorModeTestSimpleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorModeTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UEditorModeTestSimpleTool\n */" },
		{ "IncludePath", "Tools/EditorModeTestSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestSimpleTool.h" },
		{ "ToolTip", "Builder for UEditorModeTestSimpleTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeTestSimpleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics::ClassParams = {
		&UEditorModeTestSimpleToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeTestSimpleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditorModeTestSimpleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModeTestSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UEditorModeTestSimpleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModeTestSimpleToolBuilder.OuterSingleton;
	}
	template<> EDITORMODETEST_API UClass* StaticClass<UEditorModeTestSimpleToolBuilder>()
	{
		return UEditorModeTestSimpleToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeTestSimpleToolBuilder);
	UEditorModeTestSimpleToolBuilder::~UEditorModeTestSimpleToolBuilder() {}
	void UEditorModeTestSimpleToolProperties::StaticRegisterNativesUEditorModeTestSimpleToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModeTestSimpleToolProperties);
	UClass* Z_Construct_UClass_UEditorModeTestSimpleToolProperties_NoRegister()
	{
		return UEditorModeTestSimpleToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[];
#endif
		static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorModeTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UEditorModeTestSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
		{ "IncludePath", "Tools/EditorModeTestSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestSimpleTool.h" },
		{ "ToolTip", "Settings UObject for UEditorModeTestSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestSimpleTool.h" },
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
	};
#endif
	void Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
	{
		((UEditorModeTestSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorModeTestSimpleToolProperties), &Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeTestSimpleToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::ClassParams = {
		&UEditorModeTestSimpleToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeTestSimpleToolProperties()
	{
		if (!Z_Registration_Info_UClass_UEditorModeTestSimpleToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModeTestSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UEditorModeTestSimpleToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModeTestSimpleToolProperties.OuterSingleton;
	}
	template<> EDITORMODETEST_API UClass* StaticClass<UEditorModeTestSimpleToolProperties>()
	{
		return UEditorModeTestSimpleToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeTestSimpleToolProperties);
	UEditorModeTestSimpleToolProperties::~UEditorModeTestSimpleToolProperties() {}
	void UEditorModeTestSimpleTool::StaticRegisterNativesUEditorModeTestSimpleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModeTestSimpleTool);
	UClass* Z_Construct_UClass_UEditorModeTestSimpleTool_NoRegister()
	{
		return UEditorModeTestSimpleTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeTestSimpleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorModeTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorModeTestSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
		{ "IncludePath", "Tools/EditorModeTestSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestSimpleTool.h" },
		{ "ToolTip", "UEditorModeTestSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestSimpleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorModeTestSimpleTool, Properties), Z_Construct_UClass_UEditorModeTestSimpleToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeTestSimpleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::ClassParams = {
		&UEditorModeTestSimpleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeTestSimpleTool()
	{
		if (!Z_Registration_Info_UClass_UEditorModeTestSimpleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModeTestSimpleTool.OuterSingleton, Z_Construct_UClass_UEditorModeTestSimpleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModeTestSimpleTool.OuterSingleton;
	}
	template<> EDITORMODETEST_API UClass* StaticClass<UEditorModeTestSimpleTool>()
	{
		return UEditorModeTestSimpleTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeTestSimpleTool);
	UEditorModeTestSimpleTool::~UEditorModeTestSimpleTool() {}
	struct Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestSimpleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestSimpleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorModeTestSimpleToolBuilder, UEditorModeTestSimpleToolBuilder::StaticClass, TEXT("UEditorModeTestSimpleToolBuilder"), &Z_Registration_Info_UClass_UEditorModeTestSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModeTestSimpleToolBuilder), 143529494U) },
		{ Z_Construct_UClass_UEditorModeTestSimpleToolProperties, UEditorModeTestSimpleToolProperties::StaticClass, TEXT("UEditorModeTestSimpleToolProperties"), &Z_Registration_Info_UClass_UEditorModeTestSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModeTestSimpleToolProperties), 758704908U) },
		{ Z_Construct_UClass_UEditorModeTestSimpleTool, UEditorModeTestSimpleTool::StaticClass, TEXT("UEditorModeTestSimpleTool"), &Z_Registration_Info_UClass_UEditorModeTestSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModeTestSimpleTool), 3753234637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestSimpleTool_h_2272111344(TEXT("/Script/EditorModeTest"),
		Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestSimpleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
