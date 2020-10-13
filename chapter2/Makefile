CXX := g++
CXXFLAGS := -Wall -std=c++2a -O3
ARTEFACTS := 2_1 2_2 2_3

.PHONY: all clean

all: $(ARTEFACTS)

$(ARTEFACTS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(ARTEFACTS)	
