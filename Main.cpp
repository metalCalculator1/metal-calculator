#include "MainMenu.h"
#include "SettingsMenu.h"
#include ".\sql\headers\Database.h"
#include "./support/headers/CredHandler.h"

#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;

[STAThreadAttribute]

void main(array<String^>^ args) {
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
	//MetalCalculator::MainMenu form;
	MetalCalculator::SettingsMenu form;
	Application::Run(% form);
}