#include <iostream>
#include <type_traits>

void foo(char*);
void foo(int);

int main() {
    if (std::is_same<decltype(NULL), decltype(0)>::value ||
        std::is_same<decltype(NULL), decltype(0L)>::value) 
            std::cout << "NULL == 0" << std::endl;

    if (std::is_same<decltype(NULL), decltype((void*)0)>::value)
        std::cout << "NULL == (void*) 0" << std::endl;

    if (std::is_same<decltype(NULL), std::nullptr_t>::value)
        std::cout << "NULL == nullptr" << std::endl;        

    foo(0); // calls foo(int)
    //foo(NULL); // compile error
    foo(nullptr); // calls foo(char*)        

    return 0;            
}

void foo(int) {
    std::cout << "foo(int) called" << std::endl;
}

void foo(char*) {
    std::cout << "foo(char*) called" << std::endl;
}