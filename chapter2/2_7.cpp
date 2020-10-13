// decltype(auto)

#include <iostream>

std::string s("lookup2");

std::string lookup1() {
    return "lookup1";
}

std::string& lookup2() {
    return s;
}

std::string lookup_a_string1() {
    return lookup1();
}

std::string& lookup_a_string2() {
    return lookup2();
}

// In C++-11, the parameter forwarding can be done using decltype(auto)

decltype(auto) lookup_a_string11() {
    return lookup1();
}

decltype(auto) lookup_a_string22() {
    return lookup2();
}

int main() {
    std::cout << lookup_a_string1() << std::endl;
    std::cout << lookup_a_string2() << std::endl;
    std::cout << lookup_a_string11() << std::endl;
    std::cout << lookup_a_string22() << std::endl;

    return 0;
}
