#pragma once

public ref struct MetalModel
{
	System::String^ name;
	float c;
	float si;
	float mn;
	float p;
	float s;
	float cu;
	float cr;
	float ni;

	MetalModel() : c(0), si(0), mn(0), p(0), s(0), cu(0), cr(0), ni(0) {};

	MetalModel(
		System::String^ name_i,
		float c_i,
		float si_i,
		float mn_i,
		float p_i,
		float s_i,
		float cu_i,
		float cr_i,
		float ni_i
	) : name(name_i), c(c_i), si(si_i), mn(mn_i), p(p_i), s(s_i), cu(cu_i), cr(cr_i), ni(ni_i) {};
};
