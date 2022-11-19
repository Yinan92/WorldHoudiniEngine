#pragma once
#include "HAPI.h"
#include "CoreMinimal.h"
#include "HAPI_To_Unreal_Common_Bridge.generated.h"

UENUM()
enum class EHoudiniSessionType
{
    HOUDINI_SESSION_INPROCESS,
    HOUDINI_SESSION_THRIFT,
    HOUDINI_SESSION_CUSTOM1,
    HOUDINI_SESSION_CUSTOM2,
    HOUDINI_SESSION_CUSTOM3,
    HOUDINI_SESSION_MAX
};

/// Identifies a session
USTRUCT(BlueprintType)
struct FHoudiniSession
{
    GENERATED_BODY()
    /// The type of session determines the which implementation will be
    /// used to communicate with the Houdini Engine library.
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Houdini Session Info")
    EHoudiniSessionType HoudiniSessionType;

    /// Some session types support multiple simultaneous sessions. This means
    /// that each session needs to have a unique identifier.
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Houdini Session Info")
    int64 SessionId;

    FHoudiniSession() : HoudiniSessionType(EHoudiniSessionType::HOUDINI_SESSION_THRIFT), SessionId(0)
    {}

public:
    HAPI_Session ToHAPI_Session()
    {
        HAPI_Session Session;
        Session.id = (HAPI_SessionId)SessionId;
        Session.type = (HAPI_SessionType)HoudiniSessionType;
        return Session;
    }

    static FHoudiniSession FromHAPI_Session(const HAPI_Session& HAPISession)
    {
        FHoudiniSession TempHoudiniSession;
        TempHoudiniSession.SessionId = (int64)HAPISession.id;
        TempHoudiniSession.HoudiniSessionType = (EHoudiniSessionType)HAPISession.type;
        return TempHoudiniSession;
    }
};