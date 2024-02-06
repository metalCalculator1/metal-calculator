#include "MainMenu.h"
#include "SettingsMenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//MetalCalculator::MainMenu form;
	MetalCalculator::SettingsMenu form;
	Application::Run(% form);
}