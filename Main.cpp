#include "BaseMenu.h"
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

	// TODO: Придумати кращий спосіб заповнити formTypes.
	Manager->RegisterFormType(MetalCalculator::SettingsMenu::typeid->Name, MetalCalculator::SettingsMenu::typeid);
	Manager->RegisterFormType(MetalCalculator::CreateMetal::typeid->Name, MetalCalculator::CreateMetal::typeid);
	Manager->RegisterFormType(MetalCalculator::BaseMenu::typeid->Name, MetalCalculator::BaseMenu::typeid);

	Manager->ShowForm("BaseMenu");
}