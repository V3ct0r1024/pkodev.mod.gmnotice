#pragma once

namespace pkodev
{
	namespace address
	{
        // GameServer.exe 1.36
        namespace GAMESERVER_136
        {
            // void RegisterLuaGameLogic(lua_State *L)
            const unsigned int RegisterLuaGameLogic = 0x0040CE20;

            // LUA_API void  lua_pushstring (lua_State *L, const char *s)
            const unsigned int lua_pushstring = 0x00577760;

            // LUA_API void  lua_pushcclosure (lua_State *L, lua_CFunction fn, int n)
            const unsigned int lua_pushcclosure = 0x00577830;

            // LUA_API void  lua_settable (lua_State *L, int idx)
            const unsigned int lua_settable = 0x00577B00;

            // LUA_API int lua_gettop (lua_State *L)
            const unsigned int lua_gettop = 0x00576FD0;

            // LUA_API int lua_isstring (lua_State *L, int idx)
            const unsigned int lua_isstring = 0x00577270;

            // LUA_API const char *lua_tostring (lua_State *L, int idx)
            const unsigned lua_tostring = 0x005774E0;

            // void LG(const char* filename, const char* format, ...)
            const unsigned int LG = 0x00560F10;

            // dbc::TcpCommApp
            const unsigned int TcpCommApp = 0x0076D8FC;

            // WPacket TcpCommApp::GetWPacket() const
            const unsigned int TcpCommApp__GetWPacket = 0x00520950;

            // WPacket::WPacket()
            const unsigned int WPacket__WPacketCopyCtor = 0x0041C950;

            // WPacket::~WPacket
            const unsigned int WPacket__WPacketDtor = 0x0041C9E0;

            // WPacket& operator=(const WPacket&)
            const unsigned int WPacket__operator_equal = 0x0051ACC0;

            // bool WPacket::WriteCmd(uShort cmd)
            const unsigned int WPacket__WriteCmd = 0x0051A6B0;

            // bool WPacket::WriteString(cChar *str)
            const unsigned int WPacket__WriteString = 0x0051BAD0;

            // bool GameServerApp::SendToGroup(WPacket& chginf)
            const unsigned int GameServerApp__SendToGroup = 0x00509A80;
        }

        // GameServer.exe 1.38
        namespace GAMESERVER_138
        {
            // void RegisterLuaGameLogic(lua_State *L)
            const unsigned int RegisterLuaGameLogic = 0x0040D270;

            // LUA_API void  lua_pushstring (lua_State *L, const char *s)
            const unsigned int lua_pushstring = 0x00583E90;

            // LUA_API void  lua_pushcclosure (lua_State *L, lua_CFunction fn, int n)
            const unsigned int lua_pushcclosure = 0x00583F60;

            // LUA_API void  lua_settable (lua_State *L, int idx)
            const unsigned int lua_settable = 0x00584230;

            // LUA_API int lua_gettop (lua_State *L)
            const unsigned int lua_gettop = 0x00583700;

            // LUA_API int lua_isstring (lua_State *L, int idx)
            const unsigned int lua_isstring = 0x005839A0;

            // LUA_API const char *lua_tostring (lua_State *L, int idx)
            const unsigned lua_tostring = 0x00583C10;

            // void LG(const char* filename, const char* format, ...)
            const unsigned int LG = 0x0056D3F0;

            // dbc::TcpCommApp
            const unsigned int TcpCommApp = 0x0077984C;

            // WPacket TcpCommApp::GetWPacket() const
            const unsigned int TcpCommApp__GetWPacket = 0x00529CE0;

            // WPacket::WPacket(const WPacket&)
            const unsigned int WPacket__WPacketCopyCtor = 0x0041DBD0;

            // WPacket::~WPacket
            const unsigned int WPacket__WPacketDtor = 0x0041DC60;

            // WPacket& operator=(const WPacket&)
            const unsigned int WPacket__operator_equal = 0x00524050;

            // bool WPacket::WriteCmd(uShort cmd)
            const unsigned int WPacket__WriteCmd = 0x00523A40;

            // bool WPacket::WriteString(cChar *str)
            const unsigned int WPacket__WriteString = 0x00524E60;

            // bool GameServerApp::SendToGroup(WPacket& chginf)
            const unsigned int GameServerApp__SendToGroup = 0x00512D30;
        }
	}
}