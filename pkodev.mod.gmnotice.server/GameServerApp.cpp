#include "address.h"
#include "import.h"
#include "GameServerApp.h"

namespace pkodev {

	GameServerApp& GameServerApp::Instance()
	{
		static GameServerApp app;
		return app;
	}

	bool GameServerApp::SendToGroup(const WPacket& packet) const
	{
		return import::GameServerApp__SendToGroup(
			reinterpret_cast<void*>(*reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::TcpCommApp)),
			reinterpret_cast<void*>(packet.m_data)
		);
	}

}