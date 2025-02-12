#pragma once
#include <iostream>
#include <string>

// Logt een bericht als ENABLE_LOGGING is gedefinieerd.
void log(const std::string& message){
    std::cout << message << std::endl;
};