//
// Created by moboustt on 1/2/2021.
//

#ifndef CPP_MODULE_HUMANA_H
#define CPP_MODULE_HUMANA_H

#include "Weapon.h"

class HumanA {
public:
    HumanA();
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();

    void attack();

private:
    Weapon *weapon;
    std::string name;
};


#endif //CPP_MODULE_HUMANA_H
