#include "MainQueries.h"
#include "StringConverter.h"

#include <cstdlib>
#include <msclr/marshal.h>

namespace MetalCalculator
{
	MainQueries::MainQueries()
	{
		conn = Database::getInstance().getConn();
	}

	MetalModel^ MainQueries::getElementByName(String^ metalName)
	{
		MetalModel^ himSkladGoalModel = gcnew MetalModel;

		String^ query = String::Format("SELECT name, c, si, mn, p, s, cu, cr, ni FROM metals WHERE name = '{0}'", metalName);

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


	//bool MainQueries::addMetal(const MainModel^ metal) 
	//{


	//	std::string query = "INSERT INTO metals (name, c, si, mn, p, s, cu, cr, ni) VALUES ('"
	//		+ metal->name + "', " + std::to_string(metal->c) + ", "
	//		+ std::to_string(metal.si) + ", " + std::to_string(metal.mn) + ", "
	//		+ std::to_string(metal.p) + ", " + std::to_string(metal.s) + ", "
	//		+ std::to_string(metal.cu) + ", " + std::to_string(metal.cr) + ", "
	//		+ std::to_string(metal.ni) + ");";

	//	PGresult* result = PQexec(conn, query.c_str());

	//	if (PQresultStatus(result) != PGRES_COMMAND_OK) {
	//		PQclear(result);
	//		return false;
	//	}

	//	PQclear(result);
	//	return true;
	//}

	MetalModel^ MainQueries::parseHimSklad(PGresult* res)
	{
		MetalModel^ model = gcnew MetalModel;
		char* cName = PQgetvalue(res, 0, 0);

		System::String^ managedStrName = StringConverter::StdStringToSystemString(cName);

		model->name = managedStrName;
		model->c = strtof(PQgetvalue(res, 0, 1), NULL);
		model->si = strtof(PQgetvalue(res, 0, 2), NULL);
		model->mn = strtof(PQgetvalue(res, 0, 3), NULL);
		model->p = strtof(PQgetvalue(res, 0, 4), NULL);
		model->s = strtof(PQgetvalue(res, 0, 5), NULL);
		model->cu = strtof(PQgetvalue(res, 0, 6), NULL);
		model->cr = strtof(PQgetvalue(res, 0, 7), NULL);
		model->ni = strtof(PQgetvalue(res, 0, 8), NULL);

		return model;
	}
}