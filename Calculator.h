#pragma once

namespace MetalCalculator
{
	ref class Calculator
	{
	private:
		Calculator() { SetZasvoyenia(); };
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
		// Засвоєння хімічних елементів
		float N20 = 90.0; // Засвоєння хімічних елементів Mn з ФМн78
		float N21 = 95.0; // Засвоєння хімічних елементів Mn з Мн95
		float N22 = 90.0; // Засвоєння хімічних елементів Si з ФС45
		float N23 = 90.0;

		// Хімічні склади
		float HimSklad_C_FMn78;		// C  - Хімічний склад феромарганцю марки ФМн78, %
		float HimSklad_Mn_FMn78;		// Mn - Хімічний склад феромарганцю марки ФМн78, %
		float HimSklad_Si_FC45;		// Si - Хімічний склад феросиліцію ФС45, %
		float HimSklad_Mn_Mn95;		// Mn - Хімічний склад марганцю металічного Мн95, %
		float HimSklad_C_Vuglecevm;  // C  - Хімічний склад вуглеевмісного матеріалу, %

		// Розрахована необхідна кількість феросплавів
		float FC45;			// Феросиліцій ФС45, кг
		float FMn78;		// Феромарганець ФМн78, кг
		float Mn95;			// Марганець Мн95, кг 
		float Vuglecevm;	// Вуглецевмісний матеріал, кг

	public:
		float CalculateFC95(float metalMass, float Si_Proba, float Si_Goal);
		float CalculateFMn78(float metalMass, float Mn_Proba, float Mn_Goal, float C_Proba, float C_Goal);
		float CalculateMn95(float metalMass, float Mn_Proba, float Mn_Goal, float C_Proba, float C_Goal);
		float CalculateVuglecevm(float metalMass, float C_Proba, float C_Goal);

		void SetZasvoyenia();

	};
}

