#include <Windows.h>
#include <detours.h>

#include <vector>

#include <loader.h>
#include <common.h>

#include "address.h"
#include "import.h"
#include "hook.h"
#include "structure.h"

#include "WPacket.h"
#include "GroupServerApp.h"


std::vector<void*> recipients;

void GroupServerApp__CP_GM1SAY(void* This, void* datasock, void* rpacket);

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
    recipients.reserve(10240);

    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)pkodev::import::GroupServerApp__OnProccessData, pkodev::hook::GroupServerApp__OnProccessData);
    DetourTransactionCommit();
}

void Stop()
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)pkodev::import::GroupServerApp__OnProccessData, pkodev::hook::GroupServerApp__OnProccessData);
    DetourTransactionCommit();
}

void __fastcall pkodev::hook::GroupServerApp__OnProccessData(void* This, void*,
    void* datasock, void* rpacket)
{
    const unsigned short int id = import::RPacket__ReadCmd(rpacket);

    if (id == CMD_MP_GM1SAY) {
        GroupServerApp__CP_GM1SAY(This, datasock, rpacket);
        return;
    }

    import::GroupServerApp__OnProccessData(This, datasock, rpacket);
}

void GroupServerApp__CP_GM1SAY(void* This, void* datasock, void* rpacket)
{
    using namespace pkodev;

    unsigned short int length = 0;
    const char* message = import::RPacket__ReadString(rpacket, &length);

    if ( (message == nullptr) || ( (length == 0) || (length > 512) ) ) {
        return;
    }

    WPacket pkt;
    pkt.WriteCmd(CMD_PC_GM1SAY);
    pkt.WriteString("System");
    pkt.WriteString(message);

    void* players = reinterpret_cast<void*>(reinterpret_cast<unsigned int>(This) + 0x054C);

    char armor[0x08]{ 0x00 };
    import::RunChainGetArmor__RunChainGetArmorCtor(reinterpret_cast<void*>(armor), players);

    void* recipient = nullptr;
    recipients.clear();
    while ( (recipient = import::RunBiDirectChain__GetNextItem(players)) != nullptr ) {
        recipients.push_back(recipient);
    }

    import::RunChainGetArmor__unlock(reinterpret_cast<void*>(armor));

    GroupServerApp::Instance().SendToClient(pkt, recipients);
 
    import::RunChainGetArmor__RunChainGetArmorDtor(reinterpret_cast<void*>(armor));
}