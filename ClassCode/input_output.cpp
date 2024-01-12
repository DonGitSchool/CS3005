#include "functions.h"
#include <string> // std::string
#include <iostream> //std::cout, std::cin, setd::endl
int getInteger(std::istream& is, std::ostream& os, const std::string& prompt) {
    int value;
    os << prompt;
    is >> value;
    return value;
}