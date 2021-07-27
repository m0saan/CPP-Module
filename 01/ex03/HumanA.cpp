//
// Created by moboustt on 1/2/2021.
//

#include "HumanA.h"

HumanA::~HumanA() {
    std::cout << "HumanA's destructor has been called!" << std::endl;
}

void HumanA::attack() {
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string const & nameRef, Weapon &weaponRef) :  _weapon(weaponRef), _name(nameRef) {}
