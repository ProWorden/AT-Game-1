#include "App.h"

App::App()
	:
	wnd(800, 600, "My Window")
{}

int App::Start()
{

	while (true)
	{
		//process all messages but dont block
		if (const auto ecode = Window::ProcessMessages())
		{
			//if exit code has a value it returns true
			return *ecode;
		}

		DoFrame();
	}


	
}

void App::DoFrame()
{
	wnd.Gfx().EndFrame();
}