// type inference

#include <iostream>

template<typename T, typename U>
auto add(T t, U u) {
    return t + u;
}

int main() {
    std::cout << add<int, double>(1, 2.01) << std::endl;
    std::cout << add<int, int>(1, 2) << std::endl;
    
    return 0;
}