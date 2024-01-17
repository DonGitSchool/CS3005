#include <iostream>
#include <string>

// declaration, header, signature

int getInteger(std::istream& is, std::ostream& os, const std::string& prompt);

int addOperation(int x, int y); //this makes it so that it knows it exists but then wot need the full definition when compiled itll work the same
int factorial(int x);
int getDouble(std::istream& is, std::ostream& os, const std::string& prompt);