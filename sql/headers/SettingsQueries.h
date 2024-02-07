#pragma once

#include <libpq-fe.h>
#include <iostream>
#include <string>
#include "../../models/SettingModel.h"
#include "Database.h"

class SettingsQueries {
public:
    SettingsQueries();
    SettingsModel getSettings();
    void updateSettings(short fmn_78_0, short fmn_78_1, short fs_45, short mn_95, short carbon);

private:
    SettingsModel parseSettingsFromRow(PGresult* result, int row);
    PGconn* conn;
};
