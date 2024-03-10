#pragma once

#include <string>
#include <msclr/marshal_cppstd.h>

public ref class StringConverterer
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

	static std::string ConvertStringToUtf8(System::String^ managedString) {
		if (managedString == nullptr) return std::string();

		array<unsigned char>^ bytes = System::Text::Encoding::UTF8->GetBytes(managedString);

		pin_ptr<unsigned char> pinnedBytes = &bytes[0];

		std::string unmanagedString(reinterpret_cast<char*>(pinnedBytes), bytes->Length);

		return unmanagedString;
	}
};
