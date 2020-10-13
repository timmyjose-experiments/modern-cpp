#include <iostream>

template<typename T>
auto print_type_info(const T& t) {
    if constexpr (std::is_integral<T>::value) {
        return t + 1;
    } else { // the else is necessary here for constexpr to work correctly
        return t + 0.001;
    }
}

int main() {
    std::cout << print_type_info(5) << std::endl;
    std::cout << print_type_info(.2345) << std::endl;
}