#include "MainPage.h"
#include<Windows.h>
using namespace VotingSystem;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainPage());
	return 0;
}

