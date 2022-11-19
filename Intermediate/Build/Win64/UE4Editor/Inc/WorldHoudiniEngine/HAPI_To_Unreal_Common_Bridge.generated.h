// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDHOUDINIENGINE_HAPI_To_Unreal_Common_Bridge_generated_h
#error "HAPI_To_Unreal_Common_Bridge.generated.h already included, missing '#pragma once' in HAPI_To_Unreal_Common_Bridge.h"
#endif
#define WORLDHOUDINIENGINE_HAPI_To_Unreal_Common_Bridge_generated_h

#define UEtestH_Plugins_WorldHoudiniEngine_Source_WorldHoudiniEngine_Public_HAPI_To_Unreal_Common_Bridge_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniSession_Statics; \
	WORLDHOUDINIENGINE_API static class UScriptStruct* StaticStruct();


template<> WORLDHOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEtestH_Plugins_WorldHoudiniEngine_Source_WorldHoudiniEngine_Public_HAPI_To_Unreal_Common_Bridge_h


#define FOREACH_ENUM_EHOUDINISESSIONTYPE(op) \
	op(EHoudiniSessionType::HOUDINI_SESSION_INPROCESS) \
	op(EHoudiniSessionType::HOUDINI_SESSION_THRIFT) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3) 

enum class EHoudiniSessionType;
template<> WORLDHOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSessionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
