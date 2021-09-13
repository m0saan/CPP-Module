#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0)
		return NULL;
    Zombie *Horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
		std::string tmpName = name + "_" + std::to_string(i+1);
        Zombie *z = new Zombie(tmpName);
        Horde[i] = *z;
    }
    return Horde;
}
