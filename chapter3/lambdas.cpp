#include <iostream>

/*
    [] -> empty capture list
    [name1, name2, ...] -> value capture
    [&name1, &name, ...] -> reference capture
    [&] -> automatic reference capture
    [=] -> automatic value capture
*/

// value capture - lambda value capture is at point of definition, not call (lexical scoping at play)
void lambda_value_capture() {
    int value = 1;
    auto copy_value = [value] {
        return value;
    };

    value = 100;
    auto stored_value = copy_value();
    std::cout << "value = " << value <<", and stored value = " << stored_value << std::endl;
}

// reference capture - this does reflect changes to the source value since it is a reference,
// and not a copied value
void lambda_reference_capture() {
    int value = 1;
    auto copy_reference = [&value] {
        return value;
    };

    value = 100;
    auto stored_value = copy_reference();
    std::cout << "value = " << value << ", and stored_value = " << stored_value << std::endl;
}

void lambda_expression_capture() {
    auto important = std::make_unique<int>(1);
    auto add = [v1 = 1, v2 = std::move(important)](int x, int y) {
        return x + y + v1 + *v2;
    };
    std::cout << add(11, 14) << std::endl;
}

void lambda_generic() {
    auto add = [](auto x, auto y) {
        return x + y;
    };

    std::cout << add(1, 2) << std::endl;
    std::cout << add(1.2, 2.3) << std::endl;
    std::cout << add(10, 11.2323) << std::endl;
}

int main() {
    lambda_value_capture();
    lambda_reference_capture();
    lambda_expression_capture();
    lambda_generic();

    return 0;
}