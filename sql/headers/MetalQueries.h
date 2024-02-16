#pragma once

#include <libpq-fe.h>
#include <string>
#include <vector>
#include "../../models/MetalModel.h"
#include "Database.h"

class MetalQueries {
public:
    MetalQueries();
    std::vector<MetalModel> getMetals();
    bool addMetal(const MetalModel& metal);
    bool updateMetalById();
    bool dropMetalById();
private:
    PGconn* conn;
};