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

    void setWeapon(Weapon &weapon);

    void setName(const std::string &name);

private:
    Weapon *weapon;
    std::string name;
};


#endif //CPP_MODULE_HUMANB_H
