#pragma once

#include <libpq-fe.h>
#include <iostream>
#include <string>
#include "../../models/SettingModel.h"
#include "Database.h"

class SettingsQueries 
{
public:
	SettingsQueries(const SettingsQueries&) = delete;
	SettingsQueries& operator=(const SettingsQueries&) = delete;

	static SettingsQueries& getInstance() 
	{
		static SettingsQueries instance;
		return instance;
	}

	SettingsModel getSettings();
	void updateSettings(short fmn_78_0, short fmn_78_1, short fs_45, short mn_95, short carbon,
		short mn_fmn78, short mn_mn95, short si_fs45, short c_carbon);

private:
	SettingsQueries();

	SettingsModel parseSettingsFromRow(PGresult* result, int row);

	PGconn* conn;
};
