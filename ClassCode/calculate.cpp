#include <string> // std::string
#include <iostream> //std::cout, std::cin, setd::endl
#include "functions.h"

// & makes it a reference
int main() {
    int a = getInteger(std::cin, std::cout, "Number 1: ");
    int b = getInteger(std::cin, std::cout, "Number 2: ");
    int c = a + b;
    std::cout << a << "+" << b << " = " << c << std::endl;
    /*
    int b = 17;
    std::string c = "hello";
    b = 18;
    b += 3;
    b = b + 5;
    return 0;
    */
}