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

FHoudiniCookOptions UWorldHoudiniEngineBPLibrary::CreateHoudiniCookOptions()
{
	HAPI_CookOptions CookOptions = HAPI_CookOptions_Create();
	FHoudiniCookOptions HoudiniCookOptions;
	HoudiniCookOptions.HAPICookOptions = CookOptions;
	return HoudiniCookOptions;
}

void UWorldHoudiniEngineBPLibrary::HoudiniInitialize(FHoudiniSession HoudiniSession, const FHoudiniCookOptions& HoudiniCookOptions)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Initialize(&OrigSession, &HoudiniCookOptions.HAPICookOptions, true, -1, nullptr, nullptr, nullptr, nullptr, nullptr);
}

bool UWorldHoudiniEngineBPLibrary::HoudiniIsSessionValid(FHoudiniSession HoudiniSession)
{
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_IsSessionValid(&OrigSession);
	if (!(Result == HAPI_RESULT_SUCCESS))
	{
		UE_LOG(LogTemp, Log, TEXT("Invalid Houdini_Session"));
	}
	return Result == HAPI_RESULT_SUCCESS;
}

bool UWorldHoudiniEngineBPLibrary::HoudiniLoadAssetLibraryFromFile(FHoudiniSession HoudiniSession, FString otlFilePath, bool bAllowOverwrite, int& AssetLibraryId)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_AssetLibraryId LibraryId = -1;
	HAPI_Result Result = HAPI_LoadAssetLibraryFromFile(&OrigSession, TCHAR_TO_UTF8(*otlFilePath), (HAPI_Bool)bAllowOverwrite, &LibraryId);
	AssetLibraryId = (int)LibraryId;
	return Result == HAPI_RESULT_SUCCESS || Result == HAPI_RESULT_ASSET_DEF_ALREADY_LOADED;
}

bool UWorldHoudiniEngineBPLibrary::HoudiniGetAssetOperatorName(FHoudiniSession HoudiniSession, int AssetLibraryId, FString& FullOpName, FString& Label)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_AssetLibraryId Id = (HAPI_AssetLibraryId)AssetLibraryId;
	int AssetCount = -1;
	HAPI_GetAvailableAssetCount(&OrigSession, Id, &AssetCount);
	check(AssetCount == 1);

	HAPI_StringHandle AssetSH;
	HAPI_Result Result = HAPI_GetAvailableAssets(&OrigSession, Id, &AssetSH, AssetCount);

	FullOpName = ToString(HoudiniSession, AssetSH);
	TArray<FString> OutStringArray;
	FullOpName.ParseIntoArray(OutStringArray, TEXT("/"));
	Label = OutStringArray[OutStringArray.Num() - 1];
	return Result == HAPI_RESULT_SUCCESS;
}

bool UWorldHoudiniEngineBPLibrary::HoudiniCreateNode(FHoudiniSession HoudiniSession, FString OperatorName, FString Label, int& NodeId, int ParentNodeId, bool bCookOnCreation)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_NodeId OrigNodeId;
	HAPI_Result Result = HAPI_CreateNode(&OrigSession, (HAPI_NodeId)ParentNodeId, TCHAR_TO_UTF8(*OperatorName), TCHAR_TO_UTF8(*Label), (HAPI_Bool)bCookOnCreation, &OrigNodeId);
	NodeId = (int)OrigNodeId;
	return Result == HAPI_RESULT_SUCCESS;
}

void UWorldHoudiniEngineBPLibrary::HoudiniCookNode(FHoudiniSession HoudiniSession, int NodeId, FHoudiniCookOptions HoudiniCookOptions)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_CookNode(&OrigSession, (HAPI_NodeId)NodeId, &HoudiniCookOptions.HAPICookOptions);
}

bool UWorldHoudiniEngineBPLibrary::HoudiniSaveHIPFile(FHoudiniSession HoudiniSession, FString FilePath, bool bLockNode)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_SaveHIPFile(&OrigSession, TCHAR_TO_UTF8(*FilePath), (HAPI_Bool)bLockNode);
	return Result == HAPI_RESULT_SUCCESS;
}

FString UWorldHoudiniEngineBPLibrary::ToString(FHoudiniSession HoudiniSession, HAPI_StringHandle& InStringHandle)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return FString("");
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	check(InStringHandle > 0);

	int StringLenght = 0;
	HAPI_Result Result = HAPI_GetStringBufLength(&OrigSession, InStringHandle,&StringLenght);
	check(Result == HAPI_RESULT_SUCCESS);
	
	TArray<ANSICHAR> StringBuffer;
	StringBuffer.SetNumUninitialized(StringLenght);
	StringBuffer.Last() = 0;

	Result = HAPI_GetString(&OrigSession, InStringHandle, StringBuffer.GetData(), StringLenght);
	check(Result == HAPI_RESULT_SUCCESS);
	
	FString FinalString = UTF8_TO_TCHAR(StringBuffer.GetData());
	return FinalString;
}
