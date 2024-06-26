#include "MainForm.h"
#include "Database.h"
#include "SelectMetal.h"
#include "CredHandler.h"

#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	// AllocConsole();

	if (!CredHandler::parseCreds()) {
		MessageBox::Show("��������� ������� ��������� �����", "Critical error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
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