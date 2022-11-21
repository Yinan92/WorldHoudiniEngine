// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAPI_To_Unreal_Common_Bridge.h"
#include "WorldHoudiniEngineBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

UCLASS()
class UWorldHoudiniEngineBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
public:

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Creates a Thrift RPC session using a Windows named pipe or a Unix domain socket as transport."), Category = "WorldHoudiniBPLibrary | Session")
	static FHoudiniSession StartServerAndCreateSession(FHoudiniSession HoudiniSession);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Creats and initialize cook options."), Category = "WorldHoudiniBPLibrary | Helpers")
	static FHoudiniCookOptions CreateHoudiniCookOptions();

	//Create the asset manager, set up environment variables, and initialize the main Houdini scene. No license check is done during this step. 
	//Only when you try to load an asset library (OTL) do we actually check for licenses.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Sessions")
	static void HoudiniInitialize(FHoudiniSession HoudiniSession, const FHoudiniCookOptions& HoudiniCookOptions);

	//Checks whether the session identified by HAPI_Session::id is a valid session opened in the implementation identified by HAPI_Session::type.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Sessions")
	static bool HoudiniIsSessionValid(FHoudiniSession HoudiniSession);

	//Loads a Houdini asset library (OTL) from a .otl file. It does NOT create anything inside the Houdini scene.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Assets")
	static bool HoudiniLoadAssetLibraryFromFile(FHoudiniSession HoudiniSession, FString otlFilePath, bool bAllowOverwrite, int& AssetLibraryId);

	//Get the names of the assets contained in an asset library.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Assets")
	static bool HoudiniGetAssetOperatorName(FHoudiniSession HoudiniSession, int AssetLibraryId, FString& FullOpName, FString& Label);

	//Create a node inside a node network. Nodes created this way will have their HAPI_NodeInfo::createdPostAssetLoad set to true.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Nodes")
	static bool HoudiniCreateNode(FHoudiniSession HoudiniSession, FString OperatorName, FString Label, int& NodeId, int ParentNodeId = -1, bool bCookOnCreation = false);

	//Initiate a cook on this node. Note that this may trigger cooks on other nodes if they are connected.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Nodes")
	static void HoudiniCookNode(FHoudiniSession HoudiniSession, int NodeId, FHoudiniCookOptions HoudiniCookOptions);

	//Saves a .hip file of the current Houdini scene.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | SaveHIPFiles")
	static bool HoudiniSaveHIPFile(FHoudiniSession HoudiniSession, FString FilePath, bool bLockNode = false);

	//Clean up memory. This will unload all assets and you will need to call HAPI_Initialize() again to be able to use any HAPI methods again.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Sessions")
	static void HoudiniCleanupSession(FHoudiniSession HoudiniSession);

	//Closes a session. If the session has been established using RPC, then the RPC connection is closed.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Sessions")
	static void HoudiniCloseSession(FHoudiniSession HoudiniSession);

	//Check whether the runtime has been initialized yet using HAPI_Initialize().
	//Function will return HAPI_RESULT_SUCCESS if the runtime has been initializedand HAPI_RESULT_NOT_INITIALIZED otherwise.
	UFUNCTION(BlueprintCallable, Category = "WorldHoudiniBPLibrary | Sessions")
	static 	bool HoudiniIsInitialized(FHoudiniSession HoudiniSession);

private:

	static FString ToString(FHoudiniSession HoudiniSession, HAPI_StringHandle& InStringHandle);
};