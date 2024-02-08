#include "WindowManager.h"


WindowManager^ WindowManager::GetInstance()
{
	if (instance == nullptr)
	{
		instance = gcnew WindowManager();
	}
	return instance;
}

void WindowManager::RegisterFormType(String^ name, Type^ formType)
{
	if (!formTypes->ContainsKey(name))
	{
		formTypes->Add(name, formType);
	}
}

void WindowManager::ShowForm(String^ name)
{
	if (formTypes->ContainsKey(name))
	{
		Type^ formType = formTypes[name];
		Form^ formInstance = safe_cast<Form^>(Activator::CreateInstance(formType));

		// ���� 0 �������� ���� - ������� ����������� ������.
		if (openedForms->Count == 0)
		{
			openedForms[name] = formInstance;
			Application::Run(formInstance);
		}
		else
		{
			if (openedForms->ContainsKey(name))
			{
				return;
			}
			else
			{
				openedForms[name] = formInstance;
			}

			formInstance->Show();
		}

	}
	else
	{
		MessageBox::Show("Form type not found.");
	}

}

void  WindowManager::ChangeForm(String^ currentFormName, String^ newFormName)
{
	if (formTypes->ContainsKey(newFormName) && currentFormName != newFormName)
	{
		Type^ formType = formTypes[newFormName];
		Form^ newForm = nullptr;


		if (!openedForms->ContainsKey(newFormName))
		{
			newForm = dynamic_cast<Form^>(Activator::CreateInstance(formType));
			openedForms[newFormName] = newForm;
		}
		else
		{
			newForm = openedForms[newFormName];
		}

		if (openedForms->ContainsKey(currentFormName))
		{
			openedForms[currentFormName]->Hide();
			// openedForms->Remove(currentFormName);


			// TODO: ��������, �� ����� ��������� ����, �� ������ ���������.
			// ���������� �� ��������� ����.
		}

		newForm->Show();

		// ����� ������� ����������� �� ���� � ����, �� ����������� ������.
		newForm->Location = openedForms[currentFormName]->Location;
	}
}