#pragma once

namespace pkodev
{
	namespace address
	{
         // GroupServer.exe 1.38
        namespace GROUPSERVER_138
        {
            // void GroupServerApp::OnProcessData(DataSocket *datasock, RPacket &recvbuf)
            const unsigned int GroupServerApp__OnProccessData = 0x0041CA90;

            // uShort RPacket::ReadCmd()
            const unsigned int RPacket__ReadCmd = 0x0042F870;

            // cChar *RPacket::ReadString(uShort *len)
            const unsigned int RPacket__ReadString = 0x0042FA40;

            // RunChainGetArmor<Player>::RunChainGetArmor<Player>(const RunBiDirectChain<Player> &chain)
            const unsigned int RunChainGetArmor__RunChainGetArmorCtor = 0x0040C130;

            // RunChainGetArmor<Player>::~RunChainGetArmor<Player>()
            const unsigned int RunChainGetArmor__RunChainGetArmorDtor = 0x0040C150;

            // void RunChainGetArmor<Player>::unlock() const
            const unsigned int RunChainGetArmor__unlock = 0x0040AD60;

            // Player* RunBiDirectChain<Player>::GetNextItem()
            const unsigned int RunBiDirectChain__GetNextItem = 0x0040AB90;

            // void GroupServerApp::SendToClient(Player* ply[],short cli_num,const WPacket &wpk)
            const unsigned int GroupServerApp__SendToClient = 0x0040D630;

            // dbc::TcpCommApp
            const unsigned int TcpCommApp = 0x004BD8E4;

            // WPacket TcpCommApp::GetWPacket() const
            const unsigned int TcpCommApp__GetWPacket = 0x00434630;

            // WPacket::WPacket()
            const unsigned int WPacket__WPacketCopyCtor = 0x00409C60;

            // WPacket::~WPacket
            const unsigned int WPacket__WPacketDtor = 0x004033B0;

            // WPacket& operator=(const WPacket&)
            const unsigned int WPacket__operator_equal = 0x0042FC80;

            // bool WPacket::WriteCmd(uShort cmd)
            const unsigned int WPacket__WriteCmd = 0x0042F730;

            // bool WPacket::WriteString(cChar *str)
            const unsigned int WPacket__WriteString = 0x00430970;
        }
	}
}