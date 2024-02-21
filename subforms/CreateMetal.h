#pragma once

#include <MetalQueries.h>
#include <MetalModel.h>

namespace MetalCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CreateMetal : public System::Windows::Forms::Form
	{
	public:
		CreateMetal(void)
		{
			InitializeComponent();

			metalQueries = new MetalQueries();
		}

	protected:
		~CreateMetal()
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
		MetalQueries* metalQueries;

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ ni_input;
	private: System::Windows::Forms::TextBox^ cr_input;
	private: System::Windows::Forms::TextBox^ cu_input;
	private: System::Windows::Forms::TextBox^ s_input;
	private: System::Windows::Forms::TextBox^ p_input;
	private: System::Windows::Forms::TextBox^ mn_input;
	private: System::Windows::Forms::TextBox^ si_input;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ c_input;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::TextBox^ name_input;
	private: System::Windows::Forms::ComboBox^ metalTypeSelector;

	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ni_input = (gcnew System::Windows::Forms::TextBox());
			this->cr_input = (gcnew System::Windows::Forms::TextBox());
			this->cu_input = (gcnew System::Windows::Forms::TextBox());
			this->s_input = (gcnew System::Windows::Forms::TextBox());
			this->p_input = (gcnew System::Windows::Forms::TextBox());
			this->mn_input = (gcnew System::Windows::Forms::TextBox());
			this->si_input = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->c_input = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->name_input = (gcnew System::Windows::Forms::TextBox());
			this->metalTypeSelector = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 2, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(774, 50);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(544, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Додати марки металу";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 10;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->ni_input, 8, 1);
			this->tableLayoutPanel2->Controls->Add(this->cr_input, 7, 1);
			this->tableLayoutPanel2->Controls->Add(this->cu_input, 6, 1);
			this->tableLayoutPanel2->Controls->Add(this->s_input, 5, 1);
			this->tableLayoutPanel2->Controls->Add(this->p_input, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->mn_input, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->si_input, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->label10, 8, 0);
			this->tableLayoutPanel2->Controls->Add(this->label9, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->label8, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->label7, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->label6, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->c_input, 1, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 50);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.75F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.25F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(774, 102);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// ni_input
			// 
			this->ni_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ni_input->Location = System::Drawing::Point(540, 52);
			this->ni_input->Multiline = true;
			this->ni_input->Name = L"ni_input";
			this->ni_input->Size = System::Drawing::Size(44, 47);
			this->ni_input->TabIndex = 19;
			// 
			// cr_input
			// 
			this->cr_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cr_input->Location = System::Drawing::Point(490, 52);
			this->cr_input->Multiline = true;
			this->cr_input->Name = L"cr_input";
			this->cr_input->Size = System::Drawing::Size(44, 47);
			this->cr_input->TabIndex = 18;
			// 
			// cu_input
			// 
			this->cu_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cu_input->Location = System::Drawing::Point(440, 52);
			this->cu_input->Multiline = true;
			this->cu_input->Name = L"cu_input";
			this->cu_input->Size = System::Drawing::Size(44, 47);
			this->cu_input->TabIndex = 17;
			// 
			// s_input
			// 
			this->s_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->s_input->Location = System::Drawing::Point(390, 52);
			this->s_input->Multiline = true;
			this->s_input->Name = L"s_input";
			this->s_input->Size = System::Drawing::Size(44, 47);
			this->s_input->TabIndex = 16;
			// 
			// p_input
			// 
			this->p_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->p_input->Location = System::Drawing::Point(340, 52);
			this->p_input->Multiline = true;
			this->p_input->Name = L"p_input";
			this->p_input->Size = System::Drawing::Size(44, 47);
			this->p_input->TabIndex = 15;
			// 
			// mn_input
			// 
			this->mn_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mn_input->Location = System::Drawing::Point(290, 52);
			this->mn_input->Multiline = true;
			this->mn_input->Name = L"mn_input";
			this->mn_input->Size = System::Drawing::Size(44, 47);
			this->mn_input->TabIndex = 14;
			// 
			// si_input
			// 
			this->si_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->si_input->Location = System::Drawing::Point(240, 52);
			this->si_input->Multiline = true;
			this->si_input->Name = L"si_input";
			this->si_input->Size = System::Drawing::Size(44, 47);
			this->si_input->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(540, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 49);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Ni";
			this->label10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(490, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 49);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Cr";
			this->label9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(440, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 49);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Cu";
			this->label8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(390, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 49);
			this->label7->TabIndex = 5;
			this->label7->Text = L"S";
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(340, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 49);
			this->label6->TabIndex = 4;
			this->label6->Text = L"P";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(290, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 49);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Mn";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(240, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 49);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Si";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(190, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 49);
			this->label2->TabIndex = 0;
			this->label2->Text = L"C";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// c_input
			// 
			this->c_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->c_input->Location = System::Drawing::Point(190, 52);
			this->c_input->Multiline = true;
			this->c_input->Name = L"c_input";
			this->c_input->Size = System::Drawing::Size(44, 47);
			this->c_input->TabIndex = 9;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 5;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->add_btn, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->name_input, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->metalTypeSelector, 2, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 152);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(774, 86);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(190, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 51);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Назва металу";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// add_btn
			// 
			this->add_btn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_btn->Location = System::Drawing::Point(440, 54);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(144, 29);
			this->add_btn->TabIndex = 1;
			this->add_btn->Text = L"Додати";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &CreateMetal::add_btn_Click);
			// 
			// name_input
			// 
			this->name_input->Dock = System::Windows::Forms::DockStyle::Top;
			this->name_input->Location = System::Drawing::Point(190, 54);
			this->name_input->Multiline = true;
			this->name_input->Name = L"name_input";
			this->name_input->Size = System::Drawing::Size(144, 20);
			this->name_input->TabIndex = 2;
			// 
			// metalTypeSelector
			// 
			this->metalTypeSelector->FormattingEnabled = true;
			this->metalTypeSelector->Location = System::Drawing::Point(340, 54);
			this->metalTypeSelector->Name = L"metalTypeSelector";
			this->metalTypeSelector->Size = System::Drawing::Size(94, 21);
			this->metalTypeSelector->TabIndex = 3;
			this->metalTypeSelector->Items->Add("Сталь");
			this->metalTypeSelector->Items->Add("Чавун");
			this->metalTypeSelector->SelectedIndex = 0;
			// 
			// CreateMetal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 261);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(600, 300);
			this->Name = L"CreateMetal";
			this->Text = L"CreateMetal";
			this->TopMost = true;
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}