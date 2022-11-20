// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldHoudiniEngine/Public/HAPI_To_Unreal_Common_Bridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHAPI_To_Unreal_Common_Bridge() {}
// Cross Module References
	WORLDHOUDINIENGINE_API UEnum* Z_Construct_UEnum_WorldHoudiniEngine_EHoudiniSessionType();
	UPackage* Z_Construct_UPackage__Script_WorldHoudiniEngine();
	WORLDHOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCookOptions();
	WORLDHOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession();
// End Cross Module References
	static UEnum* EHoudiniSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WorldHoudiniEngine_EHoudiniSessionType, Z_Construct_UPackage__Script_WorldHoudiniEngine(), TEXT("EHoudiniSessionType"));
		}
		return Singleton;
	}
	template<> WORLDHOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSessionType>()
	{
		return EHoudiniSessionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniSessionType(EHoudiniSessionType_StaticEnum, TEXT("/Script/WorldHoudiniEngine"), TEXT("EHoudiniSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WorldHoudiniEngine_EHoudiniSessionType_Hash() { return 2044904857U; }
	UEnum* Z_Construct_UEnum_WorldHoudiniEngine_EHoudiniSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WorldHoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniSessionType"), 0, Get_Z_Construct_UEnum_WorldHoudiniEngine_EHoudiniSessionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniSessionType::HOUDINI_SESSION_INPROCESS", (int64)EHoudiniSessionType::HOUDINI_SESSION_INPROCESS },
				{ "EHoudiniSessionType::HOUDINI_SESSION_THRIFT", (int64)EHoudiniSessionType::HOUDINI_SESSION_THRIFT },
				{ "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1", (int64)EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1 },
				{ "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2", (int64)EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2 },
				{ "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3", (int64)EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3 },
				{ "EHoudiniSessionType::HOUDINI_SESSION_MAX", (int64)EHoudiniSessionType::HOUDINI_SESSION_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HOUDINI_SESSION_CUSTOM1.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1" },
				{ "HOUDINI_SESSION_CUSTOM2.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2" },
				{ "HOUDINI_SESSION_CUSTOM3.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3" },
				{ "HOUDINI_SESSION_INPROCESS.Name", "EHoudiniSessionType::HOUDINI_SESSION_INPROCESS" },
				{ "HOUDINI_SESSION_MAX.Name", "EHoudiniSessionType::HOUDINI_SESSION_MAX" },
				{ "HOUDINI_SESSION_THRIFT.Name", "EHoudiniSessionType::HOUDINI_SESSION_THRIFT" },
				{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WorldHoudiniEngine,
				nullptr,
				"EHoudiniSessionType",
				"EHoudiniSessionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHoudiniCookOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WORLDHOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniCookOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCookOptions, Z_Construct_UPackage__Script_WorldHoudiniEngine(), TEXT("HoudiniCookOptions"), sizeof(FHoudiniCookOptions), Get_Z_Construct_UScriptStruct_FHoudiniCookOptions_Hash());
	}
	return Singleton;
}
template<> WORLDHOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniCookOptions>()
{
	return FHoudiniCookOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniCookOptions(FHoudiniCookOptions::StaticStruct, TEXT("/Script/WorldHoudiniEngine"), TEXT("HoudiniCookOptions"), false, nullptr, nullptr);
static struct FScriptStruct_WorldHoudiniEngine_StaticRegisterNativesFHoudiniCookOptions
{
	FScriptStruct_WorldHoudiniEngine_StaticRegisterNativesFHoudiniCookOptions()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniCookOptions>(FName(TEXT("HoudiniCookOptions")));
	}
} ScriptStruct_WorldHoudiniEngine_StaticRegisterNativesFHoudiniCookOptions;
	struct Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCookOptions>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldHoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniCookOptions",
		sizeof(FHoudiniCookOptions),
		alignof(FHoudiniCookOptions),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCookOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniCookOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WorldHoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniCookOptions"), sizeof(FHoudiniCookOptions), Get_Z_Construct_UScriptStruct_FHoudiniCookOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniCookOptions_Hash() { return 1534536698U; }
class UScriptStruct* FHoudiniSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WORLDHOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniSession, Z_Construct_UPackage__Script_WorldHoudiniEngine(), TEXT("HoudiniSession"), sizeof(FHoudiniSession), Get_Z_Construct_UScriptStruct_FHoudiniSession_Hash());
	}
	return Singleton;
}
template<> WORLDHOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniSession>()
{
	return FHoudiniSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniSession(FHoudiniSession::StaticStruct, TEXT("/Script/WorldHoudiniEngine"), TEXT("HoudiniSession"), false, nullptr, nullptr);
static struct FScriptStruct_WorldHoudiniEngine_StaticRegisterNativesFHoudiniSession
{
	FScriptStruct_WorldHoudiniEngine_StaticRegisterNativesFHoudiniSession()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniSession>(FName(TEXT("HoudiniSession")));
	}
} ScriptStruct_WorldHoudiniEngine_StaticRegisterNativesFHoudiniSession;
	struct Z_Construct_UScriptStruct_FHoudiniSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HoudiniSessionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniSessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HoudiniSessionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Identifies a session\n" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
		{ "ToolTip", "Identifies a session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniSession>();
	}
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData[] = {
		{ "Category", "Houdini Session Info" },
		{ "Comment", "/// The type of session determines the which implementation will be\n/// used to communicate with the Houdini Engine library.\n" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
		{ "ToolTip", "The type of session determines the which implementation will be\nused to communicate with the Houdini Engine library." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType = { "HoudiniSessionType", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSession, HoudiniSessionType), Z_Construct_UEnum_WorldHoudiniEngine_EHoudiniSessionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Houdini Session Info" },
		{ "Comment", "/// Some session types support multiple simultaneous sessions. This means\n/// that each session needs to have a unique identifier.\n" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
		{ "ToolTip", "Some session types support multiple simultaneous sessions. This means\nthat each session needs to have a unique identifier." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSession, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldHoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniSession",
		sizeof(FHoudiniSession),
		alignof(FHoudiniSession),
		Z_Construct_UScriptStruct_FHoudiniSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WorldHoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniSession"), sizeof(FHoudiniSession), Get_Z_Construct_UScriptStruct_FHoudiniSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniSession_Hash() { return 3870151300U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
