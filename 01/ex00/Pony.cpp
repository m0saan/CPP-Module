//
// Created by moboustt on 30/1/2021.
//

#include "Pony.h"


Pony::Pony() {
    std::cout << " Pony's constructor is been called " << std::endl;
}

Pony::~Pony() {
    std::cout << " Pony's destructor is been called " << std::endl;
}

void Pony::gallop() const {
    std::cout << "Pony is Galloping..." << std::endl;
}

void Pony::move() const {
    std::cout << "Pony is moving... " << std::endl;
}