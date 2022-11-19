// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorldHoudiniEngineBPLibrary.h"
#include "WorldHoudiniEngine.h"

UWorldHoudiniEngineBPLibrary::UWorldHoudiniEngineBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


FHoudiniSession UWorldHoudiniEngineBPLibrary::StartServerAndCreateSession(FHoudiniSession HoudiniSession)
{
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_CreateThriftNamedPipeSession(&OrigSession, "hapi");
	if (Result != HAPI_RESULT_SUCCESS) 
	{
		HAPI_ThriftServerOptions serverOptions{ 0 };
		serverOptions.autoClose = true;
		serverOptions.timeoutMs = 3000.0f;
		HAPI_StartThriftNamedPipeServer(&serverOptions, "hapi", nullptr);
		UE_LOG(LogTemp, Log, TEXT("Houdini named pipe server has been successfully started!"));
		HAPI_CreateThriftNamedPipeSession(&OrigSession, "hapi");
	}
	UE_LOG(LogTemp, Log, TEXT("Houdini named pipe session has been successfully created!"));
	return FHoudiniSession::FromHAPI_Session(OrigSession);
}
