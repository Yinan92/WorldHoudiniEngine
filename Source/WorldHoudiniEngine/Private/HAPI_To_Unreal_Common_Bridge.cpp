#include "HAPI_To_Unreal_Common_Bridge.h"

HAPI_Session FHoudiniSession::ToHAPI_Session()
{
    HAPI_Session Session;
    Session.id = (HAPI_SessionId)SessionId;
    Session.type = (HAPI_SessionType)HoudiniSessionType;
    return Session;
}

FHoudiniSession FHoudiniSession::FromHAPI_Session(const HAPI_Session& HAPISession)
{
    FHoudiniSession TempHoudiniSession;
    TempHoudiniSession.SessionId = (int64)HAPISession.id;
    TempHoudiniSession.HoudiniSessionType = (EHoudiniSessionType)HAPISession.type;
    return TempHoudiniSession;
}
