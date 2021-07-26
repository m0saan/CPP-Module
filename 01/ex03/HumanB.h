//
// Created by moboustt on 1/2/2021.
//

#ifndef CPP_MODULE_HUMANB_H
#define CPP_MODULE_HUMANB_H

#include "Weapon.h"

class HumanB {
public:
    HumanB();
    explicit HumanB(const std::string &pName);
    ~HumanB();

    void attack();

    void setWeapon(Weapon const &weapon);

    void setName(std::string const &name);

private:
    Weapon *_weapon;
    std::string _name;
};


#endif //CPP_MODULE_HUMANB_H
