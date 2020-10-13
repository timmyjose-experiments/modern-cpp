#include <iostream>

using foo = void(int);

void functional(foo f) {
    f(1);
}

int main() {
    auto f = [](int x) {
        std::cout << x << std::endl;
    };

    // this works only if the capture list is empty
    functional(f);
    f(1);

    return 0;
}