#include <iostream>
#include <functional>
#include "foo.h"

int main() {
    [out = std::ref(std::cout << "Result from C code: " << add(1, 4))]() {
        out.get() << std::endl;
    }();

    return 0;
}