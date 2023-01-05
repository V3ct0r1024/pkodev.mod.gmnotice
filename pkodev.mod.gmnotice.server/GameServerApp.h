#pragma once
#include "WPacket.h"

namespace pkodev {

	class GameServerApp final
	{
		public:
			static GameServerApp& Instance();
			bool SendToGroup(const WPacket& packet) const;

		private:
			GameServerApp() = default;
			~GameServerApp() = default;
			GameServerApp(const GameServerApp&) = delete;
			GameServerApp& operator= (const GameServerApp&) = delete;
			GameServerApp(GameServerApp&&) = delete;
			GameServerApp& operator=(GameServerApp&&) = delete;
	};

}
