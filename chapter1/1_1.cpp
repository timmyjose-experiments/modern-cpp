#include <iostream>
#include <functional>
#include "foo.h"

int add(int x, int y) {
    return x + y;
}

int main() {
    [out = std::ref(std::cout << "Result from C code: " << add(1, 4))]() {
        out.get() << std::endl;
    }();

    return 0;
}