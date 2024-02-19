#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>

public ref class StringConverter 
{
public:
	static std::string SystemStringToStdString(System::String^ systemString) {
		msclr::interop::marshal_context context;
		return context.marshal_as<std::string>(systemString);
	}

	static System::String^ StdStringToSystemString(const std::string& stdString) {
		msclr::interop::marshal_context context;
		return context.marshal_as<System::String^>(stdString);
	}
};
