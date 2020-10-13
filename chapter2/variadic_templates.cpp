#include <iostream>

template<typename... Ts>
void magic(Ts... args) {
    std::cout << sizeof...(args) << std::endl;
}

// recursion for unpacking templates

// base case
template<typename T0>
void printf1(T0 value) {
    std::cout << value << std::endl;
}

// inductive case
template<typename T, typename... Ts>
void printf1(T value, Ts... args) {
    std::cout << value << std::endl;
    printf1(args...);
}

// simpler way in C++17 

template<typename T, typename... Ts>
void printf2(T value, Ts... args) {
    std::cout << value << std::endl;
    if constexpr(sizeof...(args) > 0) printf2(args...);
}

template<auto value> void foo() {   
    std::cout << value << std::endl;
}

// folding

template<typename... T>
auto sum(T... t) {
    return (t + ...);
}

template<typename... T>
auto product(T... t) {
    return (t * ...);
}

int main() {
    magic();
    magic(1);
    magic(2, 2);
    magic(4, false, "");

    printf1(1, 2, true, "hello", 2.2323);
    printf2(1, 2, false, "world", -121.3234242);

    std::cout << sum(1, 2, 3, 4, 5) << std::endl;
    std::cout << product(1, 2, 3, 4, 5) << std::endl;

    foo<10>();
    
    return 0;
}