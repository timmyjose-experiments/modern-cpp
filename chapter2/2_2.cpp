// constexpr

#include <iostream>

#define LEN 10

int len_foo() {
    int i = 2;
    return i;
}

constexpr int len_foo_constexpr() {
    return 5;
}

constexpr int fibonacci(const int n) {
    return n == 1 || n == 2 ? 1 :  fibonacci(n - 1) + fibonacci(n - 2);
}

// c++14 and higher only
constexpr int factorial(int n) {
    if (n <= 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    char arr_1[10]; // legal
    char arr_2[LEN]; // legal

    int len = 10;
    char arr_3[len]; // illegal, but works on most compilers

    const int len_2 = 1 + 1;
    char arr_4[len_2]; // illegal, but works on most compilers

    constexpr int len_2_constexpr = 1 + 2 + 3;
    char arr_5[len_2_constexpr]; // legal

    char arr_6[len_foo()]; // illegal, but works in most compilers
    char arr_7[len_foo_constexpr() + 100]; // legal

    std::cout << fibonacci(12) << std::endl;
    std::cout << factorial(10) << std::endl;

    static_assert(factorial(10) == 3628800);

    //int n;
    //std::cin >> n;
    //std::cout << "The factorial of " << n << " is " << factorial(n) << std::endl;

    return 0;
}