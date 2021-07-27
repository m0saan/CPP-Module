#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {

    public:

        explicit Zombie(std::string name);
        ~Zombie();
        void announce( void );

    private:

		Zombie();
        std::string _name;
};

#endif // __ZOMBIE_H__
