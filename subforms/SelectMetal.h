#pragma once

#include "MetalQueries.h"
#include "MetalModel.h"
#include "MainForm.h"

namespace MetalCalculator
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class SelectMetal : public System::Windows::Forms::Form
	{
	public:
		SelectMetal(MainForm^ i_mainForm, ref class UpdateMetal^ i_updateForm)
		{
			InitializeComponent();

			this->mainForm = i_mainForm;
			this->updateForm = i_updateForm;

			metalQueries = new MetalQueries();

			metalsList = metalQueries->getMetals();
			populateMetalListView();
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
		// MEMBER VARIABLES
		MainForm^ mainForm;
		UpdateMetal^ updateForm;
		Generic::List<MetalModel^>^ metalsList;
		MetalQueries* metalQueries;

		// UI COMPONENTS
		System::ComponentModel::Container^ components;
		System::Windows::Forms::ListView^ MetalsListView;
		System::Windows::Forms::ColumnHeader^ Metal;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->MetalsListView = (gcnew System::Windows::Forms::ListView());
			this->Metal = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// MetalsListView
			// 
			this->MetalsListView->Activation = System::Windows::Forms::ItemActivation::TwoClick;
			this->MetalsListView->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MetalsListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->Metal });
			this->MetalsListView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MetalsListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MetalsListView->GridLines = true;
			this->MetalsListView->HideSelection = false;
			this->MetalsListView->Location = System::Drawing::Point(0, 0);
			this->MetalsListView->Name = L"MetalsListView";
			this->MetalsListView->Size = System::Drawing::Size(542, 486);
			this->MetalsListView->TabIndex = 0;
			this->MetalsListView->UseCompatibleStateImageBehavior = false;
			this->MetalsListView->View = System::Windows::Forms::View::Details;
			this->MetalsListView->ItemActivate += gcnew System::EventHandler(this, &SelectMetal::MetalsListView_ItemActivate);
			// 
			// Metal
			// 
			this->Metal->Text = L"Metal";
			this->Metal->Width = 560;
			// 
			// SelectMetal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 486);
			this->Controls->Add(this->MetalsListView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"SelectMetal";
			this->Text = L"SelectMetal";
			this->ResumeLayout(false);

		}

#pragma endregion
	public:
		void populateMetalListView();

		void showMetalOnConsole(ListViewItem^ item);

		System::Void MetalsListView_ItemActivate(System::Object^ sender, System::EventArgs^ e);
	};
}