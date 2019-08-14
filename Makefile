CXX = g++
CXXFLAGS = -Wall -Wextra -O3 -std=c++11
CXXLINKERFLAGS = 

.PHONY : all

all:
	$(CXX) $(CXXFLAGS) -o HG-Git-Tool/HG-Git-Tool HG-Git-Tool/main.cpp

install:
	cp HG-Git-Tool/HG-Git-Tool /usr/local/bin/HG-Git-Tool

clean:
	rm -f HG-Git-Tool/HG-Git-Tool
	rm -f /usr/local/bin/HG-Git-Tool
