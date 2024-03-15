#include "MetalQueries.h"

#include <cstdlib>
#include <msclr/marshal.h>
#include <string>
#include "StringConverter.h"

namespace MetalCalculator
{
	MetalQueries::MetalQueries()
	{
		conn = Database::getInstance().getConn();
	}

	MetalModel^ MetalQueries::getElementByName(String^ metalName)
	{
		MetalModel^ himSkladGoalModel = gcnew MetalModel;

		String^ query = String::Format(
			"SELECT id, name, c, si, mn, p, s, cu, cr, ni, metal_type FROM metals WHERE name = '{0}'", metalName
		);

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

	System::Collections::Generic::List<MetalModel^>^ MetalQueries::getMetals()
	{
		List<MetalModel^>^ metalsList = gcnew List<MetalModel^>;

		std::string query = "SELECT id, name, c, si, mn, p, s, cu, cr, ni, metal_type FROM metals";
		PGresult* result = PQexec(conn, query.c_str());

		if (PQresultStatus(result) == PGRES_TUPLES_OK) {
			int rowCount = PQntuples(result);

			for (int i = 0; i < rowCount; ++i) 
			{
				MetalModel^ metal = gcnew MetalModel();

				metal->id = std::stoi(PQgetvalue(result, i, 0));
				
				metal->name = StringConverterer::StdStringToSystemString(
					StringConverterer::convertToAnsi(PQgetvalue(result, i, 1))
				);

				metal->c = std::stof(PQgetvalue(result, i, 2));
				metal->si = std::stof(PQgetvalue(result, i, 3));
				metal->mn = std::stof(PQgetvalue(result, i, 4));
				metal->p = std::stof(PQgetvalue(result, i, 5));
				metal->s = std::stof(PQgetvalue(result, i, 6));
				metal->cu = std::stof(PQgetvalue(result, i, 7));
				metal->cr = std::stof(PQgetvalue(result, i, 8));
				metal->ni = std::stof(PQgetvalue(result, i, 9));
				metal->metalType = metal->mapMetalType(PQgetvalue(result, i, 10));

				metalsList->Add(metal);
			}
		}

		PQclear(result);

		return metalsList;
	}

	// TODO: make here to pass params as strings, too much actions
	bool MetalQueries::addMetal(MetalModel^ metal)
	{
		std::string utf8Name = StringConverterer::convertToUtf8(StringConverterer::SystemStringToStdString(metal->name));

		std::string query = "INSERT INTO metals (name, c, si, mn, p, s, cu, cr, ni, metal_type) VALUES ('"
			+ utf8Name + "', " + std::to_string(metal->c) + ", "
			+ std::to_string(metal->si) + ", " + std::to_string(metal->mn) + ", "
			+ std::to_string(metal->p) + ", " + std::to_string(metal->s) + ", "
			+ std::to_string(metal->cu) + ", " + std::to_string(metal->cr) + ", "
			+ std::to_string(metal->ni) + ", '" + metal->metalTypeToString(metal->metalType) + "');";

		PGresult* result = PQexec(conn, query.c_str());

		if (PQresultStatus(result) != PGRES_COMMAND_OK) {
			PQclear(result);
			return false;
		}

		PQclear(result);
		return true;
	}

	bool MetalQueries::updateMetalByName(System::String^ name, MetalModel^ updatedMetal) 
	{
		Console::WriteLine(name);
		Console::WriteLine("Updating:" + name);
		Console::WriteLine("TO: " + updatedMetal->name);
		std::string utf8BaseName = StringConverterer::convertToUtf8(StringConverterer::SystemStringToStdString(name));
		std::string utf8Name = StringConverterer::convertToUtf8(StringConverterer::SystemStringToStdString(updatedMetal->name));
		std::string query = "UPDATE metals SET c = " + std::to_string(updatedMetal->c) + ", "
			+ "si = " + std::to_string(updatedMetal->si) + ", "
			+ "mn = " + std::to_string(updatedMetal->mn) + ", "
			+ "p = " + std::to_string(updatedMetal->p) + ", "
			+ "s = " + std::to_string(updatedMetal->s) + ", "
			+ "cu = " + std::to_string(updatedMetal->cu) + ", "
			+ "cr = " + std::to_string(updatedMetal->cr) + ", "
			+ "ni = " + std::to_string(updatedMetal->ni) + ", "
			+ "metal_type = '" + updatedMetal->metalTypeToString(updatedMetal->metalType) + "', "
			+ "name = '" + utf8Name + "' "
			+ "WHERE name = '" + utf8BaseName + "';";

		PGresult* result = PQexec(conn, query.c_str());

		if (PQresultStatus(result) != PGRES_COMMAND_OK)
		{
			PQclear(result);
			return false;
		}

		PQclear(result);
		return true;
	}

	bool MetalQueries::dropMetalByName(String^ nameOfMetalToDrop)
	{
		Console::WriteLine("Deleting: " + nameOfMetalToDrop);
		std::string utf8Name = StringConverterer::convertToUtf8(StringConverterer::SystemStringToStdString(nameOfMetalToDrop));

		std::string query = "DELETE FROM metals WHERE name = '" + utf8Name + "';";

		PGresult* result = PQexec(conn, query.c_str());

		if (PQresultStatus(result) != PGRES_COMMAND_OK)
		{
			PQclear(result);
			return false;
		}
		return true;
	}

	MetalModel^ MetalQueries::parseHimSklad(PGresult* res)
	{
		MetalModel^ model = gcnew MetalModel;
		model->id = std::stoi(PQgetvalue(res, 0, 0));

		char* cName = StringConverterer::convertToAnsi(PQgetvalue(res, 0, 1));;

		model->name = StringConverterer::StdStringToSystemString(cName);
		model->c = strtof(PQgetvalue(res, 0, 2), NULL);
		model->si = strtof(PQgetvalue(res, 0, 3), NULL);
		model->mn = strtof(PQgetvalue(res, 0, 4), NULL);
		model->p = strtof(PQgetvalue(res, 0, 5), NULL);
		model->s = strtof(PQgetvalue(res, 0, 6), NULL);
		model->cu = strtof(PQgetvalue(res, 0, 7), NULL);
		model->cr = strtof(PQgetvalue(res, 0, 8), NULL);
		model->ni = strtof(PQgetvalue(res, 0, 9), NULL);
		model->metalType = model->mapMetalType(PQgetvalue(res, 0, 10));

		return model;
	}
}