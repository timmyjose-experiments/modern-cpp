// variables and initialisation

#include <iostream>
#include <vector>
#include <algorithm>

// if-switch
void ifSwitchDemo() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    // this idiom pollutes the local namespace with what are essentially local
    // variables, causing conflicts
    //const std::vector<int>::iterator iter = std::find(vec.begin(), vec.end(), 2);
    //if (iter != vec.end())
    //    *iter = 3;
    //
    //const std::vector<int>::iterator iter = std::find(vec.begin(), vec.end(), 3);
    //if (iter != vec.end())
    //    *iter = 4;

    // instead, we can simply scope such variables within an if-switch - C++17 and above
    if (const auto iter = std::find(vec.begin(), vec.end(), 2); iter != vec.end()) {
        *iter = 100;
    }

    if (const auto iter = std::find(vec.begin(), vec.end(), 3); iter != vec.end()) {
        *iter = 200;
    }

    for (const auto& e : vec)
        std::cout << e << " ";
    std::cout << std::endl;
        
}

int main() {
    ifSwitchDemo();

    return 0;
}