#include "MainMenu.h"
#include "SettingsMenu.h"
#include ".\sql\headers\Database.h"
#include "CredHandler.h"

#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;

[STAThreadAttribute]

void main(array<String^>^ args) {
	if (!CredHandler::parseCreds()) {
		MessageBox::Show("Cannot read env variables", "Critical error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}

	if (!Database::getInstance().connectToDB()) {
		MessageBox::Show("Connection to database failed", "Critical error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//MetalCalculator::MainMenu form;
	MetalCalculator::SettingsMenu form;
	Application::Run(% form);
}