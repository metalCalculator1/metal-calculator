#include "SelectMetal.h"

namespace MetalCalculator
{
	void SelectMetal::populateMetalListView()
	{
		for each (MetalModel^ metal in metalsList)
		{
			ListViewItem^ item = gcnew ListViewItem(metal->name);
			item->SubItems->Add(metal->id.ToString());
			item->Tag = metal;

			MetalsListView->Items->Add(item);
		}
	}

	void SelectMetal::showMetalOnConsole(ListViewItem^ item)
	{
		MetalModel^ metal = safe_cast<MetalModel^>(item->Tag);

		String^ debugMessage = String::Format("ID: {0}, Name: {1}, C: {2}, Si: {3}, Mn: {4}, P: {5}, S: {6}, Cu: {7}, Cr: {8}, Ni: {9}",
			metal->id, metal->name, metal->c, metal->si, metal->mn, metal->p, metal->s, metal->cu, metal->cr, metal->ni);

		Console::WriteLine(debugMessage);
	}

	System::Void SelectMetal::MetalsListView_ItemActivate(System::Object^ sender, System::EventArgs^ e)
	{
		ListViewItem^ item;

		if (MetalsListView->SelectedItems->Count > 0)
		{
			item = MetalsListView->SelectedItems[0];
			showMetalOnConsole(item);
		}
	}
}