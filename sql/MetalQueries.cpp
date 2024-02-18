#include "./headers/MetalQueries.h"

MetalQueries::MetalQueries() {
    conn = Database::getInstance().getConn();
}

std::vector<MetalModel> MetalQueries::getMetals() {
    std::vector<MetalModel> metals;

    std::string query = "SELECT id, name, c, si, mn, p, s, cu, cr, ni FROM metals";
    PGresult* result = PQexec(conn, query.c_str());

    if (PQresultStatus(result) == PGRES_TUPLES_OK) {
        int rowCount = PQntuples(result);

        metals.reserve(rowCount);

        for (int i = 0; i < rowCount; ++i) {
            MetalModel metal;

            metal.id = std::stoi(PQgetvalue(result, i, 0));
            metal.name = PQgetvalue(result, i, 1);
            metal.c = std::stof(PQgetvalue(result, i, 2));
            metal.si = std::stof(PQgetvalue(result, i, 3));
            metal.mn = std::stof(PQgetvalue(result, i, 4));
            metal.p = std::stof(PQgetvalue(result, i, 5));
            metal.s = std::stof(PQgetvalue(result, i, 6));
            metal.cu = std::stof(PQgetvalue(result, i, 7));
            metal.cr = std::stof(PQgetvalue(result, i, 8));
            metal.ni = std::stof(PQgetvalue(result, i, 9));

            metals.push_back(metal);
        }
    }

    PQclear(result);

    return metals;
}
