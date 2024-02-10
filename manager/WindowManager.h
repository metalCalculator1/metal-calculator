#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

ref class WindowManager
{
private:
	property static WindowManager^ instance;

	property Dictionary<String^, Type^>^ formTypes;
	property Dictionary<String^, Form^>^ openedForms;

	WindowManager()
	{
		formTypes = gcnew Dictionary<String^, Type^>();
		openedForms = gcnew Dictionary<String^, Form^>();
	}
	~WindowManager() {}

public:
	static WindowManager^ GetInstance();

	void RegisterFormType(String^ name, Type^ formType);
	void ChangeForm(String^ currentFormName, String^ newFormName);
	void ShowForm(String^ name);
};
