#pragma once

#include <libpq-fe.h>
#include "Database.h"
#include "MetalModel.h"


namespace MetalCalculator
{
	using namespace System;

	class MetalQueries
	{
	public:
		MetalQueries();
		MetalModel^ getElementByName(String^ metalName);
		bool addMetal(const MetalModel^ metal) {};

		System::Collections::Generic::List<MetalModel^>^ getMetals() {};
		// bool updateMetalById();
		// bool dropMetalById();
	private:
		MetalModel^ parseHimSklad(PGresult* result);
		PGconn* conn;
	};
}


