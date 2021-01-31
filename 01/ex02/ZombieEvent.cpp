//
// Created by moboustt on 30/1/2021.
//

#include "ZombieEvent.h"

ZombieEvent::ZombieEvent() {
    std::cout << "ZombieEvent's constructor been called!" << std::endl;
}

ZombieEvent::~ZombieEvent() {
    std::cout << "ZombieEvent's destructor been called!" << std::endl;
}

void ZombieEvent::setZombieType(const std::string &type) {
    zombieType = type;
}

Zombie *ZombieEvent::newZombie(const std::string &name) {
    Zombie *zombie = new Zombie(name, zombieType);
    return zombie;
}
