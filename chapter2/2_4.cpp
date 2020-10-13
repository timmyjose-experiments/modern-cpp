// initializer lists

#include <iostream>
#include <vector>
#include <initializer_list>

class Foo {
    public:
        int value_a;
        int value_b;

        Foo(int a, int b): value_a(a), value_b(b) {}
};

// more uniform initialisation with C++11 (and newer)        
class Bar {
    public:
        std::vector<int> vec;

        Bar(std::initializer_list<int> list) {
            for (auto e : list)
                vec.push_back(e);
        }

        void bar(std::initializer_list<int> list) {
            for (auto e : list)
                vec.push_back(e);
        }
};

int main() {
    int arr[3] = {1, 2, 3};
    Foo foo(1, 2);
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "arr[0] = " << arr[0] << std::endl;
    std::cout << "foo: " << foo.value_a << ", " << foo.value_b << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << std::endl;

    Foo foo2 { 11, 12};
    std::cout << "foo2 = " << foo2.value_a << ", " << foo2.value_b << std::endl;

    Bar bar = {1, 2, 3, 4, 5};
    for (const auto& e : bar.vec)
        std::cout << e << std::endl;
    
    bar.bar({10, 11, 12, 13, 14, 15});
    for (const auto& e : bar.vec)
        std::cout << e << std::endl;

    return 0;
}