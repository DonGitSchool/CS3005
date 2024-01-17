#ifndef _FUNCTIONS_H_ //command for pre processing if not defined
#define _FUNCTIONS_H_ //defines it if it wasnt found
#include "functions.h"
#include <string> // std::string
#include <iostream> //std::cout, std::cin, setd::endl

//define,implement, build
//reference &

int getInteger(std::istream& is, std::ostream& os, const std::string& prompt) {
    int value;
    os << prompt;
    is >> value;
    return value;
}



int getDouble(std::istream& is, std::ostream& os, const std::string& prompt) {
    double value;
    os << prompt;
    is >> value;
    return value;
}

#endif /* _FUNCTIONS_H_ */