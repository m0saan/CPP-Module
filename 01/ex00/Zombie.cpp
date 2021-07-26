#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
    std::cout << "Zombie's constructor called!" << std::endl;
}

Zombie::Zombie(std::string name): _name(name) {}

Zombie::Zombie(Zombie const &other) {
    *this = other;
}

Zombie::Zombie operator +(Zombie const &other) {
    *this = other;
    return *this;
}

Zombie::~Zombie() {
    std::cout << _name << " is gone!" << std::endl;
}

void Zombie::announce( void ) {
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
