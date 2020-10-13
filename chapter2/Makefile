CXX := g++
CXXFLAGS := -Wall -std=c++2a -O3
ARTEFACTS := 2_1 2_2 2_3 2_4 2_5 2_6 2_7 if_constexpr range_for templates variadic_templates

.PHONY: all clean

all: $(ARTEFACTS)

$(ARTEFACTS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(ARTEFACTS)	
