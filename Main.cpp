#include "MainForm.h"
#include "SettingsMenu.h"
#include "Database.h"
#include "CredHandler.h"
#include "template form/TemplateForm.h"

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

	Application::Run(gcnew MetalCalculator::MainForm);
}