//
// Created by moboustt on 6/8/2021.
//

#include <iostream>
#include "whatever.h"

std::ostream &operator<<(std::ostream &os, const Data &data) {
    os << "int: " << data._i << std::endl;
    os << "char: " << data._c << std::endl;
    os << "float: " << (float) data._f << 'f' << std::endl;
    os << "double: " << data._d << std::endl;

    return os;
}

uintptr_t serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {

    Data *data = new Data(42, '*', 42.05f, 42.5);
    uintptr_t _raw = serialize(data);

    std::cout << _raw << std::endl;

    Data *other = deserialize(_raw);
    std::cout << *other << std::endl;
    return 0;
}
