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

std::string Zombie::random() {
    return randomNames[rand() % 17];
}

std::string Zombie::randomNames[17] = { "Antarctican","Muddy","Hollow","Crass","Riff","Heartless","Rock","Master","Sleazy","Deep","Juvenile","Meek","Orange","Big","Elfin","Scandalous"};
