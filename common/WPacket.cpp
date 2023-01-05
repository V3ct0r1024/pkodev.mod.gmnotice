#include <memory>

#include "address.h"
#include "import.h"
#include "WPacket.h"

namespace pkodev {

	WPacket::WPacket() :
		m_data{0x00}
	{
		import::TcpCommApp__GetWPacket(
			reinterpret_cast<void*>(*reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::TcpCommApp)),
			reinterpret_cast<void*>(m_data)
		);
	}

	WPacket::~WPacket()
	{
		import::WPacket__WPacketDtor(reinterpret_cast<void*>(m_data));
	}

	WPacket::WPacket(const WPacket& other) :
		m_data{ 0x00 }
	{
		import::WPacket__WPacketCopyCtor( reinterpret_cast<void*>(m_data),
			reinterpret_cast<void*>(other.m_data) );
	}

	WPacket::WPacket(WPacket&& other) noexcept
	{
		std::memcpy(reinterpret_cast<void*>(m_data),
			reinterpret_cast<const void*>(other.m_data), sizeof(m_data));
		std::memset(reinterpret_cast<void*>(other.m_data), 0x00, sizeof(other.m_data));
	}

	WPacket& WPacket::operator=(const WPacket& other)
	{
		if (this != &other) {
			import::WPacket__operator_equal( reinterpret_cast<void*>(m_data),
				reinterpret_cast<void*>(other.m_data) );
		}
		return *this;
	}

	WPacket& WPacket::operator=(WPacket&& other) noexcept
	{
		std::memcpy(reinterpret_cast<void*>(m_data),
			reinterpret_cast<const void*>(other.m_data), sizeof(m_data));
		std::memset(reinterpret_cast<void*>(other.m_data), 0x00, sizeof(other.m_data));

		return *this;
	}

	void WPacket::WriteCmd(unsigned short int packet_id) const
	{
		import::WPacket__WriteCmd(reinterpret_cast<void*>(m_data), packet_id);
	}

	void WPacket::WriteString(const char* string) const
	{
		import::WPacket__WriteString(reinterpret_cast<void*>(m_data), string);
	}

}