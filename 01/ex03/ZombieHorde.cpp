//
// Created by moboustt on 31/1/2021.
//

#include "ZombieHorde.h"

ZombieHorde::ZombieHorde(int n): N(n) {
    std::cout << "ZombieHorde's constructor been called!" << std::endl;
    zombies = new Zombie[N];
    for (int i = 0; i < N ; ++i)
        zombies[i] = Zombie(zombies->random(), "walkers");
}

ZombieHorde::~ZombieHorde() {
    std::cout << "ZombieHorde's destructor been called!" << std::endl;
    delete zombies;
}

void ZombieHorde::announce() const {
    for (int i = 0; i < N; ++i)
        zombies[i].announce();
}
