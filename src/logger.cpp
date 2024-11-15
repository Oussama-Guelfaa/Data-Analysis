#include <iostream>
#include "logger.h"

void log(const std::string& message) {
    std::cout << "[LOG]: " << message << "\n";
}
