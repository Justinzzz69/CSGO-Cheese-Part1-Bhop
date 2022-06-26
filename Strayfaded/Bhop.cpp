#include "include.h"

DWORD WINAPI BhopThread(HMODULE hMod)
{
	while (!GetAsyncKeyState(UNINJECT_KB))
	{
		Localplayer L;
		if (L.Exists() && Settings.EnableBhop)
		{
			DWORD flag = *(BYTE*)(L.Get() + m_fFlags);
			if (GetAsyncKeyState(VK_SPACE) && flag & (1 << 0))
			{
				L.ForceJump();
			}
		}
	}
	FreeLibraryAndExitThread(hMod, 0);
}