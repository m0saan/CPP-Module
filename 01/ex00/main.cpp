#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() 
{
    Zombie z1(std::string("AntonIO"));
    z1.announce();

    Zombie *z2 = newZombie(std::string("Tumbler"));
    z2->announce();
    
    randomChump(std::string("Biter"));
    
    delete z2;
    
    return 0;
}
