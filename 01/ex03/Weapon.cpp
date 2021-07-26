//
// Created by moboustt on 1/2/2021.
//

#include "Weapon.h"


Weapon::Weapon() {
    std::cout << "Weapon's constructor has been called!" << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Weapon's destructor has been called!" << std::endl;
}

const std::string &Weapon::getType() const {
    return _type;
}

void Weapon::setType(const std::string &pType) {
    _type = pType;
}

Weapon::Weapon(const std::string &type) {
    _type = type;
}
