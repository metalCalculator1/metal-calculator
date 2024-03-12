#include "Calculator.h"
#include "SettingModel.h"
#include "SettingsQueries.h"

namespace MetalCalculator
{
	float Calculator::CalculateFC95(float metalMass, float Si_Proba, float Si_Goal)
	{
		const float
			E11 = metalMass,		// Маса Металу 
			C4 = Si_Proba,			// Si (проба з печі)
			C9 = Si_Goal,			// Si (цільова) 
			L8 = HimSklad_Si_FC45;	// Si (Хімічний склад феросицилію ФС45, %)							

		float result = E11 * (C9 - C4) * 100 / L8 / N22;

		FC45 = result;
		return FC45;
	}

	float Calculator::CalculateFMn78(float metalMass, float Mn_Proba, float Mn_Goal, float C_Proba, float C_Goal)
	{
		const float
			E11 = metalMass,			// Маса Металу
			D4 = Mn_Proba,				// Mn (проба з печі)
			D9 = Mn_Goal,				// Mn (цільовий)
			M4 = HimSklad_Mn_FMn78,		// Mn (Хімічний склад феромарганцю марки ФМн78, %)
			L4 = HimSklad_C_FMn78,		// C (Хімічний склад феромарганцю марки ФМн78, %)
			B4 = C_Proba,				// C (проба з печі)
			B9 = C_Goal;				// C (цільовa)	

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
			F17 = FC45,					// Феромарганець ФМн78, кг
			M4 = HimSklad_Mn_FMn78,		// Mn (Хімічний склад феромарганцю марки ФМн78, %)
			E11 = metalMass,			// Маса Металу
			D4 = Mn_Proba,				// Mn (проба з печі)
			D9 = Mn_Goal,				// Mn (цільовий)
			B4 = C_Proba, 				// C (проба з печі)
			B9 = C_Goal,				// C (цільовa)	
			L4 = HimSklad_C_FMn78,		// C (Хімічний склад феромарганцю марки ФМн78, %)
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
			F17 = FC45,						// Феромарганець ФМн78, кг
			L4 = HimSklad_C_FMn78,			// C (Хімічний склад феромарганцю марки ФМн78, %)	
			E11 = metalMass,				// Маса Металу
			B4 = C_Proba,					// C (проба з печі)
			B9 = C_Goal,					// C (цільовa)
			L16 = HimSklad_C_Vuglecevm;		// Хімічний склад вуглецевмісного матеріалу

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


