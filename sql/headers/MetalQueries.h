#pragma once

#include <libpq-fe.h>
#include "Database.h"
#include "MetalModel.h"
#include <windows.h>

namespace MetalCalculator
{
	using namespace System;
	using namespace System::Collections::Generic;

	class MetalQueries
	{
	public:
		MetalQueries();
		MetalModel^ getElementByName(String^ metalName);
		bool addMetal(MetalModel^ metal);
		bool updateMetalByName(System::String^ name, MetalModel^ updatedMetal);
		bool dropMetalByName(String^ nameOfMetalToDrop);

		List<MetalModel^>^ getMetals();
	private:
		MetalModel^ parseHimSklad(PGresult* result);
		PGconn* conn;
	};
}


