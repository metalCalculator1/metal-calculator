#include "SelectMetal.h"
#include "UpdateMetal.h"
#include "MetalQueries.h"

namespace MetalCalculator
{
	void SelectMetal::populateMetalListView()
	{
		for each (MetalModel^ metal in metalsList)
		{
			ListViewItem^ item = gcnew ListViewItem(metal->name);
			item->SubItems->Add(metal->name);
			item->Tag = metal;

			MetalsListView->Items->Add(item);
		}
	}

	void SelectMetal::showMetalOnConsole(ListViewItem^ item)
	{
		MetalModel^ metal = safe_cast<MetalModel^>(item->Tag);

		String^ debugMessage = String::Format("Name: {0}, C: {1}, Si: {2}, Mn: {3}, P: {4}, S: {5}, Cu: {6}, Cr: {7}, Ni: {8}",
			metal->name, metal->c, metal->si, metal->mn, metal->p, metal->s, metal->cu, metal->cr, metal->ni);

		Console::WriteLine(debugMessage);
	}

	System::Void SelectMetal::MetalsListView_ItemActivate(System::Object^ sender, System::EventArgs^ e)
	{
		ListViewItem^ item;

		item = MetalsListView->SelectedItems[0];
		showMetalOnConsole(item);

		MetalModel^ metal = safe_cast<MetalModel^>(item->Tag);

		if (mainForm)
		{
			mainForm->SetGoalHimSklad(metal);
		}
		else if (updateForm)
		{
			updateForm->UpdateMetalParameters(metal);
		}
	}
}