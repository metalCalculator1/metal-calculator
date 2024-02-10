#pragma once
#include "WindowManager.h"

namespace MetalCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class TemplateForm : public System::Windows::Forms::Form
	{
	public:
		TemplateForm(void)
		{
			InitializeComponent();

			mainMenuPanel->Tag = mainLabel->Tag;
			settingsPanel->Tag = settingsLabel->Tag;
			historyPanel->Tag = historyLabel->Tag;
		}

	protected:
		~TemplateForm()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::Panel^ topPanel;
		System::Windows::Forms::Panel^ logoPanel;
		System::Windows::Forms::Panel^ labelsPanel;
		System::Windows::Forms::TableLayoutPanel^ labelLayout;
		System::Windows::Forms::Label^ mainLabel;
		System::Windows::Forms::Label^ settingsLabel;
		System::Windows::Forms::Label^ historyLabel;
	private: System::Windows::Forms::Panel^ exitPanel;
	protected:

	private: System::Windows::Forms::Button^ exitButton;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;






	private: System::Windows::Forms::Panel^ mainPanel;
	private: System::Windows::Forms::Panel^ mainMenuPanel;
	private: System::Windows::Forms::Panel^ settingsPanel;
	private: System::Windows::Forms::Panel^ historyPanel;





	protected:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TemplateForm::typeid));
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->labelsPanel = (gcnew System::Windows::Forms::Panel());
			this->labelLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->exitPanel = (gcnew System::Windows::Forms::Panel());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->mainLabel = (gcnew System::Windows::Forms::Label());
			this->settingsLabel = (gcnew System::Windows::Forms::Label());
			this->historyLabel = (gcnew System::Windows::Forms::Label());
			this->logoPanel = (gcnew System::Windows::Forms::Panel());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->mainMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->settingsPanel = (gcnew System::Windows::Forms::Panel());
			this->historyPanel = (gcnew System::Windows::Forms::Panel());
			this->topPanel->SuspendLayout();
			this->labelsPanel->SuspendLayout();
			this->labelLayout->SuspendLayout();
			this->exitPanel->SuspendLayout();
			this->mainPanel->SuspendLayout();
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
			this->topPanel->Size = System::Drawing::Size(1375, 88);
			this->topPanel->TabIndex = 0;
			// 
			// labelsPanel
			// 
			this->labelsPanel->Controls->Add(this->labelLayout);
			this->labelsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelsPanel->Location = System::Drawing::Point(280, 0);
			this->labelsPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->labelsPanel->Name = L"labelsPanel";
			this->labelsPanel->Size = System::Drawing::Size(1095, 88);
			this->labelsPanel->TabIndex = 1;
			// 
			// labelLayout
			// 
			this->labelLayout->BackColor = System::Drawing::SystemColors::Control;
			this->labelLayout->ColumnCount = 4;
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 295)));
			this->labelLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 186)));
			this->labelLayout->Controls->Add(this->exitPanel, 3, 0);
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
			this->labelLayout->Size = System::Drawing::Size(1095, 88);
			this->labelLayout->TabIndex = 0;
			// 
			// exitPanel
			// 
			this->exitPanel->Controls->Add(this->exitButton);
			this->exitPanel->Location = System::Drawing::Point(912, 3);
			this->exitPanel->Name = L"exitPanel";
			this->exitPanel->Size = System::Drawing::Size(180, 82);
			this->exitPanel->TabIndex = 2;
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::DarkRed;
			this->exitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->ForeColor = System::Drawing::Color::Transparent;
			this->exitButton->Location = System::Drawing::Point(136, 9);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(30, 30);
			this->exitButton->TabIndex = 1;
			this->exitButton->Text = L"X";
			this->exitButton->UseVisualStyleBackColor = false;
			// 
			// mainLabel
			// 
			this->mainLabel->AutoSize = true;
			this->mainLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainLabel->Location = System::Drawing::Point(3, 0);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(301, 88);
			this->mainLabel->TabIndex = 0;
			this->mainLabel->Tag = L"MainMenu";
			this->mainLabel->Text = L"�������";
			this->mainLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->mainLabel->Click += gcnew System::EventHandler(this, &TemplateForm::onMenuLabelClicked);
			// 
			// settingsLabel
			// 
			this->settingsLabel->AutoSize = true;
			this->settingsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsLabel->Location = System::Drawing::Point(310, 0);
			this->settingsLabel->Name = L"settingsLabel";
			this->settingsLabel->Size = System::Drawing::Size(301, 88);
			this->settingsLabel->TabIndex = 1;
			this->settingsLabel->Tag = L"SettingsMenu";
			this->settingsLabel->Text = L"������������";
			this->settingsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->settingsLabel->Click += gcnew System::EventHandler(this, &TemplateForm::onMenuLabelClicked);
			// 
			// historyLabel
			// 
			this->historyLabel->AutoSize = true;
			this->historyLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->historyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyLabel->Location = System::Drawing::Point(617, 0);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(289, 88);
			this->historyLabel->TabIndex = 2;
			this->historyLabel->Tag = L"HistoryMenu";
			this->historyLabel->Text = L"������";
			this->historyLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->historyLabel->Click += gcnew System::EventHandler(this, &TemplateForm::onMenuLabelClicked);
			// 
			// logoPanel
			// 
			// this->logoPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoPanel.BackgroundImage")));
			this->logoPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logoPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->logoPanel->Location = System::Drawing::Point(0, 0);
			this->logoPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->logoPanel->Name = L"logoPanel";
			this->logoPanel->Size = System::Drawing::Size(280, 88);
			this->logoPanel->TabIndex = 0;
			// 
			// mainPanel
			// 
			this->mainPanel->Controls->Add(this->historyPanel);
			this->mainPanel->Controls->Add(this->mainMenuPanel);
			this->mainPanel->Controls->Add(this->settingsPanel);
			this->mainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainPanel->Location = System::Drawing::Point(0, 88);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(1375, 860);
			this->mainPanel->TabIndex = 3;
			// 
			// mainMenuPanel
			// 
			this->mainMenuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->mainMenuPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainMenuPanel->Location = System::Drawing::Point(0, 0);
			this->mainMenuPanel->Name = L"mainMenuPanel";
			this->mainMenuPanel->Size = System::Drawing::Size(1375, 860);
			this->mainMenuPanel->TabIndex = 0;
			// 
			// settingsPanel
			// 
			this->settingsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->settingsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsPanel->Location = System::Drawing::Point(0, 0);
			this->settingsPanel->Name = L"settingsPanel";
			this->settingsPanel->Size = System::Drawing::Size(1375, 860);
			this->settingsPanel->TabIndex = 0;
			// 
			// historyPanel
			// 
			this->historyPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->historyPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->historyPanel->Location = System::Drawing::Point(0, 0);
			this->historyPanel->Name = L"historyPanel";
			this->historyPanel->Size = System::Drawing::Size(1375, 860);
			this->historyPanel->TabIndex = 0;
			// 
			// TemplateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->ClientSize = System::Drawing::Size(1375, 948);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(1150, 948);
			this->Name = L"TemplateForm";
			this->Text = L"MetalCalculator";
			this->topPanel->ResumeLayout(false);
			this->labelsPanel->ResumeLayout(false);
			this->labelLayout->ResumeLayout(false);
			this->labelLayout->PerformLayout();
			this->exitPanel->ResumeLayout(false);
			this->mainPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void onMenuLabelClicked(System::Object^ sender, System::EventArgs^ e)
		{
			/*Label^ labelClicked = safe_cast<Label^>(sender);

			if (labelClicked != nullptr)
			{
				String^ currentWindowName = GetType()->Name;
				String^ newWindowName = labelClicked->Tag->ToString();
				WindowManager::GetInstance()->ChangeForm(currentWindowName, newWindowName);
			}*/

			ChangeLayout(sender);
		}

		System::Void ChangeLayout(System::Object^ sender)
		{
			Label^ label= safe_cast<Label^>(sender);
			if (label == nullptr) return;

			for each (Control^ control in mainPanel->Controls)
			{
				if (dynamic_cast<Panel^>(control) != nullptr) // Check if the control is a Panel
				{
					Console::WriteLine(control->Name);

					if (label->Tag == control->Tag)
					{
						control->BringToFront();
						control->BringToFront();
					}
				}
			}
		}
	};
}
