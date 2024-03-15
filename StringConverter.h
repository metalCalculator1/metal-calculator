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

	static std::string convertToUtf8(const std::string& ansiString) {
		int utf8Length = MultiByteToWideChar(CP_ACP, 0, ansiString.c_str(), -1, NULL, 0);
		if (utf8Length == 0) {
			// Failed to get UTF-8 length
			return "";
		}

		wchar_t* utf16Buffer = new wchar_t[utf8Length];
		MultiByteToWideChar(CP_ACP, 0, ansiString.c_str(), -1, utf16Buffer, utf8Length);

		int utf8BufferSize = WideCharToMultiByte(CP_UTF8, 0, utf16Buffer, -1, NULL, 0, NULL, NULL);
		if (utf8BufferSize == 0) {
			// Failed to get UTF-8 buffer size
			delete[] utf16Buffer;
			return "";
		}

		char* utf8Buffer = new char[utf8BufferSize];
		WideCharToMultiByte(CP_UTF8, 0, utf16Buffer, -1, utf8Buffer, utf8BufferSize, NULL, NULL);

		std::string utf8String(utf8Buffer);

		delete[] utf16Buffer;
		delete[] utf8Buffer;

		return utf8String;
	}

	static char* convertToUtf8(char* ansiString) {
		int utf8Length = MultiByteToWideChar(CP_ACP, 0, ansiString, -1, NULL, 0);
		if (utf8Length == 0) {
			return nullptr;
		}

		wchar_t* utf16Buffer = new wchar_t[utf8Length];
		MultiByteToWideChar(CP_ACP, 0, ansiString, -1, utf16Buffer, utf8Length);

		int utf8BufferSize = WideCharToMultiByte(CP_UTF8, 0, utf16Buffer, -1, NULL, 0, NULL, NULL);
		if (utf8BufferSize == 0) {
			delete[] utf16Buffer;
			return nullptr;
		}

		char* utf8Buffer = new char[utf8BufferSize];
		WideCharToMultiByte(CP_UTF8, 0, utf16Buffer, -1, utf8Buffer, utf8BufferSize, NULL, NULL);

		delete[] utf16Buffer;

		return utf8Buffer;
	}

	static std::string convertToAnsi(const std::string& utf8String) {
		int wideLength = MultiByteToWideChar(CP_UTF8, 0, utf8String.c_str(), -1, NULL, 0);
		if (wideLength == 0) {
			return "";
		}

		wchar_t* wideBuffer = new wchar_t[wideLength];
		MultiByteToWideChar(CP_UTF8, 0, utf8String.c_str(), -1, wideBuffer, wideLength);

		// Convert wide string to ANSI string
		int ansiLength = WideCharToMultiByte(CP_ACP, 0, wideBuffer, -1, NULL, 0, NULL, NULL);
		if (ansiLength == 0) {
			delete[] wideBuffer;
			return "";
		}

		char* ansiBuffer = new char[ansiLength];
		WideCharToMultiByte(CP_ACP, 0, wideBuffer, -1, ansiBuffer, ansiLength, NULL, NULL);

		std::string ansiString(ansiBuffer);

		delete[] wideBuffer;
		delete[] ansiBuffer;

		return ansiString;
	}

	static char* convertToAnsi(char* utf8String) {
		int wideLength = MultiByteToWideChar(CP_UTF8, 0, utf8String, -1, NULL, 0);
		if (wideLength == 0) {
			return nullptr;
		}

		wchar_t* wideBuffer = new wchar_t[wideLength];
		MultiByteToWideChar(CP_UTF8, 0, utf8String, -1, wideBuffer, wideLength);

		int ansiLength = WideCharToMultiByte(CP_ACP, 0, wideBuffer, -1, NULL, 0, NULL, NULL);
		if (ansiLength == 0) {
			delete[] wideBuffer;
			return nullptr;
		}

		char* ansiBuffer = new char[ansiLength];
		WideCharToMultiByte(CP_ACP, 0, wideBuffer, -1, ansiBuffer, ansiLength, NULL, NULL);

		delete[] wideBuffer;

		return ansiBuffer;
	}
};
