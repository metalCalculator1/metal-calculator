#pragma once

#include "../sql/headers/MetalQueries.h"
#include <cliext/vector>

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
			//
			//TODO: Add the constructor code here
			//
			metalQueries = new MetalQueries();

			std::vector<MetalModel> metalsStd = metalQueries->getMetals();

			metals = gcnew cliext::vector<MetalModel>(metalsStd.begin(), metalsStd.end());

			CreatePanels();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
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

		void CreatePanels()
		{
			for (size_t i = 0; i < metals->size(); ++i)
			{
				System::Windows::Forms::Panel^ panel = gcnew System::Windows::Forms::Panel();
				panel->Dock = System::Windows::Forms::DockStyle::Top;
				panel->Height = 50; 

				System::Windows::Forms::Button^ button = gcnew System::Windows::Forms::Button();
				button->Text = gcnew System::String(metals[i].name.c_str());
				button->Size = System::Drawing::Size(100, 30);  // Set the desired size
				button->Location = System::Drawing::Point((panel->Width - button->Width) / 2, (panel->Height - button->Height) / 2);

				panel->Controls->Add(button);

				this->Controls->Add(panel);
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		MetalQueries* metalQueries;
		cliext::vector<MetalModel>^ metals;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// SelectMetal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 261);
			this->Name = L"SelectMetal";
			this->Text = L"SelectMetal";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
