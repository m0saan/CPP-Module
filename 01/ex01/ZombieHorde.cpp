#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *Horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        Zombie *z = new Zombie(name);
        Horde[i] = *z;
    }
    return Horde;
}
