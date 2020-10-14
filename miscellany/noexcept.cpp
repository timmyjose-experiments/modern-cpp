#include <iostream>

void func() noexcept {
    std::cout << "This function will cause the program to terminate" << std::endl;
    throw "terminate the program!";
}

int main() {
    func();
}