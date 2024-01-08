#Code Compiler
CC = g++

#Compiler Flags
CFLAGS = -c

#Set Targets
TARGET = hello

#What it will be compiling
all: $(TARGET)

# makes it compile (ex: g++ -c hello.cpp)
$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp

#Links File (ex: g++ hello.o -o hello)
$(TARGET): $(TARGET).o
	$(CC) $(TARGET).o -o $(TARGET)

#cleans up everything 
clean:
	rm -rf *o hello
