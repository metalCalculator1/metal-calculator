#include "./headers/SettingsQueries.h"

SettingsQueries::SettingsQueries() {
    conn = Database::getInstance().getConn();
}

SettingsModel SettingsQueries::getSettings() {
    SettingsModel settings;

    std::string query = "SELECT fmn_78_0, fmn_78_1, fs_45, mn_95, carbon FROM settings LIMIT 1";
    PGresult* result = PQexec(conn, query.c_str());

    if (PQresultStatus(result) != PGRES_TUPLES_OK) {
        std::cerr << "Error executing query: " << PQerrorMessage(conn) << std::endl;
        PQclear(result);
        return settings;
    }

    if (PQntuples(result) > 0) {
        settings = parseSettingsFromRow(result, 0);
    }

    PQclear(result);
    return settings;
}

void SettingsQueries::updateSettings(short fmn_78_0, short fmn_78_1, short fs_45, short mn_95, short carbon) {
    std::string query = "UPDATE settings SET fmn_78_0 = " + std::to_string(fmn_78_0) +
        ", fmn_78_1 = " + std::to_string(fmn_78_1) +
        ", fs_45 = " + std::to_string(fs_45) +
        ", mn_95 = " + std::to_string(mn_95) +
        ", carbon = " + std::to_string(carbon) +
        " WHERE id=0";
    PGresult* result = PQexec(conn, query.c_str());

    if (result) {
        PQclear(result);
    }
}

SettingsModel SettingsQueries::parseSettingsFromRow(PGresult* result, int row) {
    SettingsModel settings;

    settings.fmn_78_0 = std::stoi(PQgetvalue(result, row, 0));
    settings.fmn_78_1 = std::stoi(PQgetvalue(result, row, 1));
    settings.fs_45 = std::stoi(PQgetvalue(result, row, 2));
    settings.mn_95 = std::stoi(PQgetvalue(result, row, 3));
    settings.carbon = std::stoi(PQgetvalue(result, row, 4));

    return settings;
}