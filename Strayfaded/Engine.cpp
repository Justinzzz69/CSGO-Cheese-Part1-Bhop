#include "include.h"

DWORD Engine::GameModule()
{
	return (DWORD)GetModuleHandleA("client.dll");
}

DWORD Engine::EngineModule()
{
	return (DWORD)GetModuleHandleA("engine.dll");
}