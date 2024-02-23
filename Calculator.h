#pragma once

namespace MetalCalculator
{
	ref class Calculator
	{
	private:
		Calculator() {};
		static Calculator^ instance = nullptr;

	public:
		~Calculator() {};

		static Calculator^ GetInstance()
		{
			if (instance == nullptr)
			{
				instance = gcnew Calculator();
			}
			return instance;
		}
	private:
		// �������� ������� ��������
		const float N20 = 90.0; // �������� ������� �������� Mn � ���78
		const float N21 = 90.0; // �������� ������� �������� Mn � ��95
		const float N22 = 90.0; // �������� ������� �������� Si � ��45
		const float N23 = 90.0;

		// ճ��� ������
		float HimSklad_C_FMn78 = 7.0;		// C  - ճ����� ����� ������������ ����� ���78, %
		float HimSklad_Mn_FMn78 = 76.0;		// Mn - ճ����� ����� ������������ ����� ���78, %
		float HimSklad_Si_FC45 = 45.0;		// Si - ճ����� ����� ���������� ��45, %
		float HimSklad_Mn_Mn95 = 95.0;		// Mn - ճ����� ����� �������� ���������� ��95, %
		float HimSklad_C_Vuglecevm = 99.0;  // C  - ճ����� ����� ������������� ��������, %

		// ����������� ��������� ������� ����������
		float FC45;			// ���������� ��45, ��
		float FMn78;		// ������������� ���78, ��
		float Mn95;			// ��������� ��95, �� 
		float Vuglecevm;	// ������������� �������, ��

	public:
		float CalculateFC95(float metalMass, float Si_Proba, float Si_Goal);
		float CalculateFMn78(float metalMass, float Mn_Proba, float Mn_Goal, float C_Proba, float C_Goal);
		float CalculateMn95(float metalMass, float Mn_Proba, float Mn_Goal, float C_Proba, float C_Goal);
		float CalculateVuglecevm(float metalMass, float C_Proba, float C_Goal);
	};
}

