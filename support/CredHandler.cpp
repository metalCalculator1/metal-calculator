#include "./headers/CredHandler.h"

std::map<std::string, std::string> CredHandler::ENV;

bool CredHandler::parseCreds() {
    std::ifstream file(".env");
    if (!file.is_open()) {
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        size_t separatorPos = line.find('=');
        if (separatorPos != std::string::npos) {
            std::string key = line.substr(0, separatorPos);
            std::string value = line.substr(separatorPos + 1);
            ENV[key] = value;
        }
    }

    file.close();
    return true;
}