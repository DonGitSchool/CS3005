#include <string> // std::string
#include <iostream> //std::cout, std::cin, setd::endl
#include "functions.h"

// & makes it a reference
int main() {
    int a = getInteger(std::cin, std::cout, "Number 1: ");
    int b = getInteger(std::cin, std::cout, "Number 2: ");
    int c = addOperation(a,b);
    std::cout << a << "+" << b << " = " << c << std::endl;

    int n = getInteger (std::cin, std::cout, "N: ");
    int f = factorial(n);
    std::cout << n << "!=" << f << std::endl;

    double d = getDouble(std::cin, std::cout, "N: ");
    if(d > 1000) {
        std::cout << "big number" << std::endl;
    } else if( d < 0) {
        std::cout << "Negative Number" << std::endl;
    } else {
        std::cout << "Small Number" << std::endl;
    }
;

    /*
    int b = 17;
    std::string c = "hello";
    b = 18;
    b += 3;
    b = b + 5;
    return 0;
    */
}