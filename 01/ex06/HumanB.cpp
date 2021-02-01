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
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}


HumanB::HumanB(const std::string& pName) : name(pName) { }

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}

void HumanB::setName(const std::string &name) {
    HumanB::name = name;
}
