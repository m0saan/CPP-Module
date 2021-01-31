//
// Created by moboustt on 30/1/2021.
//

#ifndef CPP_MODULE_ZOMBIE_H
#define CPP_MODULE_ZOMBIE_H

#include <string>
#include <iostream>
#include <random>

class Zombie {
public:
    Zombie();
    Zombie(const std::string &name, const std::string &type);
    ~Zombie();
    void announce() const;
    std::string random();
    static std::string randomNames[17];
private:
    std::string zombieName;
    std::string zombieType;
};


#endif //CPP_MODULE_ZOMBIE_H
