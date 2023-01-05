#include "address.h"
#include "import.h"

namespace pkodev {

	import::RegisterLuaGameLogic_Ptr import::RegisterLuaGameLogic = reinterpret_cast<import::RegisterLuaGameLogic_Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::RegisterLuaGameLogic));
	import::lua_pushstring__Ptr import::lua_pushstring = reinterpret_cast<import::lua_pushstring__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::lua_pushstring));
	import::lua_pushcclosure__Ptr import::lua_pushcclosure = reinterpret_cast<import::lua_pushcclosure__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::lua_pushcclosure));
	import::lua_settable__Ptr import::lua_settable = reinterpret_cast<import::lua_settable__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::lua_settable));
	import::lua_gettop__Ptr import::lua_gettop = reinterpret_cast<import::lua_gettop__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::lua_gettop));
	import::lua_isstring__Ptr import::lua_isstring = reinterpret_cast<import::lua_isstring__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::lua_isstring));
	import::lua_tostring__Ptr import::lua_tostring = reinterpret_cast<import::lua_tostring__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::lua_tostring));
	import::LG__Ptr import::LG = reinterpret_cast<import::LG__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::LG));
	import::TcpCommApp__GetWPacket__Ptr import::TcpCommApp__GetWPacket  = reinterpret_cast<import::TcpCommApp__GetWPacket__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::TcpCommApp__GetWPacket));
	import::WPacket__WPacketCopyCtor__Ptr import::WPacket__WPacketCopyCtor = reinterpret_cast<import::WPacket__WPacketCopyCtor__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::WPacket__WPacketCopyCtor));
	import::WPacket__WPacketDtor__Ptr import::WPacket__WPacketDtor = reinterpret_cast<import::WPacket__WPacketDtor__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::WPacket__WPacketDtor));
	import::WPacket__operator_equal__Ptr import::WPacket__operator_equal = reinterpret_cast<import::WPacket__operator_equal__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::WPacket__operator_equal));
	import::WPacket__WriteCmd__Ptr import::WPacket__WriteCmd  = reinterpret_cast<import::WPacket__WriteCmd__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::WPacket__WriteCmd));
	import::WPacket__WriteString__Ptr import::WPacket__WriteString = reinterpret_cast<import::WPacket__WriteString__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::WPacket__WriteString));
	import::GameServerApp__SendToGroup__Ptr import::GameServerApp__SendToGroup = reinterpret_cast<import::GameServerApp__SendToGroup__Ptr>(reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::GameServerApp__SendToGroup));
}