CXX := g++
CXXFLAGS := -Wall -std=c++2a -O3
ARTEFACTS := noexcept smart_pointers

.PHONY: all clean

all: $(ARTEFACTS)

$(ARTEFACTS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(ARTEFACTS)	
