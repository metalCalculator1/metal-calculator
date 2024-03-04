#pragma once

#include <string>

public enum class MetalType
{
	steel,
	cast_iron
};

public ref struct MetalModel
{
	int id;
	System::String^ name;
	float c;
	float si;
	float mn;
	float p;
	float s;
	float cu;
	float cr;
	float ni;
	MetalType metalType;

	MetalModel() : id(0), c(0), si(0), mn(0), p(0), s(0), cu(0), cr(0), ni(0), metalType(MetalType::cast_iron) {};

	MetalModel(
		System::String^ name_i,
		float c_i,
		float si_i,
		float mn_i,
		float p_i,
		float s_i,
		float cu_i,
		float cr_i,
		float ni_i,
		System::String^ metalType_i
	) : id(0), name(name_i), c(c_i), si(si_i), mn(mn_i), p(p_i), s(s_i), cu(cu_i), cr(cr_i), ni(ni_i)
	{
		metalType = mapMetalType(metalType_i);
	};

	static MetalType mapMetalType(System::String^ metalType_i) {
		if (metalType_i == "steel" || metalType_i == "Сталь") {
			return MetalType::steel;
		}

		return MetalType::cast_iron;
	}

	static MetalType mapMetalType(char* metalType_i) {
		if (strcmp(metalType_i, "steel") == 0 || strcmp(metalType_i, "Сталь") == 0) {
			return MetalType::steel;
		}

		return MetalType::cast_iron;
	}

	static std::string metalTypeToString(MetalType metalType)
	{
		switch (metalType)
		{
		case MetalType::steel:
			return "steel";
		case MetalType::cast_iron:
			return "cast_iron";
		default:
			return "";
		}
	}

	static System::String^ metalTypeToManagedString(MetalType metalType)
	{
		switch (metalType)
		{
		case MetalType::steel:
			return "steel";
		case MetalType::cast_iron:
			return "cast_iron";
		default:
			return "";
		}
	}
};
