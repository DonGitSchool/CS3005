# This is the compiler to use
CC = g++

# These are the flags passed to the compiler
CFLAGS = -c

all: hello

hello: hello.o
	$(CC) hello.o -o hello

hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp

clean:
	rm -rf *o hello

