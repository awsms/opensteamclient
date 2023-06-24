//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#ifndef ICLIENTUNIFIEDMESSAGES_H
#define ICLIENTUNIFIEDMESSAGES_H
#ifdef _WIN32
#pragma once
#endif

#include "SteamTypes.h"
#include "UnifiedMessagesCommon.h"

abstract_class IClientUnifiedMessages
{
public:
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual ClientUnifiedMessageHandle_t SendMethod(const char * pchServiceMethod, const void * pRequest, uint32 nBuf, uint64 ctx) = 0; //argc: 5, index 1
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual bool GetMethodResponseInfo(ClientUnifiedMessageHandle_t hUmsg, uint32 *pnResponse, EResult *eResult) = 0; //argc: 4, index 2
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual bool GetMethodResponseData(ClientUnifiedMessageHandle_t hUmsg, void *pResponseBuf, uint32 bufSize, bool autoRelease) = 0; //argc: 5, index 3
    // WARNING: Argument count doesn't match argc! Remove this once this has been corrected!
    virtual bool ReleaseMethod(ClientUnifiedMessageHandle_t hUmsg) = 0; //argc: 2, index 4
    virtual bool SendNotification(const char * pchNotification, const void * buf, uint32 bufSize) = 0; //argc: 3, index 5
};

#endif // ICLIENTUNIFIEDMESSAGES_H
 