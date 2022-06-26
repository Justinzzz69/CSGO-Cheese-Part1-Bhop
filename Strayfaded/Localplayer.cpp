#include "include.h"


DWORD Localplayer::Get()
{
	Engine E;
	return *(DWORD*)(E.GameModule() + dwLocalPlayer);
}

bool Localplayer::Exists()
{
	Engine E;
	if (*(DWORD*)(E.GameModule() + dwLocalPlayer))
	{
		return true;
	}
	return false;
}
void Localplayer::ForceJump()
{
	Engine E;
	*(DWORD*)(E.GameModule() + dwForceJump) = 6;
}