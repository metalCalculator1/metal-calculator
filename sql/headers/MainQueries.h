#pragma once

#include <libpq-fe.h>
#include "Database.h"
#include "MainModel.h"


namespace MetalCalculator
{
	using namespace System;

	class MainQueries
	{
	public:
		MainQueries();
		MainModel^ getElementByName(String^ metalName);
		bool addMetal(const MainModel^ metal);

		System::Collections::Generic::List<MainModel^>^ getMetals() {};
		// bool updateMetalById();
		// bool dropMetalById();
	private:
		MainModel^ parseHimSklad(PGresult* result);
		PGconn* conn;
	};
}


