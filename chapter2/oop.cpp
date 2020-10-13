#include <iostream>

// delegate constructor and inheritance constructor

class Base {
    public:
        int value1;
        int value2;

        Base() {
            value1 = 1;
        }

        Base(int value) : Base() { // delegate constructor
            value2 = value;
        }
};

class Subclass: public Base {
    public:
        using Base::Base; // inheritance constructor
};

// explicit virtual function override

struct Foo {
    virtual void foo(int);
};

struct Bar: Foo {
    virtual void foo(int) override; // legal
    //virtual void foo(float) override; // illegal
};

struct Final {
    virtual void foo() final;
};


struct SubFinal final: Final {};

// illegal
// struct SubSubFinal: SubFinal {};

// illegal
//struct SubFinal2 : Final {
//    void foo();
//};

int main() {
    Base b(100);
    std::cout << b.value1 << std::endl;
    std::cout << b.value2 << std::endl;

    Subclass s(2);
    std::cout << s.value1 << std::endl;
    std::cout << s.value2 << std::endl;

    return 0;
}