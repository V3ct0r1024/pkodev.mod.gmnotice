#include <Windows.h>
#include <detours.h>

#include <loader.h>
#include <common.h>

#include "address.h"
#include "import.h"
#include "hook.h"
#include "structure.h"

#include "WPacket.h"
#include "GameServerApp.h"


const int LUA_GLOBALSINDEX = -10001;

int lua_GMNotice(int L);

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    return TRUE;
}

void GetModInformation(mod_info& info)
{
    strcpy_s(info.name, TOSTRING(MOD_NAME));
    strcpy_s(info.version, TOSTRING(MOD_VERSION));
    strcpy_s(info.author, TOSTRING(MOD_AUTHOR));
    info.exe_version = MOD_EXE_VERSION;
}

void Start(const char* path)
{
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)pkodev::import::RegisterLuaGameLogic, pkodev::hook::RegisterLuaGameLogic);
    DetourTransactionCommit();
}

void Stop()
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)pkodev::import::RegisterLuaGameLogic, pkodev::hook::RegisterLuaGameLogic);
    DetourTransactionCommit();
}

void __cdecl pkodev::hook::RegisterLuaGameLogic(int L)
{
    import::RegisterLuaGameLogic(L);

    import::lua_pushstring(L, "GMNotice");
    import::lua_pushcclosure(L, reinterpret_cast<int>(&lua_GMNotice), 0);
    import::lua_settable(L, LUA_GLOBALSINDEX);
}

int lua_GMNotice(int L)
{
    using namespace pkodev;

    if ( (import::lua_gettop(L) != 1) || (import::lua_isstring(L, 1) == false) ) {
        import::LG("luamis_error", "lua function [%s] param number or type error!\n", __FUNCTION__);
        return 0;
    }

    const char* szMessage = import::lua_tostring(L, 1);
    if (szMessage == nullptr) {
        import::LG("luamis_error", "lua function [%s] patameter is null!\n", __FUNCTION__);
        return 0;
    }

    const size_t length = strlen(szMessage);
    if ( (length == 0) || (length > 512) ) {
        import::LG("luamis_error", "lua function [%s] wrong message length!\n", __FUNCTION__);
        return 0;
    }

    WPacket pkt;
    pkt.WriteCmd(pkodev::CMD_MP_GM1SAY);
    pkt.WriteString(szMessage);

    if (GameServerApp::Instance().SendToGroup(pkt) == false) {
        import::LG("luamis_error", "lua function [%s] failed to send packet to GroupServer!\n", __FUNCTION__);
    }

    return 0;
}