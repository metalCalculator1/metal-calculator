#include "MainQueries.h"
#include <cstdlib>

namespace MetalCalculator
{
	MainQueries::MainQueries()
	{
		conn = Database::getInstance().getConn();
	}

	MainModel MainQueries::getElementByName(String^ metalName)
	{
		MainModel himSkladGoalModel;

		String^ query = String::Format("SELECT c, si, mn, p, s, cu, cr, ni FROM metals WHERE name = '{0}'", metalName);

		IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(query);
		char* nativeQuery = static_cast<char*>(ptrToNativeString.ToPointer());

		PGresult* res = PQexec(conn, nativeQuery);

		if (PQresultStatus(res) != PGRES_TUPLES_OK)
		{
			Console::WriteLine("SELECT command did not return tuples properly: " + gcnew String(PQerrorMessage(conn)));
			PQclear(res);
			PQfinish(conn);
			return himSkladGoalModel;
		}

		if (PQntuples(res) > 0)
		{
			himSkladGoalModel = parseHimSklad(res);
		}

		PQclear(res);
		return himSkladGoalModel;
	}

	MainModel MainQueries::parseHimSklad(PGresult* res)
	{
		MainModel model;

		model.c = strtof(PQgetvalue(res, 0, 0), NULL);
		model.si = strtof(PQgetvalue(res, 0, 1), NULL);
		model.mn = strtof(PQgetvalue(res, 0, 2), NULL);
		model.p = strtof(PQgetvalue(res, 0, 3), NULL);
		model.s = strtof(PQgetvalue(res, 0, 4), NULL);
		model.cu = strtof(PQgetvalue(res, 0, 5), NULL);
		model.cr = strtof(PQgetvalue(res, 0, 6), NULL);
		model.ni = strtof(PQgetvalue(res, 0, 7), NULL);

		return model;
	}
}