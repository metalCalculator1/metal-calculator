#include "UpdateMetal.h"

namespace MetalCalculator 
{
	System::Void UpdateMetal::save_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (String::IsNullOrWhiteSpace(c_input->Text) ||
			String::IsNullOrWhiteSpace(si_input->Text) ||
			String::IsNullOrWhiteSpace(mn_input->Text) ||
			String::IsNullOrWhiteSpace(p_input->Text) ||
			String::IsNullOrWhiteSpace(s_input->Text) ||
			String::IsNullOrWhiteSpace(cu_input->Text) ||
			String::IsNullOrWhiteSpace(cr_input->Text) ||
			String::IsNullOrWhiteSpace(ni_input->Text) ||
			String::IsNullOrWhiteSpace(name_input->Text)) {

			MessageBox::Show("Please fill in all the fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		float c, si, mn, p, s, cu, cr, ni;

		if (!float::TryParse(c_input->Text, c) ||
			!float::TryParse(si_input->Text, si) ||
			!float::TryParse(mn_input->Text, mn) ||
			!float::TryParse(p_input->Text, p) ||
			!float::TryParse(s_input->Text, s) ||
			!float::TryParse(cu_input->Text, cu) ||
			!float::TryParse(cr_input->Text, cr) ||
			!float::TryParse(ni_input->Text, ni)) {

			MessageBox::Show("Invalid input format for numeric fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		MetalModel^ metalToUpdate = gcnew MetalModel(name_input->Text, c, si, mn, p, s, cu, cr, ni);
		if (!metalQueries->updateMetalByName(alloySelect_btn->Text, metalToUpdate)) {
			MessageBox::Show("Cannot be two same names", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		this->Close();
	}

	System::Void UpdateMetal::alloySelect_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectMetal^ selectForm = gcnew SelectMetal(nullptr, this, nullptr);
		selectForm->ShowDialog();
	}

	void UpdateMetal::UpdateMetalParameters(MetalModel^ metal)
	{
		Console::WriteLine("Updating metals");
		metalToUpdate = metal;

		name_input->Text = metal->name;

		c_input->Text = metal->c.ToString();
		ni_input->Text = metal->ni.ToString();
		cr_input->Text = metal->cr.ToString();
		cu_input->Text = metal->cu.ToString();
		s_input->Text = metal->s.ToString();
		p_input->Text = metal->p.ToString();
		mn_input->Text = metal->mn.ToString();
		si_input->Text = metal->si.ToString();
	}
}