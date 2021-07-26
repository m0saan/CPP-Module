#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {
    int N = 10;
    Zombie *Horde = zombieHorde(N, std::string("Mosan"));
    for (int i =0; i<N; ++i)
        Horde[i].announce();
    delete[] Horde;
    return 0;
}
