//
// Created by moboustt on 1/2/2021.
//

#include "HumanB.h"

HumanB::HumanB() {
    std::cout << "HumanA's constructor has been called!" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "HumanA's destructor has been called!" << std::endl;
}

void HumanB::attack() {
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

void HumanB::setWeapon(const Weapon &wp) {
    this->weapon = wp;
}

HumanB::HumanB(const std::string& pName) {
    name = pName;
}
