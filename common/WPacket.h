#pragma once

namespace pkodev {

	class WPacket final
	{
		friend class GameServerApp;
		friend class GroupServerApp;

		public:
			WPacket();
			~WPacket();
			WPacket(const WPacket& other);
			WPacket(WPacket&& other) noexcept;
			WPacket& operator=(const WPacket& other);
			WPacket& operator=(WPacket&& other) noexcept;
			void WriteCmd(unsigned short int packet_id) const;
			void WriteString(const char* string) const;

		private:
			mutable char m_data[0x38];
	};

}

