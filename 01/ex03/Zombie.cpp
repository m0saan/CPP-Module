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
    int randomNumber = 0 + (rand() % static_cast<int>(36 - 0 + 1));
    return randomNames[randomNumber];
}

std::string Zombie::randomNames[36] = {"Flamer","Creeper","Griever","Grasper","Bender","Hopper","Tumbler","Biter","Frantic","Spouter", "Carnal Zombie", "Rumbler", "Pack Zombie", "Groaner", "Hook Zombie", "Private Zombie", "Temper", "Blubber Zombie", "Crusher", "Inflated", "Antarctican","Muddy","Hollow","Crass","Riff","Heartless","Rock","Master","Sleazy","Deep","Juvenile","Meek","Orange","Big","Elfin","Scandalous"};

