#pragma once

#include <list>
#include "ImGUI/imgui.h"
#include "ImGUI/imgui_internal.h"
#include "ImGUI/imgui_impl_sdl.h"
#include "settings.h"
#include "hacks.h"

namespace UI
{
	extern bool isVisible;

	void SetVisible(bool visible);
	void SwapWindow();
	void SetupColors();
	void SetupWindows();
	bool ColorPicker(float* col, bool alphabar);
	bool ColorPicker3(float col[3]);
	bool ColorPicker4(float col[4]);
	bool KeyBindButton(ButtonCode_t* key);
}