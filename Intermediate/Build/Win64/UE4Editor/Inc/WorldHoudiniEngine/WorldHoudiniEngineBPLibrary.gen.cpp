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
	WORLDHOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession();
// End Cross Module References
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
			{ "StartServerAndCreateSession", &UWorldHoudiniEngineBPLibrary::execStartServerAndCreateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Category", "WorldHoudiniBPLibrary" },
		{ "ModuleRelativePath", "Public/WorldHoudiniEngineBPLibrary.h" },
		{ "ToolTip", "Creates a Thrift RPC session using a TCP socket as transport." },
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
		{ &Z_Construct_UFunction_UWorldHoudiniEngineBPLibrary_StartServerAndCreateSession, "StartServerAndCreateSession" }, // 3214891023
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
	IMPLEMENT_CLASS(UWorldHoudiniEngineBPLibrary, 2120963692);
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
