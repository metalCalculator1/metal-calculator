#include "MainMenu.h"

namespace MetalCalculator
{
	// Events:
	System::Void MainMenu::onMenuLabelClicked(System::Object^ sender, System::EventArgs^ e)
	{
		ChangeLayout(sender);
	}
	

	// Functions:
	System::Void MainMenu::ChangeLayout(System::Object^ sender)
	{
		Label^ label = safe_cast<Label^>(sender);
		if (label == nullptr) return;

		for each (Control ^ control in parentPanel->Controls)
		{
			if (dynamic_cast<Panel^>(control) != nullptr) // Check if the control is a Panel
			{
				Console::WriteLine(control->Name);

				if (label->Tag == control->Tag)
				{
					BringPanelToFront(control);
				}
			}
		}
	}
	System::Void MainMenu::BringPanelToFront(Control^ panel)
	{
		for (size_t i = 0; i < parentPanel->Controls->Count; i++)
		{
			panel->BringToFront();
		}
	}
}