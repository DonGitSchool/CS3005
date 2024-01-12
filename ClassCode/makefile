all:calculate

calculate: calculate.o input_output.o 
	g++ -std=c++11 -o calculate calculate.o input_output.o 

calculate.o: calculate.cpp functions.h
	g++ -std=c++11 -c calculate.cpp

input_output.o: input_output.cpp functions.h
	g++ -std=c++11 -c input_output.cpp
