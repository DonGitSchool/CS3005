#target_file: dependency1 dependency2

#Code Compiler
CC = g++

#Compiler Flags
CFLAGS = -c

#Set Targets
TARGET2 = questions_3

#ADD -std=c++11 to any g++ command

#What it will be compiling (ex: all: hello ascii_image)
all: $(TARGET2)

#Links File (ex: g++ hello.o -o hello)
$(TARGET2): $(TARGET2).o
	$(CC) -std=c++11 $(TARGET2).o -o $(TARGET2)

# makes it compile (ex: g++ -c hello.cpp)
$(TARGET2).o: $(TARGET2).cpp
	$(CC) -std=c++11 $(CFLAGS) $(TARGET2).cpp

#cleans up everything 
clean:
	rm -rf *o hello
