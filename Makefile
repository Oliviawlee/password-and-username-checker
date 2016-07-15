CXX = g++
CXXFLAGS = -Wall -std=c++11

all: code

code: code.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
