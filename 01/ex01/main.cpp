#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int N = 6;
    Zombie *Horde = zombieHorde(N, std::string("Roamer"));
    if (Horde == NULL)
		return (EXIT_FAILURE);
    for (int i =0; i<N; ++i)
        Horde[i].announce();
    delete[] Horde;
    return (EXIT_SUCCESS);
}
