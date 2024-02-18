#pragma once

#include "MetalQueries.h"
#include "MetalModel.h"

namespace MetalCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SelectMetal
	/// </summary>
	public ref class SelectMetal : public System::Windows::Forms::Form
	{
	public:
		SelectMetal(void)
		{
			InitializeComponent();

			metalQueries = new MetalQueries();

			metalsList = metalQueries->getMetals();
			populateMetalListView();
			// CreatePanels();
		}

	protected:
		~SelectMetal()
		{
			if (components)
			{
				delete components;
			}

			if (metalQueries) {
				delete metalQueries;
				metalQueries = nullptr;
			}
		}

	private:
		Generic::List<MetalModel^>^ metalsList;
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ListView^ MetalsListView;

	private: System::Windows::Forms::ColumnHeader^ Metal;







		   MetalQueries* metalQueries;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->MetalsListView = (gcnew System::Windows::Forms::ListView());
			this->Metal = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// MetalsListView
			// 
			this->MetalsListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->Metal });
			this->MetalsListView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MetalsListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MetalsListView->GridLines = true;
			this->MetalsListView->HideSelection = false;
			this->MetalsListView->Location = System::Drawing::Point(0, 0);
			this->MetalsListView->Name = L"MetalsListView";
			this->MetalsListView->Size = System::Drawing::Size(278, 402);
			this->MetalsListView->TabIndex = 0;
			this->MetalsListView->UseCompatibleStateImageBehavior = false;
			this->MetalsListView->View = System::Windows::Forms::View::Details;
			// 
			// Metal
			// 
			this->Metal->Text = L"Metal";
			this->Metal->Width = 284;
			// 
			// SelectMetal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 402);
			this->Controls->Add(this->MetalsListView);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"SelectMetal";
			this->Text = L"SelectMetal";
			this->ResumeLayout(false);

		}


	public:
		//void CreatePanels()
		//{
		//	for (size_t i = 0; i < metalsList->Count; ++i)
		//	{
		//		System::Windows::Forms::Panel^ panel = gcnew System::Windows::Forms::Panel();
		//		panel->Dock = System::Windows::Forms::DockStyle::Top;
		//		panel->Height = 50;

		//		System::Windows::Forms::Button^ button = gcnew System::Windows::Forms::Button();

		//		button->Text = metalsList[i]->name;

		//		button->Size = System::Drawing::Size(100, 30);  // Set the desired size
		//		button->Location = System::Drawing::Point((panel->Width - button->Width) / 2, (panel->Height - button->Height) / 2);

		//		panel->Controls->Add(button);

		//		this->Controls->Add(panel);
		//	}
		//}
		void populateMetalListView()
		{
			for each (MetalModel^ metal in metalsList)
			{
				ListViewItem^ item = gcnew ListViewItem(metal->name);
				item->SubItems->Add(metal->id.ToString());
				item->Tag = metal;

				MetalsListView->Items->Add(item);
			}
		}
#pragma endregion
	};
}
