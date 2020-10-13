#include <iostream>
#include <vector>

template<typename T, typename U>
class MagicType {
    public:
        T dark;
        U magic;
};

template<typename T>
using TrueDarkMagic = MagicType<std::vector<T>, std::string>;

using TruerDarkMagic = MagicType<std::vector<int>, std::string>;

// default template parameters

template<typename T = int, typename U = int>
auto add (T t, U u) {
    return t + u;
}

int main() {    
    TrueDarkMagic<bool> you;
    you.dark = std::vector<bool>(false);
    you.magic = "magic";

    TruerDarkMagic again;

    std::cout << add<int, double>(1, 2.23243) << std::endl;
    std::cout << add(1.2323, 23232) << std::endl;

    return 0;
}