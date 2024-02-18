#include "MainForm.h"
#include "SelectMetal.h"

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

	System::Void MainForm::sm_save_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try {
			// Consider taking model object as a parameter.
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


	System::Void MainForm::onCalculateBtnClick(System::Object^ sender, System::EventArgs^ e)
	{
		CalculateNeededFerro();

	}

	void MainForm::FillGoalHimSklad()
	{
		HimSkladGoalDic["C"]->Text = goalHimSkladModel->c.ToString();
		HimSkladGoalDic["Si"]->Text = goalHimSkladModel->si.ToString();
		HimSkladGoalDic["Mn"]->Text = goalHimSkladModel->mn.ToString();
		HimSkladGoalDic["P"]->Text = goalHimSkladModel->p.ToString();
		HimSkladGoalDic["S"]->Text = goalHimSkladModel->s.ToString();
		HimSkladGoalDic["Cu"]->Text = goalHimSkladModel->cu.ToString();
		HimSkladGoalDic["Cr"]->Text = goalHimSkladModel->cr.ToString();
		HimSkladGoalDic["Ni"]->Text = goalHimSkladModel->ni.ToString();
	}

	void MainForm::CalculateNeededFerro()
	{
		//  Globalization::CultureInfo::InvariantCulture might be needed.
		float Si_Proba = Single::Parse(HimSkladProbaDic["Si"]->Text);
		float Mn_Proba = Single::Parse(HimSkladProbaDic["Mn"]->Text);
		float C_Proba = Single::Parse(HimSkladProbaDic["C"]->Text);

		float Si_Goal = goalHimSkladModel->si;
		float Mn_Goal = goalHimSkladModel->mn;
		float C_Goal = goalHimSkladModel->c;

		mm_FC45_value_lbl->Text = String::Format("{0:F1}", Calc->CalculateFC95(metalMass, Si_Proba, Si_Goal));
		mm_Mn95_value_lbl->Text = String::Format("{0:F1}", Calc->CalculateMn95(metalMass, Mn_Proba, Mn_Goal, C_Proba, C_Goal));
		mm_FMn78_value_lbl->Text = String::Format("{0:F1}", Calc->CalculateFMn78(metalMass, Mn_Proba, Mn_Goal, C_Proba, C_Goal));
		mm_vulgecevm_value_lbl->Text = String::Format("{0:F1}", Calc->CalculateVuglecevm(metalMass, C_Proba, C_Goal));
	}

	void MainForm::SelectElementsByName(String^ metalName)
	{
		goalHimSkladModel = mainQueries->getElementByName(metalName);
	}

	Dictionary<String^, TextBox^>^ MainForm::GetHimSkladFromTablePanel(TableLayoutPanel^ tableLayoutPanel)
	{
		Dictionary<String^, TextBox^>^ HimSkladDic = gcnew Dictionary<String^, TextBox^>();

		for each (Control ^ control in tableLayoutPanel->Controls) {
			TableLayoutPanelCellPosition pos = tableLayoutPanel->GetPositionFromControl(control);

			// Checking if the control is a label in the 0th row
			if (pos.Row == 0 && dynamic_cast<Label^>(control) != nullptr)
			{
				// Checking the same column but 1 row below
				TableLayoutPanelCellPosition textBoxPos(pos.Column, pos.Row + 1);

				// Finding the textbox at the calculated position
				Control^ textBoxControl = tableLayoutPanel->GetControlFromPosition(textBoxPos.Column, textBoxPos.Row);
				TextBox^ textBox = dynamic_cast<TextBox^>(textBoxControl);

				if (textBox != nullptr)
				{
					HimSkladDic->Add(control->Text, textBox);
				}
			}
		}

		return HimSkladDic;
	}

	System::Void MainForm::onMetalKGLeave(System::Object^ sender, System::EventArgs^ e)
	{
		float value;
		if (System::Single::TryParse(mm_metalKG_TB->Text, value))
		{
			metalMass = value;
		}
		else
		{
			MessageBox::Show("Введіть коректне число");
		}
	}

	System::Void MainForm::mm_alloySelect_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectMetal^ selectForm = gcnew SelectMetal();
		selectForm->ShowDialog();
	}
};