CXX = g++
CXXFLAGS =  -g -Wall -std=c++0x -pedantic -Wextra
EXECUTABLE = Out

all: Math.o Point.o Vector3D.o Driver.o
		$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $^
clean:
		rm -f *.o $(EXECUTABLE)
