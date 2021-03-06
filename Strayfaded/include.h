#pragma once
#include <Windows.h>

// Extra Config
#define MENU_KB VK_TAB
#define UNINJECT_KB VK_DELETE


// DirectX
#include <d3dx9.h>
#include <d3d9.h>

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

// Imgui
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx9.h"


//Settings
#include "Settings.h"
USettings Settings;

// Hook/Drawing
#include "DirectX.h"
#include "Hook.h"
#include "Drawing.h"

//Offset
#include "csgo.hpp"
using namespace hazedumper::netvars;
using namespace hazedumper::signatures;

//CLasses
#include "Engine.h"
#include "Localplayer.h"

//Modules

#include "Bhop.h"