// structured bindings

#include <iostream>
#include <tuple>

std::tuple<int, double, bool, std::string> f() {
    return std::make_tuple(1, 2.718238, false, "Hello");
}

int main() {
    auto [i, d, b, s] = f();

    std::cout << "i = " << i << std::endl;
    std::cout << std::is_same<decltype(100), decltype(i)>::value << std::endl;

    std::cout << "d = " << d << std::endl;
    std::cout << std::is_same<decltype(1.232), decltype(d)>::value << std::endl;

    std::cout << "b = " << b << std::endl;
    std::cout << std::is_same<decltype(true), decltype(b)>::value << std::endl;

    std::cout << "s = " << s << std::endl;
    std::cout << std::is_same<decltype(std::string("hi")), decltype(s)>::value << std::endl;
    
    return 0;
}