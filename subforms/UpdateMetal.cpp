#include "UpdateMetal.h"

namespace MetalCalculator 
{
	System::Void UpdateMetal::save_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		metalToUpdate->c = Single::Parse(c_input->Text);
		metalToUpdate->ni = Single::Parse(ni_input->Text);
		metalToUpdate->cr = Single::Parse(cr_input->Text);
		metalToUpdate->cu = Single::Parse(cu_input->Text);
		metalToUpdate->s = Single::Parse(s_input->Text);
		metalToUpdate->p = Single::Parse(p_input->Text);
		metalToUpdate->mn = Single::Parse(mn_input->Text);
		metalToUpdate->si = Single::Parse(si_input->Text);

		Console::WriteLine(metalToUpdate->name);
		metalQueries->updateMetalByName(metalToUpdate->name, metalToUpdate);
	}

	System::Void UpdateMetal::alloySelect_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectMetal^ selectForm = gcnew SelectMetal(nullptr, this);
		selectForm->ShowDialog();
	}

	void UpdateMetal::UpdateMetalParameters(MetalModel^ metal)
	{
		Console::WriteLine("Update");
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