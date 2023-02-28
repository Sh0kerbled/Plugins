// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorModeTest/Private/Tools/EditorModeTestInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorModeTestInteractiveTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestInteractiveTool();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestInteractiveTool_NoRegister();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_NoRegister();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolProperties();
	EDITORMODETEST_API UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_EditorModeTest();
// End Cross Module References
	void UEditorModeTestInteractiveToolBuilder::StaticRegisterNativesUEditorModeTestInteractiveToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModeTestInteractiveToolBuilder);
	UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_NoRegister()
	{
		return UEditorModeTestInteractiveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorModeTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UEditorModeTestInteractiveTool\n */" },
		{ "IncludePath", "Tools/EditorModeTestInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestInteractiveTool.h" },
		{ "ToolTip", "Builder for UEditorModeTestInteractiveTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeTestInteractiveToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics::ClassParams = {
		&UEditorModeTestInteractiveToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditorModeTestInteractiveToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModeTestInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModeTestInteractiveToolBuilder.OuterSingleton;
	}
	template<> EDITORMODETEST_API UClass* StaticClass<UEditorModeTestInteractiveToolBuilder>()
	{
		return UEditorModeTestInteractiveToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeTestInteractiveToolBuilder);
	UEditorModeTestInteractiveToolBuilder::~UEditorModeTestInteractiveToolBuilder() {}
	void UEditorModeTestInteractiveToolProperties::StaticRegisterNativesUEditorModeTestInteractiveToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModeTestInteractiveToolProperties);
	UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_NoRegister()
	{
		return UEditorModeTestInteractiveToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorModeTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property set for the UEditorModeTestInteractiveTool\n */" },
		{ "IncludePath", "Tools/EditorModeTestInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestInteractiveTool.h" },
		{ "ToolTip", "Property set for the UEditorModeTestInteractiveTool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** First point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestInteractiveTool.h" },
		{ "ToolTip", "First point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorModeTestInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Second point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestInteractiveTool.h" },
		{ "ToolTip", "Second point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorModeTestInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Current distance measurement */" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestInteractiveTool.h" },
		{ "ToolTip", "Current distance measurement" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorModeTestInteractiveToolProperties, Distance), METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeTestInteractiveToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::ClassParams = {
		&UEditorModeTestInteractiveToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeTestInteractiveToolProperties()
	{
		if (!Z_Registration_Info_UClass_UEditorModeTestInteractiveToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModeTestInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModeTestInteractiveToolProperties.OuterSingleton;
	}
	template<> EDITORMODETEST_API UClass* StaticClass<UEditorModeTestInteractiveToolProperties>()
	{
		return UEditorModeTestInteractiveToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeTestInteractiveToolProperties);
	UEditorModeTestInteractiveToolProperties::~UEditorModeTestInteractiveToolProperties() {}
	void UEditorModeTestInteractiveTool::StaticRegisterNativesUEditorModeTestInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModeTestInteractiveTool);
	UClass* Z_Construct_UClass_UEditorModeTestInteractiveTool_NoRegister()
	{
		return UEditorModeTestInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics
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
	UObject* (*const Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorModeTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorModeTestInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
		{ "IncludePath", "Tools/EditorModeTestInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestInteractiveTool.h" },
		{ "ToolTip", "UEditorModeTestInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "/** Properties of the tool are stored here */" },
		{ "ModuleRelativePath", "Private/Tools/EditorModeTestInteractiveTool.h" },
		{ "ToolTip", "Properties of the tool are stored here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorModeTestInteractiveTool, Properties), Z_Construct_UClass_UEditorModeTestInteractiveToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeTestInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::ClassParams = {
		&UEditorModeTestInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeTestInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UEditorModeTestInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModeTestInteractiveTool.OuterSingleton, Z_Construct_UClass_UEditorModeTestInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModeTestInteractiveTool.OuterSingleton;
	}
	template<> EDITORMODETEST_API UClass* StaticClass<UEditorModeTestInteractiveTool>()
	{
		return UEditorModeTestInteractiveTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeTestInteractiveTool);
	UEditorModeTestInteractiveTool::~UEditorModeTestInteractiveTool() {}
	struct Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestInteractiveTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestInteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorModeTestInteractiveToolBuilder, UEditorModeTestInteractiveToolBuilder::StaticClass, TEXT("UEditorModeTestInteractiveToolBuilder"), &Z_Registration_Info_UClass_UEditorModeTestInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModeTestInteractiveToolBuilder), 1288993070U) },
		{ Z_Construct_UClass_UEditorModeTestInteractiveToolProperties, UEditorModeTestInteractiveToolProperties::StaticClass, TEXT("UEditorModeTestInteractiveToolProperties"), &Z_Registration_Info_UClass_UEditorModeTestInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModeTestInteractiveToolProperties), 4028620433U) },
		{ Z_Construct_UClass_UEditorModeTestInteractiveTool, UEditorModeTestInteractiveTool::StaticClass, TEXT("UEditorModeTestInteractiveTool"), &Z_Registration_Info_UClass_UEditorModeTestInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModeTestInteractiveTool), 2186002620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestInteractiveTool_h_489654417(TEXT("/Script/EditorModeTest"),
		Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_Plugins_EditorModeTest_Source_EditorModeTest_Private_Tools_EditorModeTestInteractiveTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
