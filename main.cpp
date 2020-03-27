#include "pch.h"
#include <iostream>
 
using LoadFile_call = __int64(*)(__int64 state, const std::string & filename);
 
void mt {
 
	LoadFile_call LoadFile = (LoadFile_call)(GetModuleHandleW(L"citizen-resources-metadata-lua.dll" + 0x50910));
 
	while (true) {
		if (GetAsyncKeyState(VK_F5)) {
			LoadFile(0x0, "C:\\try\\a.lua");
		}
	}
 
}
 
BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)mt , 0, 0, 0);
 
	return TRUE;
}
