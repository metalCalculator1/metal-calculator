#include "DeleteMetal.h"

namespace MetalCalculator {
	System::Void DeleteMetal::alloySelect_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectMetal^ selectForm = gcnew SelectMetal(nullptr, nullptr, this);
		selectForm->ShowDialog();
	};

	System::Void DeleteMetal::drop_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!metalToRemove) {
			MessageBox::Show("Please select metal to remove", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (!metalQueries->dropMetalByName(metalToRemove->name)) {
			MessageBox::Show("Record doesnt exist or smth went wrong", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		this->Close();
	};

	void DeleteMetal::ShowMetalParameters(MetalModel^ metal)
	{
		Console::WriteLine("Deleting metals");
		metalToRemove = metal;

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