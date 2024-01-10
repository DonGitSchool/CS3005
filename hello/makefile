#target_file: dependency1 dependency2

#Code Compiler
CC = g++

#Compiler Flags
CFLAGS = -c

#Set Targets
TARGET = hello

#ADD -std=c++11 to any g++ command

#What it will be compiling (ex: all: hello ascii_image)
all: $(TARGET)

#Links File (ex: g++ hello.o -o hello)
$(TARGET): $(TARGET).o
	$(CC) -std=c++11 $(TARGET).o -o $(TARGET)

# makes it compile (ex: g++ -c hello.cpp)
$(TARGET).o: $(TARGET).cpp
	$(CC) -std=c++11 $(CFLAGS) $(TARGET).cpp

#cleans up everything 
clean:
	rm -rf *o hello
