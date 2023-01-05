#pragma once

namespace pkodev {

	class import final
	{
		public:

			typedef void(__cdecl* RegisterLuaGameLogic_Ptr)(int);
			static RegisterLuaGameLogic_Ptr RegisterLuaGameLogic;

			typedef void(__cdecl* lua_pushstring__Ptr)(int, const char*);
			static lua_pushstring__Ptr lua_pushstring;

			typedef void(__cdecl* lua_pushcclosure__Ptr)(int, int, int);
			static lua_pushcclosure__Ptr lua_pushcclosure;

			typedef void(__cdecl* lua_settable__Ptr)(int, int);
			static lua_settable__Ptr lua_settable;

			typedef int(__cdecl* lua_gettop__Ptr)(int);
			static lua_gettop__Ptr lua_gettop;

			typedef int(__cdecl* lua_isstring__Ptr)(int, int);
			static lua_isstring__Ptr lua_isstring;

			typedef const char*(__cdecl* lua_tostring__Ptr)(int, int);
			static lua_tostring__Ptr lua_tostring;

			typedef void(__cdecl* LG__Ptr)(const char*, const char*, ...);
			static LG__Ptr LG;

			typedef int(__thiscall* TcpCommApp__GetWPacket__Ptr)(void*, void*);
			static TcpCommApp__GetWPacket__Ptr TcpCommApp__GetWPacket;
			
			typedef void(__thiscall* WPacket__WPacketCopyCtor__Ptr)(void*, void*);
			static WPacket__WPacketCopyCtor__Ptr WPacket__WPacketCopyCtor;

			typedef void* (__thiscall* WPacket__WPacketDtor__Ptr)(void*);
			static WPacket__WPacketDtor__Ptr WPacket__WPacketDtor;

			typedef void*(__thiscall* WPacket__operator_equal__Ptr)(void*, void*);
			static WPacket__operator_equal__Ptr WPacket__operator_equal;

			typedef bool(__thiscall* WPacket__WriteCmd__Ptr)(void*, unsigned short int);
			static WPacket__WriteCmd__Ptr WPacket__WriteCmd;

			typedef bool(__thiscall* WPacket__WriteString__Ptr)(void*, const char*);
			static WPacket__WriteString__Ptr WPacket__WriteString;

			typedef bool(__thiscall* GameServerApp__SendToGroup__Ptr)(void*, const void*);
			static GameServerApp__SendToGroup__Ptr GameServerApp__SendToGroup;
	};

}

