#pragma once

namespace pkodev {
	
	class import final
	{
		public:

			typedef void(__thiscall* GroupServerApp__OnProccessData__Ptr)(void*, void*, void*);
			static GroupServerApp__OnProccessData__Ptr GroupServerApp__OnProccessData;

			typedef unsigned short int(__thiscall* RPacket__ReadCmd__Ptr)(void*);
			static RPacket__ReadCmd__Ptr RPacket__ReadCmd;

			typedef const char* (__thiscall* RPacket__ReadString__Ptr)(void*, unsigned short int*);
			static RPacket__ReadString__Ptr RPacket__ReadString;

			typedef void(__thiscall* RunChainGetArmor__RunChainGetArmorCtor__Ptr)(void*, void*);
			static RunChainGetArmor__RunChainGetArmorCtor__Ptr RunChainGetArmor__RunChainGetArmorCtor;

			typedef void(__thiscall* RunChainGetArmor__RunChainGetArmorDtor__Ptr)(void*);
			static RunChainGetArmor__RunChainGetArmorDtor__Ptr RunChainGetArmor__RunChainGetArmorDtor;

			typedef void(__thiscall* RunChainGetArmor__unlock__Ptr)(void*);
			static RunChainGetArmor__unlock__Ptr RunChainGetArmor__unlock;

			typedef void* (__thiscall* RunBiDirectChain__GetNextItem__Ptr)(void*);
			static RunBiDirectChain__GetNextItem__Ptr RunBiDirectChain__GetNextItem;

			typedef void* (__thiscall* GroupServerApp__SendToClient__Ptr)(void*, const void*, unsigned short int, void*);
			static GroupServerApp__SendToClient__Ptr GroupServerApp__SendToClient;
			typedef int(__thiscall* TcpCommApp__GetWPacket__Ptr)(void*, void*);
			static TcpCommApp__GetWPacket__Ptr TcpCommApp__GetWPacket;

			typedef void(__thiscall* WPacket__WPacketCopyCtor__Ptr)(void*, void*);
			static WPacket__WPacketCopyCtor__Ptr WPacket__WPacketCopyCtor;

			typedef void* (__thiscall* WPacket__WPacketDtor__Ptr)(void*);
			static WPacket__WPacketDtor__Ptr WPacket__WPacketDtor;

			typedef void* (__thiscall* WPacket__operator_equal__Ptr)(void*, void*);
			static WPacket__operator_equal__Ptr WPacket__operator_equal;

			typedef bool(__thiscall* WPacket__WriteCmd__Ptr)(void*, unsigned short int);
			static WPacket__WriteCmd__Ptr WPacket__WriteCmd;

			typedef bool(__thiscall* WPacket__WriteString__Ptr)(void*, const char*);
			static WPacket__WriteString__Ptr WPacket__WriteString;

	};

}
