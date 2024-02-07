#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class CredHandler {
public:
    static std::map<std::string, std::string> ENV;
    static bool parseCreds();
};
