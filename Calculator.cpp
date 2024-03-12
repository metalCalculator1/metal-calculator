#include "Calculator.h"
#include "SettingModel.h"
#include "SettingsQueries.h"

namespace MetalCalculator
{
	float Calculator::CalculateFC95(float metalMass, float Si_Proba, float Si_Goal)
	{
		const float
			E11 = metalMass,		// ���� ������ 
			C4 = Si_Proba,			// Si (����� � ����)
			C9 = Si_Goal,			// Si (�������) 
			L8 = HimSklad_Si_FC45;	// Si (ճ����� ����� ���������� ��45, %)							

		float result = E11 * (C9 - C4) * 100 / L8 / N22;

		FC45 = result;
		return FC45;
	}

	float Calculator::CalculateFMn78(float metalMass, float Mn_Proba, float Mn_Goal, float C_Proba, float C_Goal)
	{
		const float
			E11 = metalMass,			// ���� ������
			D4 = Mn_Proba,				// Mn (����� � ����)
			D9 = Mn_Goal,				// Mn (��������)
			M4 = HimSklad_Mn_FMn78,		// Mn (ճ����� ����� ������������ ����� ���78, %)
			L4 = HimSklad_C_FMn78,		// C (ճ����� ����� ������������ ����� ���78, %)
			B4 = C_Proba,				// C (����� � ����)
			B9 = C_Goal;				// C (������a)	

		double result;

		if (((100 * ((E11 * (D9 - D4) * 100 / M4 / N20) * L4 / 100) / E11) + B4) > B9)
		{
			result = ((B9 - B4) * E11 / 100) / (L4 / 100);
		}
		else
		{
			result = E11 * (D9 - D4) * 100 / M4 / N20;
		}

		FMn78 = result;
		return FMn78;
	}

	float Calculator::CalculateMn95(float metalMass, float Mn_Proba, float Mn_Goal, float C_Proba, float C_Goal)
	{
		const float
			F17 = FC45,					// ������������� ���78, ��
			M4 = HimSklad_Mn_FMn78,		// Mn (ճ����� ����� ������������ ����� ���78, %)
			E11 = metalMass,			// ���� ������
			D4 = Mn_Proba,				// Mn (����� � ����)
			D9 = Mn_Goal,				// Mn (��������)
			B4 = C_Proba, 				// C (����� � ����)
			B9 = C_Goal,				// C (������a)	
			L4 = HimSklad_C_FMn78,		// C (ճ����� ����� ������������ ����� ���78, %)
			L12 = HimSklad_Mn_Mn95;

		float result;

		if (((F17 * (M4 / 100.0) * (N20 / 100.0) / E11) * 100.0 + D4) == D9) {
			result = 0;
		}
		else
		{
			float calculationPart = (((B9 - B4) * E11 / 100.0) / (L4 / 100.0) * (M4 / 100.0) * (N20 / 100.0) / E11 * 100.0 + D4);
			result = E11 * (D9 - calculationPart) * 100.0 / L12 / N21;
		}

		Mn95 = result;
		return Mn95;
	}

	float Calculator::CalculateVuglecevm(float metalMass, float C_Proba, float C_Goal)
	{
		const float
			F17 = FC45,						// ������������� ���78, ��
			L4 = HimSklad_C_FMn78,			// C (ճ����� ����� ������������ ����� ���78, %)	
			E11 = metalMass,				// ���� ������
			B4 = C_Proba,					// C (����� � ����)
			B9 = C_Goal,					// C (������a)
			L16 = HimSklad_C_Vuglecevm;		// ճ����� ����� �������������� ��������

		double result;

		if (100 * (F17 * L4 / 100) / E11 + B4 < B9)
		{
			result = E11 * (B9 - (100 * (F17 * L4 / 100) / E11 + B4)) * 100 / L16 / N23;
		}
		else
		{
			result = 0;
		}

		Vuglecevm = result;
		return Vuglecevm;
	}
	void Calculator::SetZasvoyenia()
	{
		SettingsModel model = SettingsQueries::getInstance().getSettings();

		HimSklad_C_FMn78 = model.fmn_78_0;
		HimSklad_Mn_FMn78 = model.fmn_78_1;
		HimSklad_Si_FC45 = model.fs_45;
		HimSklad_Mn_Mn95 = model.mn_95;
		HimSklad_C_Vuglecevm = model.carbon;

		N20 = model.mn_fmn78;
		N21 = model.mn_mn95;
		N22 = model.si_fs45;
		N23 = model.c_carbon;
	}
}


