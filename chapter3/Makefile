CXX := g++
CXXFLAGS := -Wall -std=c++2a -O3
ARTEFACTS := lambdas function_object_wrapper function

.PHONY: all clean

all: $(ARTEFACTS)

$(ARTEFACTS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(ARTEFACTS)	
