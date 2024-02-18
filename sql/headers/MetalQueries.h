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
		bool addMetal(const MetalModel^ metal) {};

		List<MetalModel^>^ getMetals();
		// bool updateMetalById();
		// bool dropMetalById();
	private:
		MetalModel^ parseHimSklad(PGresult* result);
		PGconn* conn;
	};
}


