#include "Database.h"

Database& Database::getInstance() {
    static Database instance;
    return instance;
}

Database::Database() : conn(nullptr) {
    // constructor implementation
}

Database::~Database() {
    // TODO: define whats wrong here and replace with normal solution
    if (conn != nullptr) {
         PQfinish(conn);
         conn = nullptr;
    }
}

PGconn* Database::getConn() {
    return conn;
}

bool Database::connectToDB() {  
    if (conn != nullptr) {
        std::cerr << "Connection already exists." << std::endl;
        return true;
    }

    std::string conn_params = "host=" + CredHandler::ENV["host"] + " dbname=" + CredHandler::ENV["dbname"] + " user=" + CredHandler::ENV["user"] +
        " password=" + CredHandler::ENV["password"] + " sslmode=" + CredHandler::ENV["sslmode"] + " client_encoding=UTF8";

    conn = PQconnectdb(conn_params.c_str());

    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
        conn = nullptr;
        return false;
    }

    return true;
}