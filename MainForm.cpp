#include "MainForm.h"

namespace MetalCalculator
{
	// Events:
	System::Void MainForm::onMenuLabelClicked(System::Object^ sender, System::EventArgs^ e)
	{
		ChangeLayout(sender);
	}



	// Functions:
	System::Void MainForm::ChangeLayout(System::Object^ sender)
	{
		Label^ label = safe_cast<Label^>(sender);
		if (label == nullptr)
		{
			return;
		}

		for each (Control ^ control in parentPanel->Controls)
		{
			if (dynamic_cast<Panel^>(control) == nullptr)
			{
				break;
			}

			if (label->Tag == control->Tag)
			{
				BringPanelToFront(control);
			}
		}
	}


	System::Void MainForm::BringPanelToFront(Control^ panel)
	{
		if (IsPanelOnFront(panel))
		{
			return;
		}

		for (size_t i = 0; i < parentPanel->Controls->Count; i++)
		{
			panel->BringToFront();
		}
	}


	// Helper Functions:
	bool MainForm::IsPanelOnFront(Control^ panel)
	{
		int index = panel->Parent->Controls->GetChildIndex(panel);
		return index == 0;
	}
}