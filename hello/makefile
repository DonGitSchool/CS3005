#Code Compiler
CC = g++

#Compiler Flags
CFLAGS = -c

#What it will be compiling
all: hello

# makes it compile (basically g++ -c hello.cpp)
hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp

#Links File (g++ hello.o -o hello)
hello: hello.o
	$(CC) hello.o -o hello

#cleans up everything 
clean:
	rm -rf *o hello
