//
// Created by moboustt on 6/8/2021.
//

#include "Base.hpp"
#include <random>
#include <iostream>

Base *generate(void) {
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, 2); // define the range

    int index = distr(gen);
    if (index == 0) {
        std::cout << "Instance of A is returned" << std::endl;
        return new A;
    } else if (index == 1) {
        std::cout << "Instance of B is returned" << std::endl;
        return new B;
    }
    std::cout << "Instance of D is returned" << std::endl;
    return new C;
}

void identify(Base *p) {
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}

void identify(Base &p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void) a;
        std::cout << "A" << std::endl;
    } catch (std::exception &e) {}

    try {
        B &b = dynamic_cast<B &>(p);
        (void) b;
        std::cout << "B" << std::endl;
    } catch (std::exception &e) {}

    try {
        C &c = dynamic_cast<C &>(p);
        (void) c;
        std::cout << "C" << std::endl;
    } catch (std::exception &e) {}
}

int main() {
    identify(generate());
    identify(*generate());
    return 0;
}