//
// Created by moboustt on 30/1/2021.
//

#include "Zombie.h"

void Zombie::announce() const {
    std::cout << "< " << zombieName << " ( " << zombieType << " )>" << " Braiiiiiiinnnssss..." << std::endl;

}

Zombie::Zombie() {
    std::cout << "Zombie's constructor been called!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie's destructor been called!" << std::endl;
}

Zombie::Zombie(const std::string &name, const std::string &type): zombieName(name), zombieType(type) {

}
