#pragma once

#include "SettingsQueries.h"
#include "SettingModel.h"
#include "CreateMetal.h"

namespace MetalCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class SettingsMenu : public System::Windows::Forms::Form
	{
	public:
		SettingsMenu(void)
		{
			InitializeComponent();

			settings = new SettingsModel();
			settingQueries = new SettingsQueries();
			initWriteInputs();
		}
	private:
		SettingsModel* settings;
		SettingsQueries* settingQueries;

		void initWriteInputs() {
			*settings = settingQueries->getSettings();

			this->fmn78_input_1->Text = settings->fmn_78_0.ToString();
			this->fmn78_input_2->Text = settings->fmn_78_1.ToString();
			this->fs45_input->Text = settings->fs_45.ToString();
			this->mn95_input->Text = settings->mn_95.ToString();
			this->carbon_input->Text = settings->carbon.ToString();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SettingsMenu()
		{
			if (components)
			{
				delete components;
			}

			if (settings) {
				delete settings;
				settings = nullptr;
			}

			if (settingQueries) {
				delete settingQueries;
				settingQueries = nullptr;
			}
		}
	private: System::Windows::Forms::Panel^ topPanel;
	protected:

	private: System::Windows::Forms::Panel^ logoPanel;
	private: System::Windows::Forms::Panel^ labelsPanel;
	private: System::Windows::Forms::TableLayoutPanel^ labelLayout;
	private: System::Windows::Forms::Label^ mainLabel;
	private: System::Windows::Forms::Label^ settingsLabel;
	private: System::Windows::Forms::Label^ historyLabel;
	private: System::Windows::Forms::Label^ fs45_l;
	private: System::Windows::Forms::Label^ mn95_l;
	private: System::Windows::Forms::Label^ carbon_l;
	private: System::Windows::Forms::TextBox^ fs45_input;
	private: System::Windows::Forms::TextBox^ mn95_input;
	private: System::Windows::Forms::TextBox^ carbon_input;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::Button^ restore_btn;
	private: System::Windows::Forms::Label^ steel_marks_label;
	private: System::Windows::Forms::Button^ add_mark_btn;
	private: System::Windows::Forms::Button^ edit_mark_btn;
	private: System::Windows::Forms::Button^ delete_mark_btn;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ fmn78_l;
	private: System::Windows::Forms::TextBox^ fmn78_input_2;
	private: System::Windows::Forms::TextBox^ fmn78_input_1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ chemical_comp_label;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsMenu::typeid));
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->labelsPanel = (gcnew System::Windows::Forms::Panel());
			this->labelLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->mainLabel = (gcnew System::Windows::Forms::Label());
			this->settingsLabel = (gcnew System::Windows::Forms::Label());
			this->historyLabel = (gcnew System::Windows::Forms::Label());
			this->logoPanel = (gcnew System::Windows::Forms::Panel());
			this->fs45_l = (gcnew System::Windows::Forms::Label());
			this->mn95_l = (gcnew System::Windows::Forms::Label());
			this->carbon_l = (gcnew System::Windows::Forms::Label());
			this->fs45_input = (gcnew System::Windows::Forms::TextBox());
			this->mn95_input = (gcnew System::Windows::Forms::TextBox());
			this->carbon_input = (gcnew System::Windows::Forms::TextBox());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->restore_btn = (gcnew System::Windows::Forms::Button());
			this->steel_marks_label = (gcnew System::Windows::Forms::Label());
			this->add_mark_btn = (gcnew System::Windows::Forms::Button());
			this->edit_mark_btn = (gcnew System::Windows::Forms::Button());
			this->delete_mark_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->fmn78_l = (gcnew System::Windows::Forms::Label());
			this->fmn78_input_2 = (gcnew System::Windows::Forms::TextBox());
			this->fmn78_input_1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->chemical_comp_label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->topPanel->SuspendLayout();
			this->labelsPanel->SuspendLayout();
			this->labelLayout->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::SystemColors::Control;
			this->topPanel->Controls->Add(this->labelsPanel);
			this->topPanel->Controls->Add(this->logoPanel);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Margin = System::Windows::Forms::Padding(2);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(789, 57);
			this->topPanel->TabIndex = 0;
			// 
			// labelsPanel
			// 
			this->labelsPanel->Controls->Add(this->labelLayout);
			this->labelsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelsPanel->Location = System::Drawing::Point(187, 0);
			this->labelsPanel->Margin = System::Windows::Forms::Padding(2);
			this->labelsPanel->Name = L"labelsPanel";
			this->labelsPanel->Size = System::Drawing::Size(602, 57);
			this->labelsPanel->TabIndex = 1;
			// 
			// labelLayout
			// 
			this->labelLayout->BackColor = System::Drawing::SystemColors::Control;
			this->labelLayout->ColumnCount = 3;
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 202)));
			this->labelLayout->Controls->Add(this->mainLabel, 0, 0);
			this->labelLayout->Controls->Add(this->settingsLabel, 1, 0);
			this->labelLayout->Controls->Add(this->historyLabel, 2, 0);
			this->labelLayout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelLayout->Location = System::Drawing::Point(0, 0);
			this->labelLayout->Margin = System::Windows::Forms::Padding(2);
			this->labelLayout->Name = L"labelLayout";
			this->labelLayout->RowCount = 1;
			this->labelLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->Size = System::Drawing::Size(602, 57);
			this->labelLayout->TabIndex = 0;
			// 
			// mainLabel
			// 
			this->mainLabel->AutoSize = true;
			this->mainLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainLabel->Location = System::Drawing::Point(2, 0);
			this->mainLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(196, 57);
			this->mainLabel->TabIndex = 0;
			this->mainLabel->Text = L"Головна";
			this->mainLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// settingsLabel
			// 
			this->settingsLabel->AutoSize = true;
			this->settingsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsLabel->Location = System::Drawing::Point(202, 0);
			this->settingsLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->settingsLabel->Name = L"settingsLabel";
			this->settingsLabel->Size = System::Drawing::Size(196, 57);
			this->settingsLabel->TabIndex = 1;
			this->settingsLabel->Text = L"Налаштування";
			this->settingsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// historyLabel
			// 
			this->historyLabel->AutoSize = true;
			this->historyLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->historyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyLabel->Location = System::Drawing::Point(402, 0);
			this->historyLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(198, 57);
			this->historyLabel->TabIndex = 2;
			this->historyLabel->Text = L"Історія";
			this->historyLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// logoPanel
			// 
			this->logoPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPanel.BackgroundImage")));
			this->logoPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logoPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->logoPanel->Location = System::Drawing::Point(0, 0);
			this->logoPanel->Margin = System::Windows::Forms::Padding(2);
			this->logoPanel->Name = L"logoPanel";
			this->logoPanel->Size = System::Drawing::Size(187, 57);
			this->logoPanel->TabIndex = 0;
			// 
			// fs45_l
			// 
			this->fs45_l->AutoSize = true;
			this->fs45_l->Dock = System::Windows::Forms::DockStyle::Left;
			this->fs45_l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.3F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fs45_l->Location = System::Drawing::Point(3, 0);
			this->fs45_l->Name = L"fs45_l";
			this->fs45_l->Size = System::Drawing::Size(155, 50);
			this->fs45_l->TabIndex = 3;
			this->fs45_l->Text = L"Феросиліцю ФС 45,% ";
			this->fs45_l->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mn95_l
			// 
			this->mn95_l->AutoSize = true;
			this->mn95_l->Dock = System::Windows::Forms::DockStyle::Left;
			this->mn95_l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.3F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mn95_l->Location = System::Drawing::Point(3, 0);
			this->mn95_l->Name = L"mn95_l";
			this->mn95_l->Size = System::Drawing::Size(221, 50);
			this->mn95_l->TabIndex = 4;
			this->mn95_l->Text = L"Марганцю металічного Мн 95,% ";
			this->mn95_l->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// carbon_l
			// 
			this->carbon_l->AutoSize = true;
			this->carbon_l->Dock = System::Windows::Forms::DockStyle::Left;
			this->carbon_l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.3F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->carbon_l->Location = System::Drawing::Point(3, 50);
			this->carbon_l->Name = L"carbon_l";
			this->carbon_l->Size = System::Drawing::Size(190, 50);
			this->carbon_l->TabIndex = 5;
			this->carbon_l->Text = L"Вуглевмісного матеріалу,% ";
			this->carbon_l->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fs45_input
			// 
			this->fs45_input->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->fs45_input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fs45_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fs45_input->Location = System::Drawing::Point(397, 3);
			this->fs45_input->Name = L"fs45_input";
			this->fs45_input->Size = System::Drawing::Size(50, 44);
			this->fs45_input->TabIndex = 7;
			// 
			// mn95_input
			// 
			this->mn95_input->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->mn95_input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mn95_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mn95_input->Location = System::Drawing::Point(397, 3);
			this->mn95_input->Name = L"mn95_input";
			this->mn95_input->Size = System::Drawing::Size(50, 44);
			this->mn95_input->TabIndex = 8;
			// 
			// carbon_input
			// 
			this->carbon_input->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->carbon_input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->carbon_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->carbon_input->Location = System::Drawing::Point(397, 53);
			this->carbon_input->Name = L"carbon_input";
			this->carbon_input->Size = System::Drawing::Size(50, 44);
			this->carbon_input->TabIndex = 9;
			// 
			// save_btn
			// 
			this->save_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->save_btn->Location = System::Drawing::Point(633, 3);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(125, 44);
			this->save_btn->TabIndex = 11;
			this->save_btn->Text = L"Зберегти";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &SettingsMenu::save_btn_Click);
			// 
			// restore_btn
			// 
			this->restore_btn->Location = System::Drawing::Point(633, 53);
			this->restore_btn->Name = L"restore_btn";
			this->restore_btn->Size = System::Drawing::Size(125, 44);
			this->restore_btn->TabIndex = 12;
			this->restore_btn->Text = L"Скинути";
			this->restore_btn->UseVisualStyleBackColor = true;
			this->restore_btn->Click += gcnew System::EventHandler(this, &SettingsMenu::restore_btn_Click);
			// 
			// steel_marks_label
			// 
			this->steel_marks_label->AutoSize = true;
			this->steel_marks_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->steel_marks_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.27F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->steel_marks_label->Location = System::Drawing::Point(3, 0);
			this->steel_marks_label->Name = L"steel_marks_label";
			this->steel_marks_label->Size = System::Drawing::Size(783, 30);
			this->steel_marks_label->TabIndex = 13;
			this->steel_marks_label->Text = L"Марки сталі";
			this->steel_marks_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_mark_btn
			// 
			this->add_mark_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->add_mark_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->add_mark_btn->Location = System::Drawing::Point(30, 13);
			this->add_mark_btn->Margin = System::Windows::Forms::Padding(30, 3, 30, 3);
			this->add_mark_btn->Name = L"add_mark_btn";
			this->add_mark_btn->Size = System::Drawing::Size(203, 39);
			this->add_mark_btn->TabIndex = 14;
			this->add_mark_btn->Text = L"Додати марку";
			this->add_mark_btn->UseVisualStyleBackColor = true;
			this->add_mark_btn->Click += gcnew System::EventHandler(this, &SettingsMenu::add_mark_btn_Click);
			// 
			// edit_mark_btn
			// 
			this->edit_mark_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->edit_mark_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->edit_mark_btn->Location = System::Drawing::Point(293, 13);
			this->edit_mark_btn->Margin = System::Windows::Forms::Padding(30, 3, 30, 3);
			this->edit_mark_btn->Name = L"edit_mark_btn";
			this->edit_mark_btn->Size = System::Drawing::Size(203, 39);
			this->edit_mark_btn->TabIndex = 15;
			this->edit_mark_btn->Text = L"Редагувати марку";
			this->edit_mark_btn->UseVisualStyleBackColor = true;
			// 
			// delete_mark_btn
			// 
			this->delete_mark_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->delete_mark_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->delete_mark_btn->Location = System::Drawing::Point(556, 13);
			this->delete_mark_btn->Margin = System::Windows::Forms::Padding(30, 3, 30, 3);
			this->delete_mark_btn->Name = L"delete_mark_btn";
			this->delete_mark_btn->Size = System::Drawing::Size(203, 39);
			this->delete_mark_btn->TabIndex = 16;
			this->delete_mark_btn->Text = L"Видалити марку";
			this->delete_mark_btn->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 57);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(789, 0);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// fmn78_l
			// 
			this->fmn78_l->AutoSize = true;
			this->fmn78_l->Dock = System::Windows::Forms::DockStyle::Left;
			this->fmn78_l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.3F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fmn78_l->Location = System::Drawing::Point(3, 0);
			this->fmn78_l->Name = L"fmn78_l";
			this->fmn78_l->Size = System::Drawing::Size(229, 50);
			this->fmn78_l->TabIndex = 2;
			this->fmn78_l->Text = L"Феромарганцю марки ФМн 78,% ";
			this->fmn78_l->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fmn78_input_2
			// 
			this->fmn78_input_2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->fmn78_input_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fmn78_input_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fmn78_input_2->Location = System::Drawing::Point(475, 3);
			this->fmn78_input_2->Name = L"fmn78_input_2";
			this->fmn78_input_2->Size = System::Drawing::Size(50, 44);
			this->fmn78_input_2->TabIndex = 10;
			// 
			// fmn78_input_1
			// 
			this->fmn78_input_1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->fmn78_input_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fmn78_input_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fmn78_input_1->Location = System::Drawing::Point(397, 3);
			this->fmn78_input_1->Name = L"fmn78_input_1";
			this->fmn78_input_1->Size = System::Drawing::Size(50, 44);
			this->fmn78_input_1->TabIndex = 6;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 57);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 85.48387F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(789, 0);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// chemical_comp_label
			// 
			this->chemical_comp_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chemical_comp_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.27F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->chemical_comp_label->Location = System::Drawing::Point(3, 10);
			this->chemical_comp_label->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->chemical_comp_label->Name = L"chemical_comp_label";
			this->chemical_comp_label->Size = System::Drawing::Size(783, 30);
			this->chemical_comp_label->TabIndex = 1;
			this->chemical_comp_label->Text = L"Хімічний склад";
			this->chemical_comp_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->AutoSize = true;
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->chemical_comp_label, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 57);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(789, 50);
			this->tableLayoutPanel3->TabIndex = 17;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->AutoSize = true;
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel4->Controls->Add(this->fmn78_l, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->fmn78_input_1, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->fmn78_input_2, 2, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel4->Location = System::Drawing::Point(0, 107);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(789, 50);
			this->tableLayoutPanel4->TabIndex = 18;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->AutoSize = true;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->fs45_l, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->fs45_input, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel5->Location = System::Drawing::Point(0, 157);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(789, 50);
			this->tableLayoutPanel5->TabIndex = 19;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->AutoSize = true;
			this->tableLayoutPanel6->ColumnCount = 3;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel6->Controls->Add(this->mn95_l, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->carbon_l, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->mn95_input, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->carbon_input, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->save_btn, 2, 0);
			this->tableLayoutPanel6->Controls->Add(this->restore_btn, 2, 1);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 207);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->Padding = System::Windows::Forms::Padding(0, 0, 0, 10);
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(789, 110);
			this->tableLayoutPanel6->TabIndex = 20;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->steel_marks_label, 0, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel7->Location = System::Drawing::Point(0, 317);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(789, 30);
			this->tableLayoutPanel7->TabIndex = 21;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 3;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->Controls->Add(this->add_mark_btn, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->edit_mark_btn, 1, 0);
			this->tableLayoutPanel8->Controls->Add(this->delete_mark_btn, 2, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel8->Location = System::Drawing::Point(0, 347);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->Padding = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(789, 55);
			this->tableLayoutPanel8->TabIndex = 22;
			// 
			// SettingsMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(789, 461);
			this->Controls->Add(this->tableLayoutPanel8);
			this->Controls->Add(this->tableLayoutPanel7);
			this->Controls->Add(this->tableLayoutPanel6);
			this->Controls->Add(this->tableLayoutPanel5);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(400, 500);
			this->Name = L"SettingsMenu";
			this->Text = L"MetalCalculator";
			this->topPanel->ResumeLayout(false);
			this->labelsPanel->ResumeLayout(false);
			this->labelLayout->ResumeLayout(false);
			this->labelLayout->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: 
	System::Void restore_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		initWriteInputs();
	}
private: 
	System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Кароч тут якась хуйня з лібою, є спершу перевіряв чи коректно передача даних була, 
		// але коли запит успішний(оновив дані) то ліба всеодно вертає поганий статус + не показує помилки

		// можливо використати regex або більшу кількість валідацій, але як на мене то займе більше проц часу ніж просто відловити відповідну помилку
		try {
			settingQueries->updateSettings(
				System::Convert::ToInt16(fmn78_input_1->Text),
				System::Convert::ToInt16(fmn78_input_2->Text),
				System::Convert::ToInt16(fs45_input->Text),
				System::Convert::ToInt16(mn95_input->Text),
				System::Convert::ToInt16(carbon_input->Text)
			);
		}
		catch (const System::FormatException^ e) {
			MessageBox::Show("Невірний формат даних", "Input error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		initWriteInputs();
	}
private: 
	System::Void add_mark_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateMetal^ createMetalForm = gcnew CreateMetal();
		createMetalForm->Show();
	}
};
}
