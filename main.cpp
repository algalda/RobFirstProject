#include <iostream>
#include "foo.h"

int main() {
    foo f(5);
    std::cout << f.get_x() << "\n";
    f.set_x(10);
    std::cout << f.get_x() << "\n";
    return 0;
}