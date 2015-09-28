#include "String_Functions.h"

std::vector<std::string> &split(const std::string &inputString, char delimeter, std::vector<std::string> &tokens) {
    std::stringstream sstream(inputString);
    std::string token;
    while (std::getline(sstream, token, delimeter)) {
        tokens.push_back(token);
    }
    return tokens;
}


std::vector<std::string> split(const std::string &inputString, char delimeter) {
    std::vector<std::string> tokens;
    split(inputString, delimeter, tokens);
    return tokens;
}


