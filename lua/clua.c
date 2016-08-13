#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include <stdio.h>
#include <stdlib.h>

void bail(lua_State *L, char *msg) {
    fprintf(stderr, "\nFaTal Error:\n %s: %s\n\n", msg, lua_tostring(L, -1));
    exit(1);
}

int main() {
    lua_State *L;

    L = luaL_newstate();
    luaL_openlibs(L);

    if(luaL_loadfile(L, "callfuncscript.lua"))
        bail(L, "luaL_loadfile() failed");


    if(lua_pcall(L, 0, 0, 0))
        bail(L, "lua_pcall() failed");

    lua_getglobal(L, "tellme");
    printf("In C, calling lua\n");

    if(lua_pcall(L, 0, 0, 0))
        bail(L, "lua_pcall() failed");

    printf("Back to C again\n");

    lua_getglobal(L, "square");
    lua_pushnumber(L, 6);
    if(lua_pcall(L, 1, 1, 0))
        bail(L, "lua_pcall() failed");

    printf("Back in C again\n");

    int mynumber = lua_tonumber(L, -1);
    printf("Returned number = %d\n", mynumber);

    lua_close(L);

    return 0;
}
