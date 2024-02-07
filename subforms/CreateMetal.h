#pragma once

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
		}

	protected:
		~CreateMetal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateMetal::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// CreateMetal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(388, 261);
			this->Name = L"CreateMetal";
			this->Text = L"CreateMetal";
			this->ResumeLayout(false);
		}
#pragma endregion
	};
}