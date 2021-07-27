//
// Created by moboustt on 1/2/2021.
//

#ifndef __HUMAN_A_H__
#define __HUMAN_A_H__

#include "Weapon.h"

class HumanA {
public:

    HumanA(std::string const &name, Weapon &weapon);
    ~HumanA();

    void attack();

private:

    Weapon &_weapon;
    std::string _name;
};


#endif // __HUMAN_A_H__
