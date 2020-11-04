#pragma once
#include "Window.h"

class App
{
public:
	App();
	int Start();
private:
	void DoFrame();
	Window wnd;
};

