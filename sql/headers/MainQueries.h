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
		MainModel getElementByName(String^ metalName);
	private:
		MainModel parseHimSklad(PGresult* result);
		PGconn* conn;
	};
}


