#pragma once
#include "WindowManager.h"

namespace MetalCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	// Consider switching name to MainForm (or similar)
	public ref class MainMenu : public System::Windows::Forms::Form
	{
	public:
		MainMenu(void)
		{
			InitializeComponent();

			mainPanel->Tag = mainLabel->Tag;
			settingsPanel->Tag = settingsLabel->Tag;
			historyPanel->Tag = historyLabel->Tag;

			BringPanelToFront(mainPanel);
		}

	protected:
		~MainMenu()
		{
			if (components)
			{
				delete components;
			}
		}

		// TopPanel:
		System::Windows::Forms::Panel^ topPanel;
		System::Windows::Forms::Panel^ logoPanel;
		System::Windows::Forms::Panel^ labelsPanel;
		System::Windows::Forms::TableLayoutPanel^ labelLayout;
		System::Windows::Forms::Label^ mainLabel;
		System::Windows::Forms::Label^ settingsLabel;
		System::Windows::Forms::Label^ historyLabel;
		System::Windows::Forms::Panel^ parentPanel;

		// MainMenu (variables start with mm_):
		System::Windows::Forms::Panel^ mainPanel;
		System::Windows::Forms::TableLayoutPanel^ mm_top_layout_panel;
		System::Windows::Forms::Panel^ mm_panel1;
		System::Windows::Forms::Label^ mm_chemicalComposition_lbl;
		System::Windows::Forms::Panel^ mm_panel2;
		System::Windows::Forms::Panel^ mm_panel3;
		System::Windows::Forms::Label^ mm_chemicalCompositionGoal_lbl;
		System::Windows::Forms::Panel^ mm_panel4;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
		System::Windows::Forms::Label^ mm_C_lbl_top;
		System::Windows::Forms::TextBox^ mm_C_TB;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
		System::Windows::Forms::Label^ mm_Ni_lbl_top;
		System::Windows::Forms::Label^ mm_Cr_lbl_top;
		System::Windows::Forms::Label^ mm_Cu_lbl_top;
		System::Windows::Forms::Label^ mm_S_lbl_top;
		System::Windows::Forms::Label^ mm_P_lbl_top;
		System::Windows::Forms::Label^ mm_Mn_lbl_top;
		System::Windows::Forms::Label^ mm_Si_lbl_top;
		System::Windows::Forms::Label^ mm_C_lbl_btm;
		System::Windows::Forms::TextBox^ textBox9;
		System::Windows::Forms::TextBox^ mm_Ni_TB;
		System::Windows::Forms::TextBox^ mm_Cr_TB;
		System::Windows::Forms::TextBox^ mm_Cu_TB;
		System::Windows::Forms::TextBox^ mm_S_TB;
		System::Windows::Forms::TextBox^ mm_P_TB;
		System::Windows::Forms::TextBox^ mm_Mn_TB;
		System::Windows::Forms::TextBox^ mm_Si_TB;
		System::Windows::Forms::TextBox^ textBox16;
		System::Windows::Forms::TextBox^ textBox15;
		System::Windows::Forms::TextBox^ textBox14;
		System::Windows::Forms::TextBox^ textBox13;
		System::Windows::Forms::TextBox^ textBox12;
		System::Windows::Forms::TextBox^ textBox11;
		System::Windows::Forms::TextBox^ textBox10;
		System::Windows::Forms::Label^ mm_Ni_lbl_btm;
		System::Windows::Forms::Label^ mm_Cr_lbl_btm;
		System::Windows::Forms::Label^ mm_Cu_lbl_btm;
		System::Windows::Forms::Label^ mm_S_lbl_btm;
		System::Windows::Forms::Label^ mm_P_lbl_btm;
		System::Windows::Forms::Label^ mm_Mn_lbl_btm;
		System::Windows::Forms::Label^ mm_Si_lbl_btm;
		System::Windows::Forms::Panel^ mm_panel5;
		System::Windows::Forms::Button^ mm_alloySelect_btn;
		System::Windows::Forms::TableLayoutPanel^ mm_ferroIfno_TL;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
		System::Windows::Forms::TextBox^ mm_metalKG_TB;
		System::Windows::Forms::Label^ mm_metalKG_lbl;
		System::Windows::Forms::TableLayoutPanel^ mm_neededFerro_TL;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TableLayoutPanel^ mm_neededInfo_TL_btm;
		System::Windows::Forms::Label^ mm_FC45_lbl;
		System::Windows::Forms::Label^ mm_Mn95_lbl;
		System::Windows::Forms::Label^ mm_FMn78_lbl;
		System::Windows::Forms::Label^ mm_vuglecevm_lbl;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
		System::Windows::Forms::TextBox^ mm_meltingID_TB;
		System::Windows::Forms::Label^ mm_meltingID_lbl;
		System::Windows::Forms::Label^ mm_FC45_value_lbl;
		System::Windows::Forms::Label^ mm_vulgecevm_value_lbl;
		System::Windows::Forms::Label^ mm_FMn78_value_lbl;
		System::Windows::Forms::Label^ mm_Mn95_value_lbl;


		// SettingsMenu (variables start with sm_):
		System::Windows::Forms::Panel^ settingsPanel;

		// HistoryMenu (variables start with hm_):
		System::Windows::Forms::Panel^ historyPanel;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainMenu::typeid));
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->labelsPanel = (gcnew System::Windows::Forms::Panel());
			this->labelLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->mainLabel = (gcnew System::Windows::Forms::Label());
			this->settingsLabel = (gcnew System::Windows::Forms::Label());
			this->historyLabel = (gcnew System::Windows::Forms::Label());
			this->logoPanel = (gcnew System::Windows::Forms::Panel());
			this->parentPanel = (gcnew System::Windows::Forms::Panel());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->mm_ferroIfno_TL = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->mm_metalKG_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_metalKG_lbl = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->mm_meltingID_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_meltingID_lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->mm_neededFerro_TL = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mm_neededInfo_TL_btm = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->mm_vulgecevm_value_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_FMn78_value_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_Mn95_value_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_FC45_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_Mn95_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_FMn78_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_vuglecevm_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_FC45_value_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_panel5 = (gcnew System::Windows::Forms::Panel());
			this->mm_alloySelect_btn = (gcnew System::Windows::Forms::Button());
			this->mm_top_layout_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->mm_panel1 = (gcnew System::Windows::Forms::Panel());
			this->mm_chemicalComposition_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->mm_Ni_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_Cr_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_Cu_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_S_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_P_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_Mn_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_Si_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_Ni_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_Cr_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_Cu_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_S_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_P_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_Mn_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_Si_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_C_lbl_top = (gcnew System::Windows::Forms::Label());
			this->mm_C_TB = (gcnew System::Windows::Forms::TextBox());
			this->mm_panel3 = (gcnew System::Windows::Forms::Panel());
			this->mm_chemicalCompositionGoal_lbl = (gcnew System::Windows::Forms::Label());
			this->mm_panel4 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->mm_Ni_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->mm_Cr_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->mm_Cu_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->mm_S_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->mm_P_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->mm_Mn_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->mm_Si_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->mm_C_lbl_btm = (gcnew System::Windows::Forms::Label());
			this->settingsPanel = (gcnew System::Windows::Forms::Panel());
			this->historyPanel = (gcnew System::Windows::Forms::Panel());
			this->topPanel->SuspendLayout();
			this->labelsPanel->SuspendLayout();
			this->labelLayout->SuspendLayout();
			this->parentPanel->SuspendLayout();
			this->mainPanel->SuspendLayout();
			this->mm_ferroIfno_TL->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->mm_neededFerro_TL->SuspendLayout();
			this->mm_neededInfo_TL_btm->SuspendLayout();
			this->mm_panel5->SuspendLayout();
			this->mm_top_layout_panel->SuspendLayout();
			this->mm_panel1->SuspendLayout();
			this->mm_panel2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->mm_panel3->SuspendLayout();
			this->mm_panel4->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::SystemColors::Control;
			this->topPanel->Controls->Add(this->labelsPanel);
			this->topPanel->Controls->Add(this->logoPanel);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(910, 70);
			this->topPanel->TabIndex = 0;
			// 
			// labelsPanel
			// 
			this->labelsPanel->Controls->Add(this->labelLayout);
			this->labelsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelsPanel->Location = System::Drawing::Point(249, 0);
			this->labelsPanel->Name = L"labelsPanel";
			this->labelsPanel->Size = System::Drawing::Size(661, 70);
			this->labelsPanel->TabIndex = 1;
			// 
			// labelLayout
			// 
			this->labelLayout->BackColor = System::Drawing::SystemColors::Control;
			this->labelLayout->ColumnCount = 3;
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 178)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 178)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 305)));
			this->labelLayout->Controls->Add(this->mainLabel, 0, 0);
			this->labelLayout->Controls->Add(this->settingsLabel, 1, 0);
			this->labelLayout->Controls->Add(this->historyLabel, 2, 0);
			this->labelLayout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelLayout->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->labelLayout->Location = System::Drawing::Point(0, 0);
			this->labelLayout->Name = L"labelLayout";
			this->labelLayout->RowCount = 1;
			this->labelLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->labelLayout->Size = System::Drawing::Size(661, 70);
			this->labelLayout->TabIndex = 0;
			// 
			// mainLabel
			// 
			this->mainLabel->AutoSize = true;
			this->mainLabel->Dock = System::Windows::Forms::DockStyle::Right;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainLabel->Location = System::Drawing::Point(79, 0);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(96, 70);
			this->mainLabel->TabIndex = 0;
			this->mainLabel->Tag = L"MainMenu";
			this->mainLabel->Text = L"Головна";
			this->mainLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->mainLabel->Click += gcnew System::EventHandler(this, &MainMenu::onMenuLabelClicked);
			// 
			// settingsLabel
			// 
			this->settingsLabel->AutoSize = true;
			this->settingsLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->settingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsLabel->Location = System::Drawing::Point(181, 0);
			this->settingsLabel->Name = L"settingsLabel";
			this->settingsLabel->Size = System::Drawing::Size(136, 70);
			this->settingsLabel->TabIndex = 1;
			this->settingsLabel->Tag = L"SettingsMenu";
			this->settingsLabel->Text = L"Налаштування";
			this->settingsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->settingsLabel->Click += gcnew System::EventHandler(this, &MainMenu::onMenuLabelClicked);
			// 
			// historyLabel
			// 
			this->historyLabel->AutoSize = true;
			this->historyLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->historyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyLabel->Location = System::Drawing::Point(359, 0);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(67, 70);
			this->historyLabel->TabIndex = 2;
			this->historyLabel->Tag = L"HistoryMenu";
			this->historyLabel->Text = L"Історія";
			this->historyLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->historyLabel->Click += gcnew System::EventHandler(this, &MainMenu::onMenuLabelClicked);
			// 
			// logoPanel
			// 
			this->logoPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPanel.BackgroundImage")));
			this->logoPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logoPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->logoPanel->Location = System::Drawing::Point(0, 0);
			this->logoPanel->Name = L"logoPanel";
			this->logoPanel->Size = System::Drawing::Size(249, 70);
			this->logoPanel->TabIndex = 0;
			// 
			// parentPanel
			// 
			this->parentPanel->AutoSize = true;
			this->parentPanel->Controls->Add(this->mainPanel);
			this->parentPanel->Controls->Add(this->settingsPanel);
			this->parentPanel->Controls->Add(this->historyPanel);
			this->parentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->parentPanel->Location = System::Drawing::Point(0, 70);
			this->parentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->parentPanel->Name = L"parentPanel";
			this->parentPanel->Size = System::Drawing::Size(910, 544);
			this->parentPanel->TabIndex = 1;
			// 
			// mainPanel
			// 
			this->mainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->mainPanel->Controls->Add(this->mm_ferroIfno_TL);
			this->mainPanel->Controls->Add(this->mm_panel5);
			this->mainPanel->Controls->Add(this->mm_top_layout_panel);
			this->mainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainPanel->Location = System::Drawing::Point(0, 0);
			this->mainPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(910, 544);
			this->mainPanel->TabIndex = 0;
			// 
			// mm_ferroIfno_TL
			// 
			this->mm_ferroIfno_TL->ColumnCount = 2;
			this->mm_ferroIfno_TL->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				47.47253F)));
			this->mm_ferroIfno_TL->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				52.52747F)));
			this->mm_ferroIfno_TL->Controls->Add(this->tableLayoutPanel5, 1, 0);
			this->mm_ferroIfno_TL->Controls->Add(this->mm_neededFerro_TL, 0, 0);
			this->mm_ferroIfno_TL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_ferroIfno_TL->Location = System::Drawing::Point(0, 242);
			this->mm_ferroIfno_TL->Name = L"mm_ferroIfno_TL";
			this->mm_ferroIfno_TL->RowCount = 1;
			this->mm_ferroIfno_TL->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->mm_ferroIfno_TL->Size = System::Drawing::Size(910, 302);
			this->mm_ferroIfno_TL->TabIndex = 2;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(435, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.44595F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 66.55405F)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(472, 296);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel7, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel8, 0, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(466, 93);
			this->tableLayoutPanel6->TabIndex = 0;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->mm_metalKG_TB, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->mm_metalKG_lbl, 0, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Right;
			this->tableLayoutPanel7->Location = System::Drawing::Point(236, 3);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(227, 87);
			this->tableLayoutPanel7->TabIndex = 0;
			// 
			// mm_metalKG_TB
			// 
			this->mm_metalKG_TB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->mm_metalKG_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_metalKG_TB->Location = System::Drawing::Point(3, 46);
			this->mm_metalKG_TB->Name = L"mm_metalKG_TB";
			this->mm_metalKG_TB->Size = System::Drawing::Size(173, 22);
			this->mm_metalKG_TB->TabIndex = 0;
			// 
			// mm_metalKG_lbl
			// 
			this->mm_metalKG_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_metalKG_lbl->Location = System::Drawing::Point(3, 0);
			this->mm_metalKG_lbl->Name = L"mm_metalKG_lbl";
			this->mm_metalKG_lbl->Size = System::Drawing::Size(170, 43);
			this->mm_metalKG_lbl->TabIndex = 1;
			this->mm_metalKG_lbl->Text = L"Маса Металу";
			this->mm_metalKG_lbl->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->Controls->Add(this->mm_meltingID_TB, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->mm_meltingID_lbl, 0, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(227, 87);
			this->tableLayoutPanel8->TabIndex = 2;
			// 
			// mm_meltingID_TB
			// 
			this->mm_meltingID_TB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->mm_meltingID_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_meltingID_TB->Dock = System::Windows::Forms::DockStyle::Right;
			this->mm_meltingID_TB->Location = System::Drawing::Point(54, 46);
			this->mm_meltingID_TB->Name = L"mm_meltingID_TB";
			this->mm_meltingID_TB->Size = System::Drawing::Size(170, 22);
			this->mm_meltingID_TB->TabIndex = 0;
			// 
			// mm_meltingID_lbl
			// 
			this->mm_meltingID_lbl->Dock = System::Windows::Forms::DockStyle::Right;
			this->mm_meltingID_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_meltingID_lbl->Location = System::Drawing::Point(54, 0);
			this->mm_meltingID_lbl->Name = L"mm_meltingID_lbl";
			this->mm_meltingID_lbl->Size = System::Drawing::Size(170, 43);
			this->mm_meltingID_lbl->TabIndex = 1;
			this->mm_meltingID_lbl->Text = L"Номер Плавки";
			this->mm_meltingID_lbl->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(60, 102);
			this->button1->Margin = System::Windows::Forms::Padding(60, 3, 60, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"РОЗРАХУВАТИ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// mm_neededFerro_TL
			// 
			this->mm_neededFerro_TL->ColumnCount = 1;
			this->mm_neededFerro_TL->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->mm_neededFerro_TL->Controls->Add(this->label1, 0, 0);
			this->mm_neededFerro_TL->Controls->Add(this->mm_neededInfo_TL_btm, 0, 1);
			this->mm_neededFerro_TL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_neededFerro_TL->Location = System::Drawing::Point(3, 3);
			this->mm_neededFerro_TL->Name = L"mm_neededFerro_TL";
			this->mm_neededFerro_TL->RowCount = 2;
			this->mm_neededFerro_TL->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->mm_neededFerro_TL->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 223)));
			this->mm_neededFerro_TL->Size = System::Drawing::Size(426, 296);
			this->mm_neededFerro_TL->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 73);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Необхідна кількість феросплавів: ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// mm_neededInfo_TL_btm
			// 
			this->mm_neededInfo_TL_btm->ColumnCount = 2;
			this->mm_neededInfo_TL_btm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				86.19048F)));
			this->mm_neededInfo_TL_btm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				13.80952F)));
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_vulgecevm_value_lbl, 1, 3);
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_FMn78_value_lbl, 1, 2);
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_Mn95_value_lbl, 1, 1);
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_FC45_lbl, 0, 0);
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_Mn95_lbl, 0, 1);
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_FMn78_lbl, 0, 2);
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_vuglecevm_lbl, 0, 3);
			this->mm_neededInfo_TL_btm->Controls->Add(this->mm_FC45_value_lbl, 1, 0);
			this->mm_neededInfo_TL_btm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_neededInfo_TL_btm->Location = System::Drawing::Point(3, 76);
			this->mm_neededInfo_TL_btm->Name = L"mm_neededInfo_TL_btm";
			this->mm_neededInfo_TL_btm->RowCount = 4;
			this->mm_neededInfo_TL_btm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mm_neededInfo_TL_btm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mm_neededInfo_TL_btm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mm_neededInfo_TL_btm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->mm_neededInfo_TL_btm->Size = System::Drawing::Size(420, 217);
			this->mm_neededInfo_TL_btm->TabIndex = 1;
			// 
			// mm_vulgecevm_value_lbl
			// 
			this->mm_vulgecevm_value_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->mm_vulgecevm_value_lbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_vulgecevm_value_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mm_vulgecevm_value_lbl->Location = System::Drawing::Point(365, 165);
			this->mm_vulgecevm_value_lbl->Margin = System::Windows::Forms::Padding(3);
			this->mm_vulgecevm_value_lbl->Name = L"mm_vulgecevm_value_lbl";
			this->mm_vulgecevm_value_lbl->Size = System::Drawing::Size(52, 49);
			this->mm_vulgecevm_value_lbl->TabIndex = 7;
			this->mm_vulgecevm_value_lbl->Text = L"10";
			this->mm_vulgecevm_value_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_FMn78_value_lbl
			// 
			this->mm_FMn78_value_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->mm_FMn78_value_lbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_FMn78_value_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_FMn78_value_lbl->Location = System::Drawing::Point(365, 111);
			this->mm_FMn78_value_lbl->Margin = System::Windows::Forms::Padding(3);
			this->mm_FMn78_value_lbl->Name = L"mm_FMn78_value_lbl";
			this->mm_FMn78_value_lbl->Size = System::Drawing::Size(52, 48);
			this->mm_FMn78_value_lbl->TabIndex = 6;
			this->mm_FMn78_value_lbl->Text = L"10";
			this->mm_FMn78_value_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Mn95_value_lbl
			// 
			this->mm_Mn95_value_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->mm_Mn95_value_lbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_Mn95_value_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_Mn95_value_lbl->Location = System::Drawing::Point(365, 57);
			this->mm_Mn95_value_lbl->Margin = System::Windows::Forms::Padding(3);
			this->mm_Mn95_value_lbl->Name = L"mm_Mn95_value_lbl";
			this->mm_Mn95_value_lbl->Size = System::Drawing::Size(52, 48);
			this->mm_Mn95_value_lbl->TabIndex = 5;
			this->mm_Mn95_value_lbl->Text = L"10";
			this->mm_Mn95_value_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_FC45_lbl
			// 
			this->mm_FC45_lbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_FC45_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_FC45_lbl->Location = System::Drawing::Point(3, 0);
			this->mm_FC45_lbl->Name = L"mm_FC45_lbl";
			this->mm_FC45_lbl->Size = System::Drawing::Size(356, 54);
			this->mm_FC45_lbl->TabIndex = 0;
			this->mm_FC45_lbl->Text = L"Феросиліцій, ФС45, кг";
			this->mm_FC45_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// mm_Mn95_lbl
			// 
			this->mm_Mn95_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_Mn95_lbl->Location = System::Drawing::Point(3, 54);
			this->mm_Mn95_lbl->Name = L"mm_Mn95_lbl";
			this->mm_Mn95_lbl->Size = System::Drawing::Size(356, 54);
			this->mm_Mn95_lbl->TabIndex = 1;
			this->mm_Mn95_lbl->Text = L"Марганець Мн95, кг";
			this->mm_Mn95_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// mm_FMn78_lbl
			// 
			this->mm_FMn78_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_FMn78_lbl->Location = System::Drawing::Point(3, 108);
			this->mm_FMn78_lbl->Name = L"mm_FMn78_lbl";
			this->mm_FMn78_lbl->Size = System::Drawing::Size(356, 54);
			this->mm_FMn78_lbl->TabIndex = 2;
			this->mm_FMn78_lbl->Text = L"Феромарганець ФМн78, кг";
			this->mm_FMn78_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// mm_vuglecevm_lbl
			// 
			this->mm_vuglecevm_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_vuglecevm_lbl->Location = System::Drawing::Point(3, 162);
			this->mm_vuglecevm_lbl->Name = L"mm_vuglecevm_lbl";
			this->mm_vuglecevm_lbl->Size = System::Drawing::Size(356, 54);
			this->mm_vuglecevm_lbl->TabIndex = 3;
			this->mm_vuglecevm_lbl->Text = L"Вуглецевмісний матеріал, кг";
			this->mm_vuglecevm_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// mm_FC45_value_lbl
			// 
			this->mm_FC45_value_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->mm_FC45_value_lbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_FC45_value_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mm_FC45_value_lbl->Location = System::Drawing::Point(365, 3);
			this->mm_FC45_value_lbl->Margin = System::Windows::Forms::Padding(3);
			this->mm_FC45_value_lbl->Name = L"mm_FC45_value_lbl";
			this->mm_FC45_value_lbl->Size = System::Drawing::Size(52, 48);
			this->mm_FC45_value_lbl->TabIndex = 4;
			this->mm_FC45_value_lbl->Text = L"10";
			this->mm_FC45_value_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_panel5
			// 
			this->mm_panel5->Controls->Add(this->mm_alloySelect_btn);
			this->mm_panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->mm_panel5->Location = System::Drawing::Point(0, 195);
			this->mm_panel5->Name = L"mm_panel5";
			this->mm_panel5->Size = System::Drawing::Size(910, 47);
			this->mm_panel5->TabIndex = 1;
			// 
			// mm_alloySelect_btn
			// 
			this->mm_alloySelect_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->mm_alloySelect_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mm_alloySelect_btn->Location = System::Drawing::Point(750, 4);
			this->mm_alloySelect_btn->Name = L"mm_alloySelect_btn";
			this->mm_alloySelect_btn->Size = System::Drawing::Size(148, 39);
			this->mm_alloySelect_btn->TabIndex = 0;
			this->mm_alloySelect_btn->Text = L"Вибір Сплаву";
			this->mm_alloySelect_btn->UseVisualStyleBackColor = true;
			// 
			// mm_top_layout_panel
			// 
			this->mm_top_layout_panel->ColumnCount = 2;
			this->mm_top_layout_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				29.6875F)));
			this->mm_top_layout_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70.3125F)));
			this->mm_top_layout_panel->Controls->Add(this->mm_panel1, 0, 0);
			this->mm_top_layout_panel->Controls->Add(this->mm_panel2, 1, 0);
			this->mm_top_layout_panel->Controls->Add(this->mm_panel3, 0, 1);
			this->mm_top_layout_panel->Controls->Add(this->mm_panel4, 1, 1);
			this->mm_top_layout_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->mm_top_layout_panel->Location = System::Drawing::Point(0, 0);
			this->mm_top_layout_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mm_top_layout_panel->Name = L"mm_top_layout_panel";
			this->mm_top_layout_panel->RowCount = 2;
			this->mm_top_layout_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->mm_top_layout_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->mm_top_layout_panel->Size = System::Drawing::Size(910, 195);
			this->mm_top_layout_panel->TabIndex = 0;
			// 
			// mm_panel1
			// 
			this->mm_panel1->BackColor = System::Drawing::Color::Maroon;
			this->mm_panel1->Controls->Add(this->mm_chemicalComposition_lbl);
			this->mm_panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_panel1->Location = System::Drawing::Point(3, 2);
			this->mm_panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mm_panel1->Name = L"mm_panel1";
			this->mm_panel1->Size = System::Drawing::Size(264, 93);
			this->mm_panel1->TabIndex = 0;
			// 
			// mm_chemicalComposition_lbl
			// 
			this->mm_chemicalComposition_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_chemicalComposition_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->mm_chemicalComposition_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mm_chemicalComposition_lbl->Location = System::Drawing::Point(0, 0);
			this->mm_chemicalComposition_lbl->Name = L"mm_chemicalComposition_lbl";
			this->mm_chemicalComposition_lbl->Size = System::Drawing::Size(264, 95);
			this->mm_chemicalComposition_lbl->TabIndex = 0;
			this->mm_chemicalComposition_lbl->Text = L"Хімічний склад \nметалу проби з печі, %";
			this->mm_chemicalComposition_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_panel2
			// 
			this->mm_panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->mm_panel2->Controls->Add(this->tableLayoutPanel2);
			this->mm_panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_panel2->Location = System::Drawing::Point(273, 2);
			this->mm_panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mm_panel2->Name = L"mm_panel2";
			this->mm_panel2->Size = System::Drawing::Size(634, 93);
			this->mm_panel2->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 8;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel2->Controls->Add(this->mm_Ni_TB, 7, 1);
			this->tableLayoutPanel2->Controls->Add(this->mm_Cr_TB, 6, 1);
			this->tableLayoutPanel2->Controls->Add(this->mm_Cu_TB, 5, 1);
			this->tableLayoutPanel2->Controls->Add(this->mm_S_TB, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->mm_P_TB, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->mm_Mn_TB, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->mm_Si_TB, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->mm_Ni_lbl_top, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_Cr_lbl_top, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_Cu_lbl_top, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_S_lbl_top, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_P_lbl_top, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_Mn_lbl_top, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_Si_lbl_top, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_C_lbl_top, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->mm_C_TB, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 63)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(634, 93);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// mm_Ni_TB
			// 
			this->mm_Ni_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_Ni_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_Ni_TB->Location = System::Drawing::Point(556, 33);
			this->mm_Ni_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_Ni_TB->MaxLength = 10;
			this->mm_Ni_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_Ni_TB->Multiline = true;
			this->mm_Ni_TB->Name = L"mm_Ni_TB";
			this->mm_Ni_TB->Size = System::Drawing::Size(73, 57);
			this->mm_Ni_TB->TabIndex = 29;
			this->mm_Ni_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_Cr_TB
			// 
			this->mm_Cr_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_Cr_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_Cr_TB->Location = System::Drawing::Point(477, 33);
			this->mm_Cr_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_Cr_TB->MaxLength = 10;
			this->mm_Cr_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_Cr_TB->Multiline = true;
			this->mm_Cr_TB->Name = L"mm_Cr_TB";
			this->mm_Cr_TB->Size = System::Drawing::Size(73, 57);
			this->mm_Cr_TB->TabIndex = 28;
			this->mm_Cr_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_Cu_TB
			// 
			this->mm_Cu_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_Cu_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_Cu_TB->Location = System::Drawing::Point(398, 33);
			this->mm_Cu_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_Cu_TB->MaxLength = 10;
			this->mm_Cu_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_Cu_TB->Multiline = true;
			this->mm_Cu_TB->Name = L"mm_Cu_TB";
			this->mm_Cu_TB->Size = System::Drawing::Size(73, 57);
			this->mm_Cu_TB->TabIndex = 27;
			this->mm_Cu_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_S_TB
			// 
			this->mm_S_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_S_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_S_TB->Location = System::Drawing::Point(319, 33);
			this->mm_S_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_S_TB->MaxLength = 10;
			this->mm_S_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_S_TB->Multiline = true;
			this->mm_S_TB->Name = L"mm_S_TB";
			this->mm_S_TB->Size = System::Drawing::Size(73, 57);
			this->mm_S_TB->TabIndex = 26;
			this->mm_S_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_P_TB
			// 
			this->mm_P_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_P_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_P_TB->Location = System::Drawing::Point(240, 33);
			this->mm_P_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_P_TB->MaxLength = 10;
			this->mm_P_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_P_TB->Multiline = true;
			this->mm_P_TB->Name = L"mm_P_TB";
			this->mm_P_TB->Size = System::Drawing::Size(73, 57);
			this->mm_P_TB->TabIndex = 25;
			this->mm_P_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_Mn_TB
			// 
			this->mm_Mn_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_Mn_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_Mn_TB->Location = System::Drawing::Point(161, 33);
			this->mm_Mn_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_Mn_TB->MaxLength = 10;
			this->mm_Mn_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_Mn_TB->Multiline = true;
			this->mm_Mn_TB->Name = L"mm_Mn_TB";
			this->mm_Mn_TB->Size = System::Drawing::Size(73, 57);
			this->mm_Mn_TB->TabIndex = 24;
			this->mm_Mn_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_Si_TB
			// 
			this->mm_Si_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_Si_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_Si_TB->Location = System::Drawing::Point(82, 33);
			this->mm_Si_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_Si_TB->MaxLength = 10;
			this->mm_Si_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_Si_TB->Multiline = true;
			this->mm_Si_TB->Name = L"mm_Si_TB";
			this->mm_Si_TB->Size = System::Drawing::Size(73, 57);
			this->mm_Si_TB->TabIndex = 23;
			this->mm_Si_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_Ni_lbl_top
			// 
			this->mm_Ni_lbl_top->Location = System::Drawing::Point(556, 0);
			this->mm_Ni_lbl_top->Name = L"mm_Ni_lbl_top";
			this->mm_Ni_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_Ni_lbl_top->TabIndex = 22;
			this->mm_Ni_lbl_top->Text = L"Ni";
			this->mm_Ni_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Cr_lbl_top
			// 
			this->mm_Cr_lbl_top->Location = System::Drawing::Point(477, 0);
			this->mm_Cr_lbl_top->Name = L"mm_Cr_lbl_top";
			this->mm_Cr_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_Cr_lbl_top->TabIndex = 21;
			this->mm_Cr_lbl_top->Text = L"Cr";
			this->mm_Cr_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Cu_lbl_top
			// 
			this->mm_Cu_lbl_top->Location = System::Drawing::Point(398, 0);
			this->mm_Cu_lbl_top->Name = L"mm_Cu_lbl_top";
			this->mm_Cu_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_Cu_lbl_top->TabIndex = 20;
			this->mm_Cu_lbl_top->Text = L"Cu";
			this->mm_Cu_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_S_lbl_top
			// 
			this->mm_S_lbl_top->Location = System::Drawing::Point(319, 0);
			this->mm_S_lbl_top->Name = L"mm_S_lbl_top";
			this->mm_S_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_S_lbl_top->TabIndex = 19;
			this->mm_S_lbl_top->Text = L"S";
			this->mm_S_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_P_lbl_top
			// 
			this->mm_P_lbl_top->Location = System::Drawing::Point(240, 0);
			this->mm_P_lbl_top->Name = L"mm_P_lbl_top";
			this->mm_P_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_P_lbl_top->TabIndex = 18;
			this->mm_P_lbl_top->Text = L"P";
			this->mm_P_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Mn_lbl_top
			// 
			this->mm_Mn_lbl_top->Location = System::Drawing::Point(161, 0);
			this->mm_Mn_lbl_top->Name = L"mm_Mn_lbl_top";
			this->mm_Mn_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_Mn_lbl_top->TabIndex = 17;
			this->mm_Mn_lbl_top->Text = L"Mn";
			this->mm_Mn_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Si_lbl_top
			// 
			this->mm_Si_lbl_top->Location = System::Drawing::Point(82, 0);
			this->mm_Si_lbl_top->Name = L"mm_Si_lbl_top";
			this->mm_Si_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_Si_lbl_top->TabIndex = 16;
			this->mm_Si_lbl_top->Text = L"Si";
			this->mm_Si_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_C_lbl_top
			// 
			this->mm_C_lbl_top->Location = System::Drawing::Point(3, 0);
			this->mm_C_lbl_top->Name = L"mm_C_lbl_top";
			this->mm_C_lbl_top->Size = System::Drawing::Size(73, 30);
			this->mm_C_lbl_top->TabIndex = 0;
			this->mm_C_lbl_top->Text = L"C";
			this->mm_C_lbl_top->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_C_TB
			// 
			this->mm_C_TB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_C_TB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mm_C_TB->Location = System::Drawing::Point(3, 33);
			this->mm_C_TB->MaximumSize = System::Drawing::Size(73, 57);
			this->mm_C_TB->MaxLength = 10;
			this->mm_C_TB->MinimumSize = System::Drawing::Size(73, 57);
			this->mm_C_TB->Multiline = true;
			this->mm_C_TB->Name = L"mm_C_TB";
			this->mm_C_TB->Size = System::Drawing::Size(73, 57);
			this->mm_C_TB->TabIndex = 8;
			this->mm_C_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_panel3
			// 
			this->mm_panel3->BackColor = System::Drawing::Color::Maroon;
			this->mm_panel3->Controls->Add(this->mm_chemicalCompositionGoal_lbl);
			this->mm_panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_panel3->Location = System::Drawing::Point(3, 99);
			this->mm_panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mm_panel3->Name = L"mm_panel3";
			this->mm_panel3->Size = System::Drawing::Size(264, 94);
			this->mm_panel3->TabIndex = 2;
			// 
			// mm_chemicalCompositionGoal_lbl
			// 
			this->mm_chemicalCompositionGoal_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mm_chemicalCompositionGoal_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->mm_chemicalCompositionGoal_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mm_chemicalCompositionGoal_lbl->Location = System::Drawing::Point(0, 0);
			this->mm_chemicalCompositionGoal_lbl->Name = L"mm_chemicalCompositionGoal_lbl";
			this->mm_chemicalCompositionGoal_lbl->Size = System::Drawing::Size(264, 94);
			this->mm_chemicalCompositionGoal_lbl->TabIndex = 0;
			this->mm_chemicalCompositionGoal_lbl->Text = L"Цільовий хімічний \nсклад металу, %";
			this->mm_chemicalCompositionGoal_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_panel4
			// 
			this->mm_panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->mm_panel4->Controls->Add(this->tableLayoutPanel3);
			this->mm_panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mm_panel4->Location = System::Drawing::Point(273, 99);
			this->mm_panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mm_panel4->Name = L"mm_panel4";
			this->mm_panel4->Size = System::Drawing::Size(634, 94);
			this->mm_panel4->TabIndex = 3;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 8;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel3->Controls->Add(this->textBox16, 7, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox15, 6, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox14, 5, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox13, 4, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox12, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox11, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox10, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->mm_Ni_lbl_btm, 7, 0);
			this->tableLayoutPanel3->Controls->Add(this->mm_Cr_lbl_btm, 6, 0);
			this->tableLayoutPanel3->Controls->Add(this->mm_Cu_lbl_btm, 5, 0);
			this->tableLayoutPanel3->Controls->Add(this->mm_S_lbl_btm, 4, 0);
			this->tableLayoutPanel3->Controls->Add(this->mm_P_lbl_btm, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->mm_Mn_lbl_btm, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->mm_Si_lbl_btm, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox9, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->mm_C_lbl_btm, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(634, 94);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// textBox16
			// 
			this->textBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Location = System::Drawing::Point(556, 33);
			this->textBox16->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox16->MaxLength = 10;
			this->textBox16->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(73, 57);
			this->textBox16->TabIndex = 30;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Location = System::Drawing::Point(477, 33);
			this->textBox15->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox15->MaxLength = 10;
			this->textBox15->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(73, 57);
			this->textBox15->TabIndex = 29;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Location = System::Drawing::Point(398, 33);
			this->textBox14->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox14->MaxLength = 10;
			this->textBox14->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(73, 57);
			this->textBox14->TabIndex = 28;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Location = System::Drawing::Point(319, 33);
			this->textBox13->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox13->MaxLength = 10;
			this->textBox13->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(73, 57);
			this->textBox13->TabIndex = 27;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Location = System::Drawing::Point(240, 33);
			this->textBox12->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox12->MaxLength = 10;
			this->textBox12->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(73, 57);
			this->textBox12->TabIndex = 26;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Location = System::Drawing::Point(161, 33);
			this->textBox11->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox11->MaxLength = 10;
			this->textBox11->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(73, 57);
			this->textBox11->TabIndex = 25;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Location = System::Drawing::Point(82, 33);
			this->textBox10->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox10->MaxLength = 10;
			this->textBox10->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(73, 57);
			this->textBox10->TabIndex = 24;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_Ni_lbl_btm
			// 
			this->mm_Ni_lbl_btm->Location = System::Drawing::Point(556, 0);
			this->mm_Ni_lbl_btm->Name = L"mm_Ni_lbl_btm";
			this->mm_Ni_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_Ni_lbl_btm->TabIndex = 23;
			this->mm_Ni_lbl_btm->Text = L"Ni";
			this->mm_Ni_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Cr_lbl_btm
			// 
			this->mm_Cr_lbl_btm->Location = System::Drawing::Point(477, 0);
			this->mm_Cr_lbl_btm->Name = L"mm_Cr_lbl_btm";
			this->mm_Cr_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_Cr_lbl_btm->TabIndex = 22;
			this->mm_Cr_lbl_btm->Text = L"Cr";
			this->mm_Cr_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Cu_lbl_btm
			// 
			this->mm_Cu_lbl_btm->Location = System::Drawing::Point(398, 0);
			this->mm_Cu_lbl_btm->Name = L"mm_Cu_lbl_btm";
			this->mm_Cu_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_Cu_lbl_btm->TabIndex = 21;
			this->mm_Cu_lbl_btm->Text = L"Cu";
			this->mm_Cu_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_S_lbl_btm
			// 
			this->mm_S_lbl_btm->Location = System::Drawing::Point(319, 0);
			this->mm_S_lbl_btm->Name = L"mm_S_lbl_btm";
			this->mm_S_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_S_lbl_btm->TabIndex = 20;
			this->mm_S_lbl_btm->Text = L"S";
			this->mm_S_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_P_lbl_btm
			// 
			this->mm_P_lbl_btm->Location = System::Drawing::Point(240, 0);
			this->mm_P_lbl_btm->Name = L"mm_P_lbl_btm";
			this->mm_P_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_P_lbl_btm->TabIndex = 19;
			this->mm_P_lbl_btm->Text = L"P";
			this->mm_P_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Mn_lbl_btm
			// 
			this->mm_Mn_lbl_btm->Location = System::Drawing::Point(161, 0);
			this->mm_Mn_lbl_btm->Name = L"mm_Mn_lbl_btm";
			this->mm_Mn_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_Mn_lbl_btm->TabIndex = 18;
			this->mm_Mn_lbl_btm->Text = L"Mn";
			this->mm_Mn_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mm_Si_lbl_btm
			// 
			this->mm_Si_lbl_btm->Location = System::Drawing::Point(82, 0);
			this->mm_Si_lbl_btm->Name = L"mm_Si_lbl_btm";
			this->mm_Si_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_Si_lbl_btm->TabIndex = 17;
			this->mm_Si_lbl_btm->Text = L"Si";
			this->mm_Si_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(3, 33);
			this->textBox9->MaximumSize = System::Drawing::Size(73, 57);
			this->textBox9->MaxLength = 10;
			this->textBox9->MinimumSize = System::Drawing::Size(73, 57);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(73, 57);
			this->textBox9->TabIndex = 9;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mm_C_lbl_btm
			// 
			this->mm_C_lbl_btm->Location = System::Drawing::Point(3, 0);
			this->mm_C_lbl_btm->Name = L"mm_C_lbl_btm";
			this->mm_C_lbl_btm->Size = System::Drawing::Size(73, 30);
			this->mm_C_lbl_btm->TabIndex = 1;
			this->mm_C_lbl_btm->Text = L"C";
			this->mm_C_lbl_btm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// settingsPanel
			// 
			this->settingsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->settingsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsPanel->Location = System::Drawing::Point(0, 0);
			this->settingsPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->settingsPanel->Name = L"settingsPanel";
			this->settingsPanel->Size = System::Drawing::Size(910, 544);
			this->settingsPanel->TabIndex = 0;
			// 
			// historyPanel
			// 
			this->historyPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->historyPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->historyPanel->Location = System::Drawing::Point(0, 0);
			this->historyPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->historyPanel->Name = L"historyPanel";
			this->historyPanel->Size = System::Drawing::Size(910, 544);
			this->historyPanel->TabIndex = 0;
			// 
			// MainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->ClientSize = System::Drawing::Size(910, 614);
			this->Controls->Add(this->parentPanel);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MinimumSize = System::Drawing::Size(912, 624);
			this->Name = L"MainMenu";
			this->Text = L"MetalCalculator";
			this->topPanel->ResumeLayout(false);
			this->labelsPanel->ResumeLayout(false);
			this->labelLayout->ResumeLayout(false);
			this->labelLayout->PerformLayout();
			this->parentPanel->ResumeLayout(false);
			this->mainPanel->ResumeLayout(false);
			this->mm_ferroIfno_TL->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->mm_neededFerro_TL->ResumeLayout(false);
			this->mm_neededInfo_TL_btm->ResumeLayout(false);
			this->mm_panel5->ResumeLayout(false);
			this->mm_top_layout_panel->ResumeLayout(false);
			this->mm_panel1->ResumeLayout(false);
			this->mm_panel2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->mm_panel3->ResumeLayout(false);
			this->mm_panel4->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		// Events:
		System::Void onMenuLabelClicked(System::Object^ sender, System::EventArgs^ e);


		// Functions:
		System::Void ChangeLayout(System::Object^ sender);
		System::Void BringPanelToFront(Control^ panel);
	};
}
