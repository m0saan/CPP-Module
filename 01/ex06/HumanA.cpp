//
// Created by moboustt on 1/2/2021.
//

#include "HumanA.h"

HumanA::HumanA() {
    std::cout << "HumanA's constructor has been called!" << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA's destructor has been called!" << std::endl;
}

void HumanA::attack() {
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, const Weapon &weapon) {
    this->name = name;
    this->weapon = weapon;
}
