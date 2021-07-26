#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {

    public:

        Zombie();
        Zombie(std::string name);
        Zombie(Zombie const &other);
        ~Zombie();
        Zombie operator +(Zombie const &other);
        void announce( void );

    private:

        std::string _name;
};

#endif // __ZOMBIE_H
