//
// Created by moboustt on 31/1/2021.
//

#include "Human.h"

Human::Human() {
    std::cout << "Human's constructor has been called!" << std::endl;
}

Human::~Human() {
    std::cout << "Human's destructor has been called!" << std::endl;
}

Brain Human::getBrain() const {
    return brain;
}

std::string Human::identify()  {
    return brain.identify();
}
