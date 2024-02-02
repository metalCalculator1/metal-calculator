#pragma once

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
	public ref class MainMenu : public System::Windows::Forms::Form
	{
	public:
		MainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainMenu()
		{
			if (components)
			{
				delete components;
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










	protected:

	protected:

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
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1006, 70);
			this->topPanel->TabIndex = 0;
			// 
			// labelsPanel
			// 
			this->labelsPanel->Controls->Add(this->labelLayout);
			this->labelsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelsPanel->Location = System::Drawing::Point(249, 0);
			this->labelsPanel->Name = L"labelsPanel";
			this->labelsPanel->Size = System::Drawing::Size(757, 70);
			this->labelsPanel->TabIndex = 1;
			// 
			// labelLayout
			// 
			this->labelLayout->BackColor = System::Drawing::SystemColors::Control;
			this->labelLayout->ColumnCount = 3;
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 261)));
			this->labelLayout->Controls->Add(this->mainLabel, 0, 0);
			this->labelLayout->Controls->Add(this->settingsLabel, 1, 0);
			this->labelLayout->Controls->Add(this->historyLabel, 2, 0);
			this->labelLayout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelLayout->Location = System::Drawing::Point(0, 0);
			this->labelLayout->Name = L"labelLayout";
			this->labelLayout->RowCount = 1;
			this->labelLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->Size = System::Drawing::Size(757, 70);
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
			this->mainLabel->Size = System::Drawing::Size(242, 70);
			this->mainLabel->TabIndex = 0;
			this->mainLabel->Text = L"Головна";
			this->mainLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// settingsLabel
			// 
			this->settingsLabel->AutoSize = true;
			this->settingsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsLabel->Location = System::Drawing::Point(251, 0);
			this->settingsLabel->Name = L"settingsLabel";
			this->settingsLabel->Size = System::Drawing::Size(242, 70);
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
			this->historyLabel->Location = System::Drawing::Point(499, 0);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(255, 70);
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
			this->logoPanel->Name = L"logoPanel";
			this->logoPanel->Size = System::Drawing::Size(249, 70);
			this->logoPanel->TabIndex = 0;
			// 
			// MainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MinimumSize = System::Drawing::Size(1024, 768);
			this->Name = L"MainMenu";
			this->Text = L"MetalCalculator";
			this->topPanel->ResumeLayout(false);
			this->labelsPanel->ResumeLayout(false);
			this->labelLayout->ResumeLayout(false);
			this->labelLayout->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
