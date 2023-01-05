#include "address.h"
#include "import.h"
#include "GroupServerApp.h"

namespace pkodev {

	GroupServerApp& GroupServerApp::Instance()
	{
		static GroupServerApp app;
		return app;
	}

	void GroupServerApp::SendToClient(const WPacket& packet, 
		const std::vector<void*>& recipients) const
	{
		import::GroupServerApp__SendToClient( reinterpret_cast<void*>(*reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::TcpCommApp)),
			recipients.data(), static_cast<unsigned short int>(recipients.size()), reinterpret_cast<void*>(packet.m_data) );
	}

}