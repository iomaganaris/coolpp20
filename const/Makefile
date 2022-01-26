CXX=clang++
CXXFLAGS=-Wall -g -std=c++20

all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))

%.out: %.cpp Makefile
	$(CXX) $(CXXFLAGS) $< -o $(@:.out=)

clean: $(patsubst %.cpp, %.clean, $(wildcard *.cpp))

%.clean:
	rm -f $(@:.clean=)

