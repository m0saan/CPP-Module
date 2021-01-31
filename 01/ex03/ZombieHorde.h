//
// Created by moboustt on 31/1/2021.
//

#ifndef CPP_MODULE_ZOMBIEHORDE_H
#define CPP_MODULE_ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.h"

class ZombieHorde {
public:
    explicit ZombieHorde(int n);
    ~ZombieHorde();
    void announce() const;
private:
    int N;
    Zombie *zombies;
};


#endif //CPP_MODULE_ZOMBIEHORDE_H
