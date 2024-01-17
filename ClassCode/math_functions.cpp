#include "functions.h"

int addOperation(int x, int y) { //body
    int z = x + y;
    return z;
}

int factorial(int x) {
    int n = 1;

    //counting for loop
    //for(initilization; test; increment)
    int i;
    for(i = 1; i <= x; i++ ) {
        n = n * i;
    }
    return n;
}// i++ adds one to the thing