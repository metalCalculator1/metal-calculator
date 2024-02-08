#include "MainMenu.h"
#include "SettingsMenu.h"
#include "Database.h"
#include "CredHandler.h"
#include "WindowManager.h"

#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;

[STAThreadAttribute]

void main(array<String^>^ args) 
{
	if (!CredHandler::parseCreds()) {
		MessageBox::Show("Неможливо зчитати приховані змінні", "Critical error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}

	if (!Database::getInstance().connectToDB()) {
		MessageBox::Show("", "Critical error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WindowManager^ Manager = WindowManager::GetInstance();
	Manager->RegisterFormType("MainMenu", MetalCalculator::MainMenu::typeid);
	Manager->RegisterFormType("SettingsMenu", MetalCalculator::SettingsMenu::typeid);

	// Application::Run();
	// MetalCalculator::SettingsMenu^ SettingsForm = gcnew MetalCalculator::SettingsMenu();
	Manager->ShowForm("SettingsMenu");

	// SettingsForm->Show();
}