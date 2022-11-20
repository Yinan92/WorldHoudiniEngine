// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldHoudiniEngine/Public/WorldHoudiniEngineBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldHoudiniEngineBPLibrary() {}
// Cross Module References
	WORLDHOUDINIENGINE_API UClass* Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_NoRegister();
	WORLDHOUDINIENGINE_API UClass* Z_Construct_UClass_UWorldHoudiniEngineBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WorldHoudiniEngine();
	WORLDHOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCookOptions();
	WORLDHOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession();
// End Cross Module References
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execHoudiniSaveHIPFile)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL(Z_Param_bLockNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWorldHoudiniEngineBPLibrary::HoudiniSaveHIPFile(Z_Param_HoudiniSession,Z_Param_FilePath,Z_Param_bLockNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execHoudiniCookNode)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_STRUCT(FHoudiniCookOptions,Z_Param_HoudiniCookOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldHoudiniEngineBPLibrary::HoudiniCookNode(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_HoudiniCookOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execHoudiniCreateNode)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_OperatorName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParentNodeId);
		P_GET_UBOOL(Z_Param_bCookOnCreation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWorldHoudiniEngineBPLibrary::HoudiniCreateNode(Z_Param_HoudiniSession,Z_Param_OperatorName,Z_Param_Label,Z_Param_Out_NodeId,Z_Param_ParentNodeId,Z_Param_bCookOnCreation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execHoudiniGetAssetOperatorName)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetLibraryId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FullOpName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWorldHoudiniEngineBPLibrary::HoudiniGetAssetOperatorName(Z_Param_HoudiniSession,Z_Param_AssetLibraryId,Z_Param_Out_FullOpName,Z_Param_Out_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execHoudiniLoadAssetLibraryFromFile)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_otlFilePath);
		P_GET_UBOOL(Z_Param_bAllowOverwrite);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AssetLibraryId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWorldHoudiniEngineBPLibrary::HoudiniLoadAssetLibraryFromFile(Z_Param_HoudiniSession,Z_Param_otlFilePath,Z_Param_bAllowOverwrite,Z_Param_Out_AssetLibraryId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execHoudiniIsSessionValid)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWorldHoudiniEngineBPLibrary::HoudiniIsSessionValid(Z_Param_HoudiniSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execHoudiniInitialize)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_STRUCT_REF(FHoudiniCookOptions,Z_Param_Out_HoudiniCookOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWorldHoudiniEngineBPLibrary::HoudiniInitialize(Z_Param_HoudiniSession,Z_Param_Out_HoudiniCookOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execCreateHoudiniCookOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHoudiniCookOptions*)Z_Param__Result=UWorldHoudiniEngineBPLibrary::CreateHoudiniCookOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldHoudiniEngineBPLibrary::execStartServerAndCreateSession)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHoudiniSession*)Z_Param__Result=UWorldHoudiniEngineBPLibrary::StartServerAndCreateSession(Z_Param_HoudiniSession);
		P_NATIVE_END;
	}
	void UWorldHoudiniEngineBPLibrary::StaticRegisterNativesUWorldHoudiniEngineBPLibrary()
	{
		UClass* Class = UWorldHoudiniEngineBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHoudiniCookOptions", &UWorldHoudiniEngineBPLibrary::execCreateHoudiniCookOptions },
			{ "HoudiniCookNode", &UWorldHoudiniEngineBPLibrary::execHoudiniCookNode },
			{ "HoudiniCreateNode", &UWorldHoudiniEngineBPLibrary::execHoudiniCreateNode },
			{ "HoudiniGetAssetOperatorName", &UWorldHoudiniEngineBPLibrary::execHoudiniGetAssetOperatorName },
			{ "HoudiniInitialize", &UWorldHoudiniEngineBPLibrary::execHoudiniInitialize },
			{ "HoudiniIsSessionValid", &UWorldHoudiniEngineBPLibrary::execHoudiniIsSessionValid },
			{ "HoudiniLoadAssetLibraryFromFile", &UWorldHoudiniEngineBPLibrary::execHoudiniLoadAssetLibraryFromFile },
			{ "HoudiniSaveHIPFile", &UWorldHoudiniEngineBPLibrary::execHoudiniSaveHIPFile },
			{ "StartServerAndCreateSession", &UWorldHoudiniEngineBPLibrary::execStartServerAndCreateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventCreateHoudiniCookOptions_Parms
		{
			FHoudiniCookOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventCreateHoudiniCookOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoudiniCookOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Helpers" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Creats and initialize cook options." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "CreateHoudiniCookOptions", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventCreateHoudiniCookOptions_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventHoudiniCookNode_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			FHoudiniCookOptions HoudiniCookOptions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniCookOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCookNode_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCookNode_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniCookOptions = { "HoudiniCookOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCookNode_Parms, HoudiniCookOptions), Z_Construct_UScriptStruct_FHoudiniCookOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniCookOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Nodes" },
		{ "Comment", "//Initiate a cook on this node. Note that this may trigger cooks on other nodes if they are connected.\n" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Initiate a cook on this node. Note that this may trigger cooks on other nodes if they are connected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "HoudiniCookNode", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniCookNode_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms
		{
			FHoudiniSession HoudiniSession;
			FString OperatorName;
			FString Label;
			int32 NodeId;
			int32 ParentNodeId;
			bool bCookOnCreation;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperatorName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ParentNodeId;
		static void NewProp_bCookOnCreation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnCreation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_OperatorName = { "OperatorName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms, OperatorName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms, Label), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_ParentNodeId = { "ParentNodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms, ParentNodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms*)Obj)->bCookOnCreation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation = { "bCookOnCreation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_OperatorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_ParentNodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Nodes" },
		{ "Comment", "//Create a node inside a node network. Nodes created this way will have their HAPI_NodeInfo::createdPostAssetLoad set to true.\n" },
		{ "CPP_Default_bCookOnCreation", "false" },
		{ "CPP_Default_ParentNodeId", "-1" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Create a node inside a node network. Nodes created this way will have their HAPI_NodeInfo::createdPostAssetLoad set to true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "HoudiniCreateNode", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniCreateNode_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 AssetLibraryId;
			FString FullOpName;
			FString Label;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetLibraryId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullOpName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_AssetLibraryId = { "AssetLibraryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms, AssetLibraryId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_FullOpName = { "FullOpName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms, FullOpName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms, Label), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_AssetLibraryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_FullOpName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Assets" },
		{ "Comment", "//Get the names of the assets contained in an asset library.\n" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Get the names of the assets contained in an asset library." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "HoudiniGetAssetOperatorName", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniGetAssetOperatorName_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventHoudiniInitialize_Parms
		{
			FHoudiniSession HoudiniSession;
			FHoudiniCookOptions HoudiniCookOptions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniCookOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniCookOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniInitialize_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions = { "HoudiniCookOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniInitialize_Parms, HoudiniCookOptions), Z_Construct_UScriptStruct_FHoudiniCookOptions, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Session" },
		{ "Comment", "//Create the asset manager, set up environment variables, and initialize the main Houdini scene. No license check is done during this step. \n//Only when you try to load an asset library (OTL) do we actually check for licenses.\n" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Create the asset manager, set up environment variables, and initialize the main Houdini scene. No license check is done during this step.\nOnly when you try to load an asset library (OTL) do we actually check for licenses." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "HoudiniInitialize", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniInitialize_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventHoudiniIsSessionValid_Parms
		{
			FHoudiniSession HoudiniSession;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniIsSessionValid_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniIsSessionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniIsSessionValid_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Session" },
		{ "Comment", "//Checks whether the session identified by HAPI_Session::id is a valid session opened in the implementation identified by HAPI_Session::type.\n" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Checks whether the session identified by HAPI_Session::id is a valid session opened in the implementation identified by HAPI_Session::type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "HoudiniIsSessionValid", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniIsSessionValid_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms
		{
			FHoudiniSession HoudiniSession;
			FString otlFilePath;
			bool bAllowOverwrite;
			int32 AssetLibraryId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_otlFilePath;
		static void NewProp_bAllowOverwrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowOverwrite;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetLibraryId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_otlFilePath = { "otlFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms, otlFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverwrite_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms*)Obj)->bAllowOverwrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverwrite = { "bAllowOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverwrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_AssetLibraryId = { "AssetLibraryId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms, AssetLibraryId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_otlFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_AssetLibraryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Assets" },
		{ "Comment", "//Loads a Houdini asset library (OTL) from a .otl file. It does NOT create anything inside the Houdini scene.\n" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Loads a Houdini asset library (OTL) from a .otl file. It does NOT create anything inside the Houdini scene." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "HoudiniLoadAssetLibraryFromFile", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms
		{
			FHoudiniSession HoudiniSession;
			FString FilePath;
			bool bLockNode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bLockNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNode_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms*)Obj)->bLockNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNode = { "bLockNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms), &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | SaveHIPFiles" },
		{ "Comment", "//Saves a .hip file of the current Houdini scene.\n" },
		{ "CPP_Default_bLockNode", "false" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Saves a .hip file of the current Houdini scene." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "HoudiniSaveHIPFile", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventHoudiniSaveHIPFile_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics
	{
		struct WorldHoudiniEngineBPLibrary_eventStartServerAndCreateSession_Parms
		{
			FHoudiniSession HoudiniSession;
			FHoudiniSession ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventStartServerAndCreateSession_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldHoudiniEngineBPLibrary_eventStartServerAndCreateSession_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::NewProp_HoudiniSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldHoudiniBPLibrary | Session" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Creates a Thrift RPC session using a Windows named pipe or a Unix domain socket as transport." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, nullptr, "StartServerAndCreateSession", nullptr, nullptr, sizeof(WorldHoudiniEngineBPLibrary_eventStartServerAndCreateSession_Parms), Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_NoRegister()
	{
		return UWorldHoudiniEngineBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldHoudiniEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_CreateHoudiniCookOptions, "CreateHoudiniCookOptions" }, // 70622970
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCookNode, "HoudiniCookNode" }, // 1922585534
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniCreateNode, "HoudiniCreateNode" }, // 3848572855
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniGetAssetOperatorName, "HoudiniGetAssetOperatorName" }, // 2725711131
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniInitialize, "HoudiniInitialize" }, // 2052036195
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniIsSessionValid, "HoudiniIsSessionValid" }, // 241636065
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniLoadAssetLibraryFromFile, "HoudiniLoadAssetLibraryFromFile" }, // 2739879972
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_HoudiniSaveHIPFile, "HoudiniSaveHIPFile" }, // 3090297431
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession, "StartServerAndCreateSession" }, // 3677341485
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "WorldHoudiniEngineBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldHoudiniEngineBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::ClassParams = {
		&UWorldHoudiniEngineBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldHoudiniEngineBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldHoudiniEngineBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldHoudiniEngineBPLibrary, 1390287554);
	template<> WORLDHOUDINIENGINE_API UClass* StaticClass<UWorldHoudiniEngineBPLibrary>()
	{
		return UWorldHoudiniEngineBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldHoudiniEngineBPLibrary(Z_Construct_UClass_UWorldHoudiniEngineBPLibrary, &UWorldHoudiniEngineBPLibrary::StaticClass, TEXT("/Script/WorldHoudiniEngine"), TEXT("UWorldHoudiniEngineBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldHoudiniEngineBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
