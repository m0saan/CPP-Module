//
// Created by moboustt on 1/2/2021.
//

#ifndef CPP_MODULE_WEAPON_H
#define CPP_MODULE_WEAPON_H

#include <string>
#include <iostream>

class Weapon {
public:
    Weapon();
    explicit Weapon(const std::string &str);
    ~Weapon();

    const std::string &getType() const;
    void setType(const std::string &type);

private:
    std::string type;
};


#endif //CPP_MODULE_WEAPON_H
