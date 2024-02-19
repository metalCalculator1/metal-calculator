#pragma once

#include <libpq-fe.h>
#include "Database.h"
#include "MetalModel.h"


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
		bool dropMetalById();

		List<MetalModel^>^ getMetals();
	private:
		MetalModel^ parseHimSklad(PGresult* result);
		PGconn* conn;
	};
}


