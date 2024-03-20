# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -O2

# Source files
SOURCES = sort.cpp Insertion.cpp mergeSort.cpp quickSort.cpp Selection.cpp hyrbridAlgo.cpp 

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Executable name
EXECUTABLE = sort

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE) 


