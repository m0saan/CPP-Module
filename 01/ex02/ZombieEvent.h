//
// Created by moboustt on 30/1/2021.
//

#ifndef CPP_MODULE_ZOMBIEEVENT_H
#define CPP_MODULE_ZOMBIEEVENT_H

#include "Zombie.h"

class ZombieEvent {
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(const std::string &type);
    Zombie* newZombie(const std::string &name);
private:
    std::string zombieType;
};


#endif //CPP_MODULE_ZOMBIEEVENT_H
