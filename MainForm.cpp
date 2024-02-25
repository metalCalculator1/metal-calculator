#include "MainForm.h"
#include "SelectMetal.h"
#include "CreateMetal.h"
#include "UpdateMetal.h"
#include "DeleteMetal.h"

namespace MetalCalculator
{
	// Events:
	System::Void MainForm::onMenuLabelClicked(System::Object^ sender, System::EventArgs^ e)
	{
		ChangeLayout(sender);
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

			Calculator::GetInstance()->SetZasvoyenia();
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
		CreateMetal^ addMetalForm = gcnew CreateMetal();

		addMetalForm->ShowDialog();
	}
	System::Void MainForm::sm_delete_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DeleteMetal^ removeMetalForm = gcnew DeleteMetal();

		removeMetalForm->ShowDialog();
	}
	System::Void MainForm::sm_edit_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		UpdateMetal^ updateMetalForm = gcnew UpdateMetal();
		updateMetalForm->ShowDialog();
	}
	System::Void MainForm::onCalculateBtnClick(System::Object^ sender, System::EventArgs^ e)
	{
		CalculateNeededFerro();

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
		SelectMetal^ selectForm = gcnew SelectMetal(this, nullptr, nullptr);
		selectForm->ShowDialog();
	}
	System::Void MainForm::hm_previous_page_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (currentPageIndex > 0)
		{
			currentPageIndex--;
			LoadPage();
		}
	}
	System::Void MainForm::hm_next_page_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((currentPageIndex + 1) * pageSize < historyData->Rows->Count)
		{
			currentPageIndex++;
			LoadPage();
		}
	}
	System::Void MainForm::hm_plavka_id_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int meltingID;
		if (Int32::TryParse(hm_filter_field->Text, meltingID))
		{
			historyData->DefaultView->RowFilter = "[Номер Плавки] = " + meltingID;
		}
		else
		{
			MessageBox::Show("Введіть коректний номер плавки.");
		}
		LoadPage();
	}
	System::Void MainForm::hm_alloy_select_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int metalID;
		if (Int32::TryParse(hm_filter_field->Text, metalID))
		{
			historyData->DefaultView->RowFilter = "[ID Металу] = " + metalID;
		}
		else
		{
			MessageBox::Show("Введіть коректний номер металу.");
		}
		currentPageIndex = 0;
		LoadPage();
	}
	System::Void MainForm::hm_date_select_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// TODO: make this button to actually change metal type
		DateTime dateValue;
		if (DateTime::TryParse(hm_filter_field->Text, dateValue))
		{
			String^ formattedDate = dateValue.ToString("yyyy-MM-dd"); // Ensure format matches your DataTable
			String^ filterExpression = "[Дата] LIKE '" + formattedDate + "%'";
			historyData->DefaultView->RowFilter = filterExpression;
		}
		else
		{
			MessageBox::Show("Please enter a valid Date in format YYYY-MM-DD.");
		}
		currentPageIndex = 0; // Assuming you have implemented pagination
		LoadPage(); // Reload the page view
	}

	System::Void MainForm::dateTimePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		DateTime startDate = startDatePicker->Value.Date + startTimePicker->Value.TimeOfDay;
		DateTime endDate = endDatePicker->Value.Date + endTimePicker->Value.TimeOfDay;

		if (startDate <= endDate)
		{
			String^ formattedStartDate = startDate.ToString("yyyy-MM-dd HH:mm:ss");
			String^ formattedEndDate = endDate.ToString("yyyy-MM-dd HH:mm:ss");

			String^ filterExpression = "[Дата] >= '" + formattedStartDate + "' AND [Дата] <= '" + formattedEndDate + "'";
			historyData->DefaultView->RowFilter = filterExpression;
		}
		else
		{
			MessageBox::Show("End date must be equal to or later than start date.");
		}

		currentPageIndex = 0;
		LoadPage();
	}

	System::Void MainForm::hm_filters_reset_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ResetFilters();
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


	// Main Menu HimSklad functions
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
		// Globalization::CultureInfo::InvariantCulture might be needed.

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

		String^ resultString = FormatNeededFerro(mm_FC45_value_lbl->Text, mm_Mn95_value_lbl->Text, mm_FMn78_value_lbl->Text, mm_vulgecevm_value_lbl->Text);
		
		int meltingID = Single::Parse(mm_meltingID_TB->Text);
		InsertIntoDatabase(meltingID, 5, metalMass, resultString);
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
	System::Void MainForm::SetGoalHimSklad(MetalModel^ newMetal)
	{
		goalHimSkladModel = newMetal;
		FillGoalHimSklad();
	}
	

	// History Menu Data
	void MainForm::BindData(DataGridView^ gridView)
	{
		PGconn* conn = Database::getInstance().getConn();
		PGresult* res = PQexec(conn, "SELECT id, melting_number, metal_id, weight, required_metal_numbers, created_at FROM history");

		if (PQresultStatus(res) != PGRES_TUPLES_OK)
		{
			MessageBox::Show("SELECT command did not return tuples properly: " + gcnew String(PQerrorMessage(conn)));
			PQclear(res);
			PQfinish(conn);
			return;
		}

		try
		{
			historyData = ConvertToDataTable(res);
			if (historyData == nullptr)
			{
				throw gcnew System::Exception("Failed to convert query result to DataTable.");
			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Error processing data: " + ex->Message);
			PQclear(res);
			PQfinish(conn);
			return;
		}

		gridView->DataSource = historyData;

		PQclear(res);
	}
	void MainForm::LoadData()
	{
		BindData(this->hm_data_grid);
	}
	void MainForm::CreateColumnsForHistoryDataTable(DataTable^ table)
	{
		table->Columns->Add("ID", int::typeid);
		table->Columns->Add("Номер Плавки", String::typeid);
		table->Columns->Add("ID Металу", String::typeid);
		table->Columns->Add("Вага", String::typeid);
		table->Columns->Add("Необхідна к-сть феросплавів", String::typeid);
		table->Columns->Add("Дата", String::typeid);
	}
	DataTable^ MainForm::ConvertToDataTable(PGresult* res)
	{
		// Check if the PGresult pointer is null
		if (res == nullptr)
		{
			throw gcnew ArgumentNullException("res", "PGresult pointer is null.");
		}

		DataTable^ table = gcnew DataTable("History");

		CreateColumnsForHistoryDataTable(table);
		PopulateDataTableFromPGResult(table, res);

		return table;
	}
	void MainForm::PopulateDataTableFromPGResult(DataTable^ table, PGresult* res)
	{
		int nFields = PQnfields(res);
		int nRows = PQntuples(res);

		for (int i = 0; i < nRows; i++)
		{
			DataRow^ row = table->NewRow();

			for (int j = 0; j < nFields; j++)
			{
				char* val = PQgetvalue(res, i, j);

				if (val == nullptr)
				{
					row[j] = DBNull::Value;
				}
				else
				{
					// Get column type
					DataColumn^ column = table->Columns[j];
					Type^ columnType = column->DataType;

					// Convert based on column type
					if (columnType == int::typeid)
					{
						int intValue = atoi(val);
						row[j] = intValue;
					}
					else if (columnType == String::typeid)
					{
						String^ value = Marshal::PtrToStringAnsi((IntPtr)val);
						row[j] = value;
					}
					else if (columnType == Double::typeid)
					{
						double doubleValue = atof(val);
						row[j] = doubleValue;
					}
					else
					{
						row[j] = DBNull::Value;
						// log an arror or hande an exception
					}
				}
			}
			table->Rows->Add(row);
		}
	}
	void MainForm::InitializePagination()
	{
		currentPageTable = gcnew DataTable();
		currentPageTable = historyData->Clone();

		hm_data_grid->DataSource = nullptr;
		hm_data_grid->Rows->Clear();
		hm_data_grid->Columns->Clear();

		LoadPage();
	}
	void MainForm::LoadPage()
	{
		int startIndex = currentPageIndex * pageSize;
		int endIndex = Math::Min(startIndex + pageSize - 1, historyData->DefaultView->Count - 1);

		currentPageTable->Rows->Clear();

		for (int i = startIndex; i <= endIndex; i++)
		{
			DataRowView^ rowView = historyData->DefaultView[i];
			currentPageTable->ImportRow(rowView->Row);
		}

		hm_data_grid->DataSource = currentPageTable;
	}
	void MainForm::ResetFilters()
	{
		historyData->DefaultView->RowFilter = "";
		currentPageIndex = 0;
		hm_data_grid->Refresh();
		LoadPage();
	}


	// Helper Functions:
	bool MainForm::IsPanelOnFront(Control^ panel)
	{
		int index = panel->Parent->Controls->GetChildIndex(panel);
		return index == 0;
	}
};