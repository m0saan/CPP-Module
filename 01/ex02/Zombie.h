//
// Created by moboustt on 30/1/2021.
//

#ifndef CPP_MODULE_ZOMBIE_H
#define CPP_MODULE_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie();
    Zombie(const std::string &name, const std::string &type);
    ~Zombie();
    void announce() const;
private:
    std::string zombieName;
    std::string zombieType;
};


#endif //CPP_MODULE_ZOMBIE_H
