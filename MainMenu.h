#pragma once
#include "WindowManager.h"

namespace MetalCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MainMenu : public System::Windows::Forms::Form
	{
		WindowManager^ winManager;

	public:
		MainMenu(void)
		{
			InitializeComponent();
			winManager = WindowManager::GetInstance();
		}

	protected:
		~MainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ topPanel;
	private: System::Windows::Forms::Panel^ logoPanel;
	private: System::Windows::Forms::Panel^ labelsPanel;
	private: System::Windows::Forms::TableLayoutPanel^ labelLayout;
	private: System::Windows::Forms::Label^ mainLabel;
	private: System::Windows::Forms::Label^ settingsLabel;
	private: System::Windows::Forms::Label^ historyLabel;
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
			this->topPanel->SuspendLayout();
			this->labelsPanel->SuspendLayout();
			this->labelLayout->SuspendLayout();
			this->SuspendLayout();
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::SystemColors::Control;
			this->topPanel->Controls->Add(this->labelsPanel);
			this->topPanel->Controls->Add(this->logoPanel);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1132, 88);
			this->topPanel->TabIndex = 0;
			// 
			// labelsPanel
			// 
			this->labelsPanel->Controls->Add(this->labelLayout);
			this->labelsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelsPanel->Location = System::Drawing::Point(280, 0);
			this->labelsPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->labelsPanel->Name = L"labelsPanel";
			this->labelsPanel->Size = System::Drawing::Size(852, 88);
			this->labelsPanel->TabIndex = 1;
			// 
			// labelLayout
			// 
			this->labelLayout->BackColor = System::Drawing::SystemColors::Control;
			this->labelLayout->ColumnCount = 3;
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 294)));
			this->labelLayout->Controls->Add(this->mainLabel, 0, 0);
			this->labelLayout->Controls->Add(this->settingsLabel, 1, 0);
			this->labelLayout->Controls->Add(this->historyLabel, 2, 0);
			this->labelLayout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelLayout->Location = System::Drawing::Point(0, 0);
			this->labelLayout->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->labelLayout->Name = L"labelLayout";
			this->labelLayout->RowCount = 1;
			this->labelLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->Size = System::Drawing::Size(852, 88);
			this->labelLayout->TabIndex = 0;
			// 
			// mainLabel
			// 
			this->mainLabel->AutoSize = true;
			this->mainLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainLabel->Location = System::Drawing::Point(3, 0);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(273, 88);
			this->mainLabel->TabIndex = 0;
			this->mainLabel->Text = L"Головна";
			this->mainLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->mainLabel->Click += gcnew System::EventHandler(this, &MainMenu::mainLabel_Click);
			// 
			// settingsLabel
			// 
			this->settingsLabel->AutoSize = true;
			this->settingsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsLabel->Location = System::Drawing::Point(282, 0);
			this->settingsLabel->Name = L"settingsLabel";
			this->settingsLabel->Size = System::Drawing::Size(273, 88);
			this->settingsLabel->TabIndex = 1;
			this->settingsLabel->Text = L"Налаштування";
			this->settingsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->settingsLabel->Click += gcnew System::EventHandler(this, &MainMenu::settingsLabel_Click);
			// 
			// historyLabel
			// 
			this->historyLabel->AutoSize = true;
			this->historyLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->historyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyLabel->Location = System::Drawing::Point(561, 0);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(288, 88);
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
			this->logoPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->logoPanel->Name = L"logoPanel";
			this->logoPanel->Size = System::Drawing::Size(280, 88);
			this->logoPanel->TabIndex = 0;
			// 
			// MainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1132, 901);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(1150, 948);
			this->Name = L"MainMenu";
			this->Text = L"MetalCalculator";
			this->topPanel->ResumeLayout(false);
			this->labelsPanel->ResumeLayout(false);
			this->labelLayout->ResumeLayout(false);
			this->labelLayout->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// winManager->IsFormOpen<GetType()>();
		winManager->ChangeForm(this->GetType()->Name, "MainMenu");
	}
private: System::Void settingsLabel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	winManager->ChangeForm(this->GetType()->Name, "SettingsMenu");
}
};
}
