#pragma once
#include <vector>
#include "WPacket.h"

namespace pkodev {

	class GroupServerApp final
	{
		public:
			static GroupServerApp& Instance();
			void SendToClient(const WPacket& packet, const std::vector<void*>& recipients) const;

		private:
			GroupServerApp() = default;
			~GroupServerApp() = default;
			GroupServerApp(const GroupServerApp&) = delete;
			GroupServerApp& operator= (const GroupServerApp&) = delete;
			GroupServerApp(GroupServerApp&&) = delete;
			GroupServerApp& operator=(GroupServerApp&&) = delete;
	};

}
