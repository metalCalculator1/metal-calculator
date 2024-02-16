#include "MainForm.h"

namespace MetalCalculator
{
	// Events:
	System::Void MainForm::onMenuLabelClicked(System::Object^ sender, System::EventArgs^ e)
	{
		ChangeLayout(sender);
	}
	System::Void MainForm::onCalculateBtnClick(System::Object^ sender, System::EventArgs^ e)
	{
		CalculateNeededFerro();

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

	System::Void MainForm::sm_save_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try {
			settingQueries->updateSettings(
				System::Convert::ToInt16(sm_fmn78_input_1->Text),
				System::Convert::ToInt16(sm_fmn78_input_2->Text),
				System::Convert::ToInt16(sm_fs45_input->Text),
				System::Convert::ToInt16(sm_mn95_input->Text),
				System::Convert::ToInt16(sm_carbon_input->Text)
			);
		}
		catch (const System::FormatException^ e) {
			MessageBox::Show("Невірний формат даних", "Input error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		initWriteInputs();
	}

	System::Void MainForm::sm_restore_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		initWriteInputs();
	}

	System::Void MainForm::sm_add_mark_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CreateMetal^ secondForm = gcnew CreateMetal();

		secondForm->ShowDialog();
	}

	System::Void MainForm::sm_edit_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		return System::Void();
	}
}