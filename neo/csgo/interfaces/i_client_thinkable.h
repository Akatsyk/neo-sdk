#pragma once

class i_client_unknown;
class CClientThinkHandlePtr;
typedef CClientThinkHandlePtr* ClientThinkHandle_t;

class i_client_thinkable
{
public:
    virtual i_client_unknown* GetIClientUnknown() = 0;
    virtual void                ClientThink() = 0;
    virtual ClientThinkHandle_t GetThinkHandle() = 0;
    virtual void                SetThinkHandle(ClientThinkHandle_t hThink) = 0;
    virtual void                Release() = 0;
};