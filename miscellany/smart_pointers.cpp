#include <iostream>
#include <memory>

// std::shared_ptr
void foo(std::shared_ptr<int> p) {
    (*p)++;
}

// std::unique_ptr
void bar(std::unique_ptr<int>& p) {
    (*p)++;
}

int main() {
    auto sp = std::make_shared<int>(10);
    foo(sp);
    std::cout << *sp << std::endl;

    auto up = std::make_unique<int>(10);
    bar(up);
    std::cout << *up << std::endl;

    return 0;
}