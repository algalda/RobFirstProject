#include "foo.h"

foo::foo(int x) {
    this->x = x;
}

int foo::get_x() {
    return this->x;
}

void foo::set_x(int x) {
    this->x = x;
}