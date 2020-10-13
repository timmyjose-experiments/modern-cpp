#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = { 1, 2, 3, 4, 5};

    for (auto& e : vec)
        e += 100;

    for (auto e: vec)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}