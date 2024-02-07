#pragma once

#include "../../CredHandler.h"

#include <libpq-fe.h>
#include <iostream>
#include <format>

class Database {
public:
    static Database& getInstance();

    Database(const Database&) = delete;
    Database& operator=(const Database&) = delete;
    Database(Database&&) = delete;
    Database& operator=(Database&&) = delete;

    ~Database();

    PGconn* getConn();

    bool connectToDB();

private:
    Database();

    PGconn* conn;
};